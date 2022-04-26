/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:51:26 by nsar              #+#    #+#             */
/*   Updated: 2021/10/19 18:31:05 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int ft_strlen(char *str);
int main(void)
{
	char str1[] = "Hellobb";
	printf("%d\n", ft_strlen(str1));
}*/
