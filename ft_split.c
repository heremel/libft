/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:34:51 by melferre          #+#    #+#             */
/*   Updated: 2024/10/18 18:39:59 by melferre         ###   ########.fr       */
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
int	ft_lenword(char const *s, char c)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	while(s[i])
	{
		
	}
}

char **ft_split(char const *s, char c)
{
	char **split_str;
	size_t	i;

	i = 0;
	split_str = malloc ((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split_str)
		return (NULL);
	split_str[ft_countwords(s, c)] = NULL;
	while (split_str[i])
	{
		split_str[i] = malloc (ft_lenworld(s) * sizeof (char)); //CALCULER LONGUEUR MOT DU CDIIII
		i++;
	}
	if (!split_str)
		return (NULL);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_countwords("Hello World !", ' '));
}