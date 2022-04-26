/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:14:25 by nsar              #+#    #+#             */
/*   Updated: 2022/04/06 13:53:50 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_end(int keycode, t_info *info)
{
	if (keycode == KEY_W)
	{
		if (info->map[info->player.y - 1][info->player.x]
				== 'E' && info->coins <= 0)
			return (1);
	}
	else if (keycode == KEY_A)
	{
		if (info->map[info->player.y][info->player.x - 1]
				== 'E' && info->coins <= 0)
			return (1);
	}
	else if (keycode == KEY_S)
	{
		if (info->map[info->player.y + 1][info->player.x]
				== 'E' && info->coins <= 0)
			return (1);
	}
	else if (keycode == KEY_D)
	{
		if (info->map[info->player.y][info->player.x + 1]
				== 'E' && info->coins <= 0)
			return (1);
	}
	return (0);
}

int	check_coin(int keycode, t_info *info)
{
	if (keycode == KEY_W)
	{
		if (info->map[info->player.y - 1][info->player.x] == 'C')
			return (1);
	}
	else if (keycode == KEY_A)
	{
		if (info->map[info->player.y][info->player.x - 1] == 'C')
			return (1);
	}
	else if (keycode == KEY_S)
	{
		if (info->map[info->player.y + 1][info->player.x] == 'C')
			return (1);
	}
	else if (keycode == KEY_D)
	{
		if (info->map[info->player.y][info->player.x + 1] == 'C')
			return (1);
	}
	return (0);
}

int	is_wall_or_end(t_info *info, int x, int y)
{
	if (info->map[y][x] == '1' || info->map[y][x] == 'E')
		return (1);
	return (0);
}

int	check_wall(int keycode, t_info *info)
{
	if (keycode == KEY_W)
	{
		if (is_wall_or_end(info, info->player.x, info->player.y - 1))
			return (1);
	}
	else if (keycode == KEY_A)
	{
		if (is_wall_or_end(info, info->player.x - 1, info->player.y))
			return (1);
	}
	else if (keycode == KEY_S)
	{
		if (is_wall_or_end(info, info->player.x, info->player.y + 1))
			return (1);
	}
	else if (keycode == KEY_D)
	{
		if (is_wall_or_end(info, info->player.x + 1, info->player.y))
			return (1);
	}
	return (0);
}
