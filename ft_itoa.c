/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:37:25 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/24 13:07:17 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n);
static int		ft_abs(int n);

char	*ft_itoa(int n)
{
	char	*result;
	size_t	pos;
	size_t	digits;

	digits = count_digits(n);
	result = ft_calloc(digits + 1, sizeof(char));
	if (!result)
		return (result);
	if (n < 0)
		result[0] = '-';
	pos = digits;
	while (n > 9 || n < -9)
	{
		result[pos] = ft_abs(n % 10) + 48;
		n /= 10;
		pos--;
	}
	result[pos] = ft_abs(n % 10) + 48;
	return (result);
}

static size_t	count_digits(int n)
{
	size_t	count;

	count = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		count++;
	}
	if (n < 0)
		count++;
	return (count);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
