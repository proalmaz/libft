/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:01:13 by vping             #+#    #+#             */
/*   Updated: 2020/11/04 15:59:40 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*res;
	int		sumlen;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sumlen = len1 + len2;
	res = (char *)malloc(sumlen);
	if (res == NULL)
		return (NULL);
	while (len1--)
		*res++ = *s1++;
	while (len2--)
		*res++ = *s2++;
	*res = '\0';
	return (&res[-sumlen]);
}
