/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:25:30 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:09:00 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int change)
{
	int	i;

	i = (int) ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == (unsigned char)change)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
