/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:03:56 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:27:45 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_abs(long n);
static char	ft_digit(long n);

void	ft_putnbr_fd(int n, int fd)
{
	long	abs_n;

	if (n < 0)
		ft_putchar_fd('-', fd);
	abs_n = ft_abs(n);
	if (abs_n < 10)
		ft_putchar_fd(ft_digit(abs_n), fd);
	else
	{
		ft_putnbr_fd((int)(abs_n / 10), fd);
		ft_putchar_fd(ft_digit(abs_n % 10), fd);
	}
}

static long	ft_abs(long n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static char	ft_digit(long n)
{
	return ((unsigned char)n + 48);
}
