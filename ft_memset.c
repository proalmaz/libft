/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:55:00 by vping             #+#    #+#             */
/*   Updated: 2020/11/02 18:48:36 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)dest;
	sym = (unsigned char)c;
	while (len--)
		*ptr++ = sym;
	return (dest);
}
