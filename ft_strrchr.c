/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:12:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/23 12:25:00 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = (char *)s + ft_strlen(s);
	while (s <= last && *last != c)
		last--;
	if (*last == c)
		return ((char *)s);
	else
		return (0);
}
