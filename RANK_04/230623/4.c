/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:00:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/06/23 07:40:11 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

static void perr(char *s) {
	while(*s)
		write(2, s++, 1);
}

static int cd(char **av, int i) {
	if (i != 2)
		return(perr("bad av\n"), 1);
	else if (chdir(av[1]) == -1)
		return(perr("error cd to "), perr(av[1]), perr("\n"), 1);
	return 0;
}

static int exec(char **av, char **envp, int i) {
	int status;
	int fds[2];
	int pip = (av[i] && !strcmp(av[i], "|"));
	if (pip && pipe(fds) == -1)
		return(perr("error fatal\n"), 1);
	int pid = fork();
	if (!pid) {
		av[i] = 0;
		if (pip && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
			return(perr("fatal\n"), 1);
		execve(*av, av, envp);
		return(perr("cant execute "), perr(*av), perr("\n"), 1);
	}
	waitpid(pid, &status, 0);
	if (pip && (dup2(fds[0], 0) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
		return(perr("fatal\n"), 1);
	return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int ac, char **av, char **envp) {
	(void)ac;
	int status = 0;
	while(*av && *(av + 1)) {
		av++;
		int i = 0;
		while(av[i] && strcmp(av[i], "|") && strcmp(av[i], ";")) 
			i++;
		if (!strcmp(*av, "cd"))
			status = cd(av, i);
		else if (i)
			status = exec(av, envp, i);
		av += i;
	}
	return(status);
}
//pass with practice examshell