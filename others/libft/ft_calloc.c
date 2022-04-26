/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:12:55 by nsar              #+#    #+#             */
/*   Updated: 2021/10/21 15:48:15 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*ptr;

	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*#include <stdlib.h>
#include <stdio.h>
int main (void)
{
	char array1[] = "Hello";
	char *p;
	p = ft_calloc(6, sizeof(array1));
	printf("%s\n", p);
	return(0);
}*/
