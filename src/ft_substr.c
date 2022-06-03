/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:50:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:46:56 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		start = s_len;
	if (s_len - start < len)
		len = s_len - start;
	ptr = malloc(len + 1);
	if (ptr)
	{
		ft_memcpy(ptr, (void *)&s[start], len);
		ptr[len] = '\0';
	}
	return (ptr);
}
