/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:38:27 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/24 20:09:09 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	while (n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		n--;
		s++;
	}
	return (NULL);
}
