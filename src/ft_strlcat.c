/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:30:49 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/23 13:45:21 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dest;
	size_t	result;

	result = ft_strlen(src);
	size_dest = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= size_dest)
		result += dstsize;
	else
	{
		i = 0;
		while (src[i] && size_dest + i + 1 < dstsize)
		{
			dst[size_dest + i] = src[i];
			i++;
		}
		dst[size_dest + i] = '\0';
		result += size_dest;
	}
	return (result);
}
