#include <unistd.h>


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;

        while(av[1][i])
        {
            if (av[1][i] == '_')
            {
                i++;
                ft_putchar(av[1][i] - 32);
                // i++;
            }
            // else
            // {
                ft_putchar(av[1][i]);

                i++;
            // }
            
        }
    }
    write(1, "\n", 1);
}