/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmovegit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:42:21 by nsar              #+#    #+#             */
/*   Updated: 2021/10/20 10:06:31 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (src < dst)
	{
		src2 = src2 + len - 1;
		dst2 = dst2 + len - 1;
		while (len--)
			*dst2-- = *src2--;
	}
	else if (src >= dst)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}
/*#include <stdio.h>
int main (void)
{
	char csrc1[] = "Hello";
	char cdest1[4] = "hi";
	printf("test0 : %s\n", csrc1);
	printf("before memmove dest : %s\n", cdest1);
	ft_memmove(cdest1, csrc1 + 2, 5);
	printf("after memmove dest :  %s\n", cdest1);
	return(0);
}*/
