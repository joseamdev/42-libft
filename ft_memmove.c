/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:52:21 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:54:46 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*result;

	result = dst;
	if (src < dst && src + len > dst)
	{
		dst += len - 1;
		src += len - 1;
		while (dst >= result)
		{
			*((unsigned char *)dst) = *((unsigned char *)src);
			dst--;
			src--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (result);
}
