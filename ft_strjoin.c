/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:47:51 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/07 15:38:54 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     count_s1;
    int     count_s2;
    char    *join;
    size_t  lenght;
    
    count_s1 = 0;
    count_s2 = 0;
    if (s1 == 0 || s2 == 0)
        return (0);
    lenght = ft_strlen(s1) + ft_strlen(s2) + 1; //+1 é o byte nulo.
    join = (char *)malloc(lenght);// aqui ele junta
        if (join == 0)
            return (0);
    while (s1[count_s1] != '\0')
        join[count_s1] = s1[count_s1 + 1]; //join tem o tamanho pra receber o s1 + s2 + byte nulo.
    while (s2[count_s2] != '\0')
        join[count_s1  + count_s2] = s2[count_s2 + 1];
    join[count_s1]= '\0';
    return (join);
}
