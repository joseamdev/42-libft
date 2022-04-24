/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:12:01 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/24 20:13:44 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = (char *)s + ft_strlen(s) - 1;
	while (last >= s && *last != (unsigned char)c)
		last--;
	if (*last == (unsigned char)c)
		return ((char *)s);
	else
		return (0);
}
