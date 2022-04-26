/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:30:18 by nsar              #+#    #+#             */
/*   Updated: 2021/11/05 11:12:23 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			pos = s;
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	else
	{
		return ((char *)pos);
	}
}
/*int main(void)
{
	char str1[] = "Learn programming yourself";
	char ex= 'w';
	char *result1;
	char *result2;
	result1 = strrchr(str1, ex);
	result2 = ft_strrchr(str1, ex);
	printf("%s\n", result2);
	printf("%s\n", result1);
	return(0);
}*/
