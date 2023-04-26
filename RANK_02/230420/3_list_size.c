/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_list_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:37:04 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 11:00:40 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

int	ft_list_size(t_list *begin_list)
{
    int i = 0;

    while(begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return(i);
}

int main()
{
        // t_list l;
        // t_list l2;
        // t_list l3;

    
        // l.next = &l2;

    t_list *lst = malloc(sizeof(t_list));
    t_list *lst2 = malloc(sizeof(t_list));
    t_list *lst3 = malloc(sizeof(t_list));

    lst->next = lst2;
    lst2->next = lst3;
    lst3->next = NULL;
    printf("%d\n", ft_list_size(lst));
}