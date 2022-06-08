/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:09:43 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/03 15:42:42 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  count_size;
    size_t  substr_len;
    char    *substr;
    
    count_size = 0;
    if (count_size == 0)
        return (0);
    substr_len = ft_strlen(s);
    if (substr_len < len)
        substr = (char *)malloc((substr_len + 1) * sizeof(char));
    substr = (char *)malloc((len + 1) * sizeof (char));
    if (substr == 0)
        return (0);
    while (count_size < len && (start + count_size) < substr_len)
    {
        substr[count_size] = s[start + count_size];
        count_size++;
    }
    substr[count_size] = '\0';
    return (substr);
}
