/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_lst_for.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:31:51 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/25 12:33:47 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *tmp;

    tmp = begin_list;

    while(tmp)
    {
        (*f)(tmp->data);
        tmp = tmp->next;
    }
}
