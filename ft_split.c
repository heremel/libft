/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:34:51 by melferre          #+#    #+#             */
/*   Updated: 2024/10/20 14:28:38 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c) //alfonso
{
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i])
	{
		if (s[i] != c)
			j++;
		i++;
	}
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			j++;
		i++;
	}
	return (j);
}
size_t	ft_length_word(char const *s, char c) //en paix alfonso
{
	size_t	i;
	
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
char *ft_cpyword(char *dest, const char *src, char c) //alfonso
{
	size_t	i;

	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**multi_free(char **s, size_t j)
{
	while (--j != (size_t)(-1))
		free(s[j]);
	free(s);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	char **split_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;	
	split_str = malloc ((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split_str)
		return (NULL);
	split_str[ft_countwords(s, c)] = NULL;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (ft_length_word(&s[i], c) == 0)
			break;
		split_str[j] = malloc ((ft_length_word(&s[i], c) + 1) * sizeof (char)); //CALCULER LONGUEUR MOT DU CDIIII
		if (!split_str[j])
			return (multi_free(split_str, j + 1));
		split_str[j] = ft_cpyword(split_str[j], &s[i], c);
		j++;
		i = i + ft_length_word(&s[i], c);
	}
	return (split_str);
}