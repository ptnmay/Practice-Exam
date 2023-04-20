/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_list_foreach.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 20:46:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/20 20:51:42 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *lst_ptr;

    lst_ptr = begin_list;

    while(lst_ptr)
    {
        (*f)(lst_ptr->data);
        lst_ptr = lst_ptr->next;
    }
}