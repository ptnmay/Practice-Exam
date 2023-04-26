/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_lst_foreach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 01:23:23 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/22 02:08:45 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *lst;

    lst = begin_list;
    while(lst)
    {
        (*f)(lst->data);
        lst = lst->next;
    }
}