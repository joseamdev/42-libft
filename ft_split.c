/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorillo <jmorillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:06:18 by jmorillo          #+#    #+#             */
/*   Updated: 2022/04/25 11:46:15 by jmorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_fields(char const *str, char sep);
static int		next_field_pos(char const *str, char sep, size_t pos);
static int		next_sep_pos(char const *str, char sep, size_t pos);
static char		**free_fields(char **strings);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	field_count;
	size_t	i;
	int		field_pos;
	int		sep_pos;

	if (!s)
		return (NULL);
	field_count = count_fields(s, c);
	result = ft_calloc(field_count + 1, sizeof(char *));
	if (!result)
		return (result);
	i = 0;
	sep_pos = 0;
	while (i < field_count)
	{
		field_pos = next_field_pos(s, c, sep_pos);
		sep_pos = next_sep_pos(s, c, field_pos);
		result[i] = ft_calloc(sep_pos - field_pos + 1, sizeof(char));
		if (!result[i])
			return (free_fields(result));
		ft_memcpy(result[i], &s[field_pos], sep_pos - field_pos);
		i++;
	}
	return (result);
}

static size_t	count_fields(char const *str, char sep)
{
	size_t			count;
	unsigned short	is_sep;

	count = 0;
	is_sep = 1;
	while (*str)
	{
		if (*str == sep && !is_sep)
			is_sep = 1;
		else if (*str != sep && is_sep)
		{
			is_sep = 0;
			count++;
		}
		str++;
	}
	return (count);
}

static int	next_field_pos(char const *str, char sep, size_t pos)
{
	while (str[pos] && str[pos] == sep)
		pos++;
	if (str[pos])
		return (pos);
	else
		return (-1);
}

static int	next_sep_pos(char const *str, char sep, size_t pos)
{
	if (!str[pos])
		return (-1);
	while (str[pos] && str[pos] != sep)
		pos++;
	return (pos);
}

static char	**free_fields(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		i++;
	}
	free(strings);
	return (NULL);
}
