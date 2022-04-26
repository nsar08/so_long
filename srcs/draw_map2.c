/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:13:46 by nsar              #+#    #+#             */
/*   Updated: 2022/04/06 13:45:45 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_scoreboard(t_info *info, int x, int y)
{
	mlx_put_image_to_window(info->mlx, info->win, info->img.scoreboard,
		x, y);
	mlx_string_put(info->mlx, info->win, 60, 30, 0x99FFFFFF,
		"Movements : ");
	mlx_string_put(info->mlx, info->win, 150, 30, 0x99FFFFFF,
		ft_itoa(info->movement));
}

void	draw_img(t_info *info, int i, int j)
{
	if (info->map[i][j] == '1')
		draw_wall(info, j, i);
	else if (info->start == 0 && info->map[i][j] == '0')
		draw_tile(info, j, i);
	else if (info->start == 0 && info->map[i][j] == 'P')
	{
		draw_tile(info, j, i);
		info->player.x = j;
		info->player.y = i;
	}
	else if (info->start == 0 && info->map[i][j] == 'C')
	{
		draw_coin(info, j, i);
		(info->coins)++;
	}
	else if (info->map[i][j] == 'E')
	{
		draw_end(info, j, i);
		info->exit_x = j;
		info->exit_y = i;
	}
}
