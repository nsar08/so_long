/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:23:23 by nsar              #+#    #+#             */
/*   Updated: 2021/11/05 11:58:37 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (size > 0 && i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
/*#include <stdio.h>
int main (void)
{
	char csrc1[] = "Hello";
	char cdest1[] = "halloah";
	printf("test0 : %s\n", csrc1);
	printf("before strlcat dest : %s\n", cdest1);
	ft_strlcat(cdest1, csrc1, 2);
	printf("after strlcat dest :  %s\n", cdest1);
	return(0);
}*/
