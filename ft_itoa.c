/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:37:25 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 10:58:32 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_len(int n);
static int		ft_abs(int n);

char	*ft_itoa(int n)
{
	char	*result;
	size_t	pos;
	size_t	digits;

	digits = number_len(n);
	result = ft_calloc(digits + 1, sizeof(char));
	if (!result)
		return (result);
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	pos = digits - 1;
	while (n)
	{
		result[pos] = ft_abs(n % 10) + 48;
		n = n / 10;
		pos--;
	}
	return (result);
}

static size_t	number_len(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
		count++;
	else if (n == 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
