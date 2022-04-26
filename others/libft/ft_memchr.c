/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:17:51 by nsar              #+#    #+#             */
/*   Updated: 2021/10/20 10:31:14 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char *p;
	char str1[] = "Learn programming yourself";
	char ex= 'a';
	p = (char *)memchr(str1, ex, 5);

	printf("%s\n", p);
	printf("%s\n", ft_memchr(str1, ex, 5));
	return(0);
}*/
