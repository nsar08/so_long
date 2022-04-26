/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_images.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:14:36 by nsar              #+#    #+#             */
/*   Updated: 2022/04/08 14:49:27 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_images(t_info *info, int img_width, int img_height)
{
	info->img.tile = mlx_xpm_file_to_image(info->mlx,
			"./sprites/map/grass.xpm", &img_width, &img_height);
	info->img.wall = mlx_xpm_file_to_image(info->mlx,
			"./sprites/map/rock.xpm", &img_width, &img_height);
	info->img.player_w1 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_up.xpm", &img_width, &img_height);
	info->img.player_w2 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_up2.xpm", &img_width, &img_height);
	info->img.player_a1 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_left.xpm", &img_width, &img_height);
	info->img.player_a2 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_left2.xpm", &img_width, &img_height);
	info->img.player_s1 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_down.xpm", &img_width, &img_height);
	info->img.player_s2 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_down2.xpm", &img_width, &img_height);
	info->img.player_d1 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_right.xpm", &img_width, &img_height);
	info->img.player_d2 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/naruto/naruto_right2.xpm", &img_width, &img_height);
	load_images2(info, img_width, img_height);
}

void	load_images2(t_info *info, int img_width, int img_height)
{
	info->img.coin1 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/coin/coin.xpm", &img_width, &img_height);
	info->img.end = mlx_xpm_file_to_image(info->mlx,
			"./sprites/map/exit.xpm", &img_width, &img_height);
	info->img.end2 = mlx_xpm_file_to_image(info->mlx,
			"./sprites/map/exit2.xpm", &img_width, &img_height);
	info->img.scoreboard = mlx_xpm_file_to_image(info->mlx,
			"./sprites/map/scoreboard.xpm", &img_width, &img_height);
}

void	check_images(t_info *info)
{
	if (info->img.tile == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.wall == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_w1 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_w2 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
}

void	check_images2(t_info *info)
{
	if (info->img.player_a1 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_a2 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_s1 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_s2 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
}

void	check_images3(t_info *info)
{
	if (info->img.player_d1 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.player_d2 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.coin1 == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
	if (info->img.end == NULL)
	{
		ft_printf(ERROR_ITEM);
		exit(0);
	}
}
