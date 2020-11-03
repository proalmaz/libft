/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:47:48 by vping             #+#    #+#             */
/*   Updated: 2020/11/03 18:26:41 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int ndl_len;
	int c;

	ndl_len = 0;
	if (!s1 && !s2)
		return (NULL);
	while (s2[ndl_len])
		ndl_len++;
	while (*s1 != *s2 && n)
	{
		s1++;
		n--;
	}
	c = ndl_len;
	while (ndl_len >= 0 && n-- > 0)
	{
		while (*s1 == *s2 && n-- > 0)
		{
			s1++;
			s2++;
			ndl_len--;
			if (ndl_len == 0)
				return ((char *)(s1 - c));
		}
	}
	return (NULL);
}

int main()
{
	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t max = strlen(big);
	char *s1 = strnstr(big, little, max);
	printf("%s\n", s1);
	/*char *s2 = ft_strnstr(big, little, max);*/
}
