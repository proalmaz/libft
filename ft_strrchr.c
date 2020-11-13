/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:22:01 by vping             #+#    #+#             */
/*   Updated: 2020/11/13 16:05:09 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	if ((char)c == '\0')
		return ((char *)&s[++i]);
	while (s[i] != c && i >= 0)
	{
		i--;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
