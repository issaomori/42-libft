/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:14:17 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:11:09 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int change)
{
	if ((change >= 97 && change <= 122) || !ft_isalpha(change))
		return (change);
	if ((change >= 65 && change <= 90))
		return (change + 32);
	return (0);
}
