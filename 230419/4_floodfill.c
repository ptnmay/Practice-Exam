/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_floodfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:52:04 by psaeyang          #+#    #+#             */
/*   Updated: 2023/04/19 09:02:55 by psaeyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remember it

typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
        ||tab[cur.y][cur.x] != to_fill)
        return ;

    tab[cur.y][cur.x] = 'F';
    fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
}


void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab, size, begin, tab[begin.y][begin.x]);
}
