/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vping <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:48:18 by vping             #+#    #+#             */
/*   Updated: 2020/11/08 11:17:48 by vping            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *arr)
{
	int i;
	int sign;
	int res;

	i = 0;
	res = 0;
	sign = 1;
	while (arr[i] == ' ' || arr[i] == '\t' ||
			arr[i] == '\v' || arr[i] == '\f' || arr[i] == '\r' ||
			arr[i] == '\n')
		i++;
	if (arr[i] == '-' || arr[i] == '+')
	{
		if (arr[i] == '-')
			sign = -1;
		i++;
	}
	while (arr[i] >= '0' && arr[i] <= '9')
	{
		res = res * 10 + (arr[i] - '0');
		i++;
	}
	return (sign * res);
}
