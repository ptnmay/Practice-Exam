/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_lst_rm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 04:40:27 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/24 22:15:21 by psaeyang         ###   ########.fr       */
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

    // if ((tmp->data, data_ref, cmp) == 0) wrong
    if (cmp(tmp->data, data_ref) == 0)
    {
        *begin_list = tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    tmp = *begin_list;
    ft_list_remove_if(&tmp->next, data_ref, cmp);
}

//1
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return ;
    
    t_list *tmp = *begin_list;

    if (cmp(tmp->data, data_ref, cmp) == 0)
    {
        *begin_list = tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    tmp = *begin_list;
    ft_list_remove_if(&tmp->next, data_ref, cmp);
}












//gh
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}