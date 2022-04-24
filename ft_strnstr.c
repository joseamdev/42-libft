/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:49:10 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/23 14:35:04 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_substr(const char *str, const char *substr, size_t len);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	haystack_size;
	size_t	needle_size;

	if (!needle)
		return ((char *)haystack);
	haystack_size = ft_strlen(haystack);
	needle_size = ft_strlen(needle);
	if (needle_size > haystack_size || needle_size > len)
		return (0);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (is_substr(haystack, needle, len))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

static int	is_substr(const char *str, const char *substr, size_t len)
{
	size_t	pos;

	pos = 0;
	while (pos < len && str[pos] && str[pos] == substr[pos])
	{
		if (!substr[pos + 1])
			return (1);
		pos++;
	}
	return (0);
}
