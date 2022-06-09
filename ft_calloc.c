/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:44:05 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 16:23:12 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	m_sizes;
	void	*receptor;

	if (number > 2147483647 || size > 2147483647)
		return (NULL);
	m_sizes = number * size;
	receptor = malloc(m_sizes);
	if (!receptor)
		return (0);
	ft_bzero(receptor, m_sizes);
	return (receptor);
}
