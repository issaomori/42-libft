/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:47:02 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 21:56:56 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	count_size;

	str = ft_strdup((char *)s);
	if (!s || !f || !str)
		return (0);
	count_size = 0;
	while (str[count_size])
	{
		str[count_size] = f(count_size, str[count_size]);
		count_size++;
	}
	return (str);
}
