/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:29:20 by vping             #+#    #+#             */
/*   Updated: 2020/11/04 20:02:18 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	int			p;
	size_t		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	p = -len;
	if (start >= ft_strlen(s))
	{
		*res = '\0';
		return (res);
	}
	if (res == NULL)
		return (NULL);
	while (len--)
		*res++ = s[start++];
	*res = '\0';
	return (&res[p]);
}
