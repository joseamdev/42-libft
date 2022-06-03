/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:42:14 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:47:15 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc (s1_len + s2_len + 1);
	if (ptr)
	{
		ft_memcpy(ptr, s1, s1_len);
		ft_memcpy(&ptr[s1_len], s2, s2_len);
		ptr[s1_len + s2_len] = '\0';
	}
	return (ptr);
}
