/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:20:16 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:00:19 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int ch)
{
	unsigned char	*str;
	unsigned char	i;

	i = (unsigned char) ch;
	str = (unsigned char *) p;
	while (*str != i && *str != '\0')
	{
		str++;
	}
	if (*str == i)
	{
		return ((char *)str);
	}
	return (0);
}
