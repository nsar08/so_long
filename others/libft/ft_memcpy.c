/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:29:28 by nsar              #+#    #+#             */
/*   Updated: 2021/10/20 10:17:17 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cdest;
	const char	*csrc;

	i = 0;
	csrc = (const char *)src;
	cdest = (char *)dest;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main (void)
{
	char csrc1[] = "Hello";
	char cdest1[20] = "hi";
	printf("test0 : %s\n", csrc1);
	printf("before memcpy dest : %s\n", cdest1);
	ft_memcpy(cdest1, csrc1, 5);
	printf("after memcpy dest :  %s\n", cdest1);
	return(0);
}*/
