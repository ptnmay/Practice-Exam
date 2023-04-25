/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_lst_foreach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:37:37 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/24 21:15:23 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


//2
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *lst;

    lst = begin_list;
    while(lst)
    {
        (*f)(lst->data);
        lst = lst->next;
    }
}










//1
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *lst;

    lst = begin_list;

    while(lst)
    {
        (*f)(lst->data);
        lst = lst->next;
    }
}