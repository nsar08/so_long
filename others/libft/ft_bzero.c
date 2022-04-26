/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:15:01 by nsar              #+#    #+#             */
/*   Updated: 2021/10/20 10:32:57 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	char			*c;
	unsigned int	i;

	i = 0;
	c = s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
/*#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	printf("test0 : %s\n", str1);

	ft_bzero(str1, 2);
	printf("test1 : %s\n", str1);
	printf("test2 : %s\n", (str1 + 2));

	return(0);
}*/
