/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:18:37 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 17:11:22 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int change)
{
	if ((change >= 65 && change <= 90) || !ft_isalpha(change))
		return (change);
	if ((change >= 97 && change <= 122))
		return (change - 32);
	return (0);
}
