/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:08:24 by nsar              #+#    #+#             */
/*   Updated: 2021/11/04 17:04:07 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	i = 0;
	a = s;
	while (i < n)
	{
		*(a + i) = c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
void *ft_memset(void *s, int c, unsigned int n);
int main(void)
{
	char str1[] = "Hello";
	printf("%s\n", ft_memset( str1 + 1 , '.', 2));
	return(0);
}*/
