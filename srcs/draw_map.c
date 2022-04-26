/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:13:46 by nsar              #+#    #+#             */
/*   Updated: 2022/04/07 17:44:37 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_tile(t_info *info, int x, int y)
{
	mlx_put_image_to_window(info->mlx, info->win, info->img.tile,
		x * 50, y * 50);
}

void	draw_wall(t_info *info, int x, int y)
{
	draw_tile(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.wall,
		x * 50, y * 50);
}

void	draw_coin(t_info *info, int x, int y)
{
	draw_tile(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.coin1,
		x * 50 + 10, y * 50 + 10);
}

void	draw_end(t_info *info, int x, int y)
{
	draw_tile(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.end,
		x * 50 + 10, y * 50 + 10);
}

void	draw_end2(t_info *info, int x, int y)
{
	draw_tile(info, x, y);
	mlx_put_image_to_window(info->mlx, info->win, info->img.end2,
		x * 50 + 10, y * 50 + 10);
}
