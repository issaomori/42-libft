/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:34:50 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:08:22 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	count_size;

	count_size = ft_strlen(find);
	if (count_size == 0)
		return ((char *)str);
	while (*str != 0 && count_size <= len)
	{
		if (ft_strncmp(str, find, count_size) == 0)
			return ((char *)str);
		len--;
		str++;
	}
	return (0);
}
