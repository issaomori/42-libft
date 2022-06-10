/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:51:07 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/10 17:05:44 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t d_size)
{
	size_t	count_size;
	size_t	l_src;

	l_src = ft_strlen(src);
	count_size = 0;
	if (d_size == 0)
		return (l_src);
	while (src[count_size] != '\0' && count_size < (d_size - 1))
	{
		dst[count_size] = src[count_size];
		count_size++;
	}
	dst[count_size] = '\0';
	return (l_src);
}
