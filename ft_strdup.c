/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:34:28 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/23 14:43:09 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_size;
	char	*ptr;

	s1_size = ft_strlen(s1) + 1;
	ptr = malloc(s1_size);
	if (ptr)
		ft_strlcpy(ptr, s1, s1_size);
	return (ptr);
}
