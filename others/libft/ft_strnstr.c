/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstrG.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:13:37 by nsar              #+#    #+#             */
/*   Updated: 2021/11/05 11:11:34 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		n = 0;
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (needle [n + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main (void)
{
	size_t len_n;
	const char *haystack = "I love life";
	const char *needle = "l";
	printf("%zu\n",len_n);
	printf("return = %s\n", strnstr(haystack, needle , 25));
	printf("return = %s\n", ft_strnstr(haystack, needle, 25));
	return(0);
}*/
