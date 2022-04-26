/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:50:26 by nsar              #+#    #+#             */
/*   Updated: 2021/10/27 18:11:29 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <string.h>

size_t	ft_strlcpy(const char *dest, const char *src, size_t destsize)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = 0;
	if (destsize == 0)
	{
		while (src1[i])
			i++;
		return (i);
	}
	while (i < destsize - 1 && src1[i] != '\0')
	{
		dest1[i] = src1[i];
		i++;
	}
	if (i < destsize)
		dest1[i] = '\0';
	while (src1[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int main (void)
{
	char csrc1[8] = "Hello";
	char cdest1[6] = "hal";
	printf("test0 : %s\n", csrc1);
	printf("before strlcpy dest : %s\n", cdest1);
	ft_strlcpy(cdest1, csrc1, 6);
	printf("after strlcpy dest :  %s\n", cdest1);
	return(0);
}*/
