/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:51:07 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/02 14:34:46 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    
    i = ft_strlen(src);
    if (i + 1 < size)
        ft_memmove(dest, src, i + 1);
    else if (size != 0)
    {
        ft_memmove(dest, src, size - 1);
        dest [size - 1] = '\0';
    }
    return (i);
}
