/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:44:23 by nsar              #+#    #+#             */
/*   Updated: 2021/11/05 11:46:32 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			res = res * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (sign * res);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
		(void) argc;
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d\n", atoi(argv[1]));
}*/
