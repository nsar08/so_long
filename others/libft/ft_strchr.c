/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:26:09 by nsar              #+#    #+#             */
/*   Updated: 2021/11/05 11:08:32 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;

	str = (char *)s;
	cc = (char) c;
	while (*str != cc)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

/*#include <stdio.h>
int main(void)
{

	char str1[] = "Learn programming yourself";
	char ex= 'L';
	char *result1;
	char *result2;
	result1 = strchr(str1, ex);
	result2 = ft_strchr(str1, ex);
	printf("%s\n", result2);
	printf("%s\n", result1);
	return(0);
}*/
