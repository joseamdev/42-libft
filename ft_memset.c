/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:46:06 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/24 19:43:45 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	if (!b)
		return (NULL);
	s = (unsigned char *)b;
	while (len)
	{
		*s = (unsigned char)c;
		s++;
		len--;
	}
	return (b);
}
