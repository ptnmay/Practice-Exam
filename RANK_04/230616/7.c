/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 06:48:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/06/16 07:00:55 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <sys/wait.h>
 #include <string.h>

static void perr(char *s) {
	while(*s)
		write(2, s++, 1);
}

static int cd(char **av, int i) {
	if (i != 2)
		return(perr("bad av\n"), 1);
	else if (chdir(av[1]) == -1)
		return(perr("can't cd to "), perr(av[1]), perr("\n"), 1);
	return(0);
}

static int exec(char **av, char **envp, int i) {
	int status;
	int fds[2];
	int pip = (av[i] && !strcmp(av[i], "|"));
	if (pip && pipe(fds) == -1)
		return(perr("fatal\n"), 1);
	int pid = fork();
	if (!pid) {
		av[i] = 0;
		if (pip && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
			return(perr("fatal\n"), 1);
		execve(*av, av, envp);
		return(perr("can't execute\n"), 1);
	}
	waitpid(pid, &status, 0);
	if (pip && (dup2(fds[1], 1) == -1 || close(fds[0]) == -1 || close(fds[1]) == -1))
		return(perr("fatal\n"), 1);
	return WIFEXITED(status) && WEXITSTATUS(status);
}

 int main(int ac, char **av, char **envp) {
	(void)ac;
	int status = 0;
	while(*av && *(av + 1)) {
		av++;
		int i = 0;
		//just didn't type && -..-
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