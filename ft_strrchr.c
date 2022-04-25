/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:12:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:57:07 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = (char *)s + ft_strlen(s);
	while (last >= s)
	{
		if (*last == (unsigned char)c)
			return (last);
		last--;
	}
	return (NULL);
}
