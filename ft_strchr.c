/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:56:11 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/24 20:05:03 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s && *s != (unsigned char)c)
			s++;
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (0);
}
