/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:50:03 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 16:33:49 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*vs;
	unsigned char	i;

	i = (unsigned char)c;
	vs = (unsigned char *)str;
	while (n--)
	{
		if (*vs == i)
		{
			return (vs);
		}
		vs++;
	}
	return (0);
}
