/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 12:45:36 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:09:37 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lenght_s1;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != NULL)
		s1++;
	lenght_s1 = ft_strlen(s1);
	while (lenght_s1 && ft_strchr(set, s1[lenght_s1]))
		lenght_s1--;
	return (ft_substr((char *)s1, 0, lenght_s1 + 1));
}
