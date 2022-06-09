/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:21:30 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 16:36:44 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				count_size;

	count_size = 0;
	s1 = str1;
	s2 = str2;
	while (count_size < n)
	{
		if (s1[count_size] != s2[count_size])
			return (s1[count_size] - s2[count_size]);
		count_size++;
	}
	return (0);
}
