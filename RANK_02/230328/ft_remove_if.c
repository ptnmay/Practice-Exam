/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:32:08 by psaeyang          #+#    #+#             */
/*   Updated: 2023/03/28 19:02:15 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    int             data;
}                   t_list;

t_list  *ft_newlist(int num)
{
    t_list *item = malloc(sizeof(t_list));
    item->data = num;
    item->next = NULL;
    return(item);
}

t_list *add_front(t_list *old, t_list *new)
{
    new->next = old;
    return(new);
}

void    print_list(t_list *list)
{
    while(list)
    {
        printf("%d\n", list->data);
        list = list->next;
    }
}

int main(void)
{
    t_list *item1 = ft_newlist(2);
    t_list *item2 = ft_newlist(4);
    t_list *item3 = ft_newlist(7);
    // item1->next = item2;
    t_list *list = NULL;
    list = add_front(list, item1);
    list = add_front(list, item2);
    list = add_front(list, item3);
    print_list(list);
    // printf("data = %d\n", item1->data);
    // printf("next = %d\n", item1->next->data);
}
