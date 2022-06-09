/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:56:36 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 16:19:23 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	ch_sign;
	int	count_size;

	result = 0;
	ch_sign = 1;
	count_size = 0;
	while ((str[count_size] >= '\t' && str[count_size] <= '\r') \
	|| str[count_size] == ' ')
		count_size++;
	if (str[count_size] == '-' || str[count_size] == '+')
	{
		if (str[count_size] == '-')
			ch_sign *= -1;
		count_size++;
	}
	while (ft_isdigit(str[count_size]))
	{
		result = (result * 10) + (str[count_size] - '0');
		count_size++;
	}
	return (ch_sign * result);
}
