/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:50:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/23 17:41:35 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len - start < len)
		len = s_len - start;
	ptr = malloc(len + 1);
	if (ptr)
	{
		ft_memcpy(ptr, s[start], len);
		ptr[len] = '\0';
	}
	return (ptr);
}
