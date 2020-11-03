/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 20:22:01 by vping             #+#    #+#             */
/*   Updated: 2020/11/02 20:05:03 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i++);
}

char		*ft_itoa(int n)
{
	char			*dest;
	unsigned int	len;
	unsigned int	nb;
	unsigned int	i;

	nb = (n < 0 ? -n : n);
	len = ft_nblen(nb);
	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * len + 1 + (n < 0 ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		dest[i] = '-';
		len++;
	}
	i = len--;
	while (nb >= 10)
	{
		dest[i--] = nb % 10 + '0';
		nb /= 10;
	}
	dest[i] = nb % 10 + '0';
	dest[len] = '\0';
	return (dest);
}
