/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_lst_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 04:08:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/23 04:26:43 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    if (!begin_list)
        return(0);
    t_list *tmp;
    int i = 0;

    tmp = begin_list;

    while(tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return(i);
}

int main()
{
    t_list *lst = malloc(sizeof(t_list));
    t_list *lst2 = malloc(sizeof(t_list));
    t_list *lst3 = malloc(sizeof(t_list));
    t_list *lst4 = malloc(sizeof(t_list));
    t_list *lst5 = malloc(sizeof(t_list));
    t_list *lst6 = malloc(sizeof(t_list));
    t_list *lst7 = malloc(sizeof(t_list));

    lst->next = lst2;
    lst2->next = lst3;
    lst3->next = lst4;
    lst4->next = lst5;
    lst5->next = lst6;
    lst6->next = NULL;

    printf("%d\n", ft_list_size(lst));
}