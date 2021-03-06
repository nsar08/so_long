/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:14:09 by nsar              #+#    #+#             */
/*   Updated: 2022/04/08 14:12:32 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	linecount(char *file)
{
	int		fd;
	int		line;
	int		readcount;
	char	c;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (-1);
	line = 0;
	while (1)
	{
		readcount = read(fd, &c, 1);
		if (readcount == 0)
			break ;
		if (readcount < 0)
			return (-1);
		if (c == '\n')
			line++;
	}
	close(fd);
	return (line);
}

char	**malloc_height(t_info *info, char *file)
{
	char	**map;
	int		line;

	line = linecount(file);
	if (line <= 0)
		return (0);
	info->map_height = line;
	map = (char **)malloc(sizeof(char *) * (line + 1));
	if (map == NULL)
		return (0);
	return (map);
}

void	readmap(t_info *info, char *file)
{
	int	i;
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd <= 0 || !ft_strnstr(file, ".ber", ft_strlen(file)))
	{
		ft_printf(TEXT_ERROR_MAP_NAME);
		ft_close(info);
	}
	info->map = malloc_height(info, file);
	if (info->map == 0)
	{
		ft_printf(TEXT_ERROR_MAP_NUM);
		exit(0);
	}
	fd = open(file, O_RDONLY);
	i = 0;
	while (get_next_line(fd, &info->map[i]))
		i++;
	info->map_width = ft_strlen(info->map[0]);
	info->map[i] = 0;
	close(fd);
}
