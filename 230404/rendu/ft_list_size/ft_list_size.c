
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    int          data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int count = 0;

    while(begin_list)
    {
        begin_list = begin_list->next;
        count++;
    }
    return(count);
}

// int main()
// {
//     t_list *head;
//     t_list *head2;
//     t_list *head3;
//     t_list *head4;

//     head = malloc(sizeof(t_list));
//     head->data = 1;
//     head->next = head2;

//     head2 = malloc(sizeof(t_list));
//     head2->data = 3;
//     head2->next = head3;

//     head3 = malloc(sizeof(t_list));
//     head3->data = 6;
//     head3->next = head4;

//     head4 = malloc(sizeof(t_list));
//     head4->data = 5;
//     head4->next = NULL;
//     printf("%d\n", ft_list_size(head));
// }