/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:46:38 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 13:26:12 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (*s1 && *set)
	{
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (end >= (int)start && ft_strchr(set, s1[end]))
			end--;
	}
	ptr = ft_calloc(end - start + 2, sizeof(char));
	if (ptr)
		ft_memcpy(ptr, &s1[start], end - start + 1);
	return (ptr);
}
