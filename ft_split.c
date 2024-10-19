/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:34:51 by melferre          #+#    #+#             */
/*   Updated: 2024/10/20 00:50:44 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	last;

	j = 0;
	i = 0;
	last = c;
	while (s[i])
	{
		if (last == c && s[i] != c)
			j++;
		last = s[i];
		i++;
	}
	return (j);
}
int	ft_length_word(char const *s, char c)
{
	size_t i;
	
	i = 0;
	while(s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}
char *ft_cpyword(char *dest, const char *src, char c)
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
		if (ft_length_word(&s[i], c) == 0)
			break;
		split_str[j] = malloc ((ft_length_word(&s[i], c) + 1) * sizeof (char)); //CALCULER LONGUEUR MOT DU CDIIII
		if (!split_str)
			return (NULL);
		split_str[j] = ft_cpyword(split_str[j], &s[i], c);
		j++;
		i = i + ft_length_word(&s[i], c);
		while (s[i] == c)
			i++;
	}
	return (split_str);
}

// #include <stdio.h>
// int main()
// {
// 	char **benoit;
// 	size_t i = 0;
	
// 	benoit = ft_split("Hello           World !", ' ');
// 	while (benoit[i])
// 	{
// 		printf("%s\n", benoit[i]);
// 		i++;
// 	}
// }