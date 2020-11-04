/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:29:20 by vping             #+#    #+#             */
/*   Updated: 2020/11/04 15:43:21 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		p;


	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		return (NULL);
	}
	res = (char *)malloc(len + 1);
	p = -len;
	if (res == NULL)
		return (NULL);
	while (len--)
		*res++ = s[start++];
	*res = '\0';
	return (&res[p]);
}
