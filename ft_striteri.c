/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:00:54 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:01:49 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	count_size;

	count_size = 0;
	if (s == 0 || f == 0)
		return ;
	while (s[count_size] != '\0')
	{
		f(count_size, s + count_size);
		count_size++;
	}
}
