/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:47:48 by vping             #+#    #+#             */
/*   Updated: 2020/10/31 19:03:25 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int ndl_len;
	int c;

	ndl_len = 0;
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
