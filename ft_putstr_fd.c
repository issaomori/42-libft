/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:58:19 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 16:57:10 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{	
	int	count_size;

	count_size = 0;
	while (s[count_size] != '\0')
	{
		write (fd, &s[count_size], 1);
		count_size++;
	}
}
