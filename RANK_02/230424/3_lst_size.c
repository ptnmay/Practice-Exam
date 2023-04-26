/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_lst_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 05:45:38 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/24 05:47:18 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    if (begin_list == NULL)
        return(0);
        
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

    t_list *lst = malloc(sizeof(t_list));
    t_list *lst2 = malloc(sizeof(t_list));
    t_list *lst3 = malloc(sizeof(t_list));

    lst->next = lst2;
    lst2->next = NULL;
    // lst2->next = lst3;
    // lst3->next = NULL;
    printf("%d\n", ft_list_size(lst));
}