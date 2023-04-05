#include <unistd.h>

int ft_atoi(char *s)
{
    int res = 0;
    int i = 0;
    while(s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }
    return(res);
}

void    ft_nbr(int n)
{
    if (n > 9)
        ft_nbr(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int main(int ac, char **av)
{
    if (ac != 1)
    {
        int i = 0;
        int z = 1;
        while(z <= 9)
        {
            ft_nbr(z);
            write(1, " x ", 3);
            ft_nbr(ft_atoi(av[1]));
            write(1, " = ", 3);
            ft_nbr(z * ft_atoi(av[1]));
            z++;
            write(1, "\n", 1);

        }
    }
    else

        write(1, "\n", 1);
}   