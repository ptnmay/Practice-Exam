/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_lst_rm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:38:36 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/25 12:31:21 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return ;
    
    t_list *tmp = *begin_list;

    if (cmp(tmp->data, data_ref) == 0)
    {
        *begin_list = tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    tmp = *begin_list;
    ft_list_remove_if(&tmp->next, data_ref, cmp);
}