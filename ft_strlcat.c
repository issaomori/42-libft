/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:46:43 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:04:06 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	dest_t;
	size_t	src_t;

	count = 0;
	dest_t = ft_strlen(dest);
	src_t = ft_strlen(src);
	if (size < dest_t + 1)
		return (size + src_t);
	if (size >= dest_t + 1)
	{
		while (dest_t + count < size - 1 && src[count] != '\0')
		{
			dest[dest_t + count] = src[count];
			count++;
		}
	}
	dest[dest_t + count] = '\0';
	return (dest_t + src_t);
}
