/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:03:52 by nsar              #+#    #+#             */
/*   Updated: 2021/10/21 10:57:48 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char			*src;
	char			*ptr;	
	unsigned int	i;
	int				size;

	size = 0;
	src = (char *)s1;
	while (src[size] != '\0')
	{
		size++;
	}
	ptr = (char *) malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char array1[] = "you";
	char array2[] = "me";
	char *p;
	char *q;
	printf("I love %s\n", array1);
	printf("I love %s\n", array2);
	p = strdup(array1);
	q = ft_strdup(array2);
	printf("The duplicated string is %s\n", p);
	printf("The duplicated string is %s\n", q);
	return(0);
}*/
