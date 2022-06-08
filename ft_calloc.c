/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:44:05 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 14:27:01 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t number, size_t size)
{
    size_t  m_sizes; //multiplicador dos tamanhos.
    void    *receptor;
    
    m_sizes = number * size;
    if (m_sizes > 2147483648)
        return (0);
    receptor = malloc(m_sizes);
    if (!receptor)
        return (0);
    ft_bzero(receptor, m_sizes);
    return (receptor);
}
