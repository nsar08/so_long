/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:12:05 by nsar              #+#    #+#             */
/*   Updated: 2022/04/07 19:01:21 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_player(t_info *info, int keycode)
{
	if (check_end(keycode, info))
	{
		ft_close(info);
	}
	if (check_coin(keycode, info))
	{
		(info->coins)--;
		if (info->coins == 0)
		{
			draw_end2(info, (info->exit_x), (info->exit_y));
		}
	}
	move_player2(info, keycode);
	draw_player(info, keycode);
}

void	move_player2(t_info *info, int keycode)
{
	if (!(check_wall(keycode, info)))
	{
		draw_tile(info, info->player.x, info->player.y);
		info->map[info->player.y][info->player.x] = '0';
		if (keycode == KEY_W)
			info->player.y -= 1;
		else if (keycode == KEY_A)
			info->player.x -= 1;
		else if (keycode == KEY_S)
			info->player.y += 1;
		else if (keycode == KEY_D)
			info->player.x += 1;
		info->map[info->player.y][info->player.x] = 'P';
		(info->movement++);
	}
}

int	deal_key(int keycode, t_info *info)
{
	if (keycode == KEY_ESC)
	{
		exit(0);
	}
	if (info->ended == 0)
	{
		deal_key_2(keycode, info);
	}
	return (0);
}

void	deal_key_2(int keycode, t_info *info)
{
	if (keycode == KEY_W || keycode == KEY_A || keycode == KEY_S
		|| keycode == KEY_D)
	{
		move_player(info, keycode);
		draw_scoreboard(info, 10, 10);
	}
}
