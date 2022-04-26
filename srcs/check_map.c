/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:12:31 by nsar              #+#    #+#             */
/*   Updated: 2022/04/07 18:58:09 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_char(t_info *info, int i, int j)
{
	if (!is_valid_char(info->map[i][j]))
	{
		ft_printf(TEXT_ERROR_MAP_NUM);
		exit(0);
	}
	if (i == 0 || i == info->map_height - 1
		|| j == 0 || j == info->map_width - 1)
	{
		if (info->map[i][j] != '1')
		{
			ft_printf(TEXT_ERROR_MAP_NUM);
			exit(0);
		}
	}
}

void	init_ready(t_ready *ready)
{
	ready->player = 0;
	ready->coin = 0;
	ready->end = 0;
}

void	check_equipped(t_info *info, int i, int j, t_ready *ready)
{
	if (info->map[i][j] == 'P')
		ready->player++;
	else if (info->map[i][j] == 'C')
		ready->coin++;
	else if (info->map[i][j] == 'E')
		ready->end++;
}

void	check_ready(t_ready ready)
{
	if (ready.player != 1)
	{
		ft_printf(TEXT_ERROR_PLAYER);
		exit(0);
	}
	if (ready.coin == 0)
	{
		ft_printf(TEXT_ERROR_COLLEC);
		exit(0);
	}
	if (ready.end == 0)
	{
		ft_printf(TEXT_ERROR_EXIT);
		exit(0);
	}
}

void	check_map(t_info *info)
{
	t_ready	ready;
	int		i;
	int		j;

	i = 0;
	init_ready(&ready);
	while (i < info->map_height)
	{
		j = 0;
		if ((int) ft_strlen(info->map[i]) != info->map_width)
		{
			ft_printf(TEXT_ERROR_MAP_NUM);
			exit(0);
		}
		while (j < info->map_width)
		{
			check_char(info, i, j);
			check_equipped(info, i, j, &ready);
			j++;
		}
		i++;
	}
	check_ready(ready);
}
