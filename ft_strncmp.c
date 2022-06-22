/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:32:15 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/15 11:25:07 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && (str1[count] != '\0' || str2[count] != '\0'))
	{
		if ((unsigned char)str1[count] != (unsigned char)str2[count])
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		count++;
	}
	return (0);
}
