/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:01:31 by nsar              #+#    #+#             */
/*   Updated: 2021/11/01 17:20:54 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_iterative_putnbr_fd(int nb, int count, int fd)
{
	while (count > 0)
	{
		ft_putchar_fd(((nb / count) + '0'), fd);
		nb = nb % count;
		count = count / 10;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	count;
	int	i;

	count = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if (nb == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nb = -147483648;
		}
		nb = -nb;
	}
	i = nb;
	while (i > 9)
	{
		i = i / 10;
		count = count * 10;
	}
	ft_iterative_putnbr_fd(nb, count, fd);
}
