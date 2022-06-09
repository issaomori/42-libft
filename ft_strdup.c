/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:27:47 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:00:58 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count_size;
	int		i;

	count_size = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * (count_size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < count_size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
