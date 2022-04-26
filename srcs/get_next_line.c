/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:31:16 by nsar              #+#    #+#             */
/*   Updated: 2022/04/08 14:11:48 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_first(char c, int i)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * 2);
	if (!tmp)
		return (0);
	tmp[i] = c;
	return (tmp);
}

int	ft_strcat(char **str, char c)
{
	char	*tmp;
	int		i;

	i = 0;
	if (*str == 0)
	{
		tmp = ft_first(c, i);
		i++;
	}
	else
	{
		tmp = (char *)malloc(sizeof(char) * (ft_strlen(*str) + 2));
		if (!tmp)
			return (0);
		while ((*str)[i])
		{
			tmp[i] = (*str)[i];
			i++;
		}
		tmp[i++] = c;
	}
	tmp[i] = '\0';
	free(*str);
	*str = tmp;
	return (1);
}

int	get_next_line(int fd, char **line)
{
	int		rd_out;
	char	buffer;

	*line = 0;
	buffer = 0;
	rd_out = read(fd, &buffer, 1);
	while (rd_out)
	{
		if (rd_out < 0)
			return (-1);
		if (buffer == '\n')
			return (1);
		if (ft_strcat(line, buffer) == 0)
		{
			ft_printf(ERROR_STRCAT);
			exit(0);
		}
		rd_out = read(fd, &buffer, 1);
	}
	return (0);
}
