/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 17:12:04 by gissao-m          #+#    #+#             */
/*   Updated: 2022/06/08 22:02:57 by gissao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar_int(int i, int fd)
{
	char	c;

	c = '0';
	c = c + i;
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 1;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	while (i <= n / 10)
		i = i * 10;
	while (i >= 1)
	{
		ft_putchar_int(n / i, fd);
		n = n - (n / i) * i;
		i = i / 10;
	}
}
