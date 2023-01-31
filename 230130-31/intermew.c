#include <unistd.h>

int ft_check(char c, char *str, int index)
{
    int i;

    i = 0 ;
    while(str[i] && (i < index || index == -1))
    {
        if (str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 3)
    {
        while(av[1][i])
        {
            if ((ft_check(av[1][i] ,av[2] , -1) == 1) && (ft_check(av[1][i] ,av[1] , i) == 0))
                write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}
