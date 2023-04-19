/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ft_list_foreach.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:59:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/19 09:08:01 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}