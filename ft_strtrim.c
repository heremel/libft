/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:39:49 by melferre          #+#    #+#             */
/*   Updated: 2024/10/15 18:39:00 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	first_cut(char const *s1, char const *set)
{
	int	i;
	int j;
	char *newstr;

	i = 0;
	j = 0;
	newstr = (char *)s1;
	while (newstr[i])
	{
		if (newstr[i] == set)
		{
			return (newstr[i]);
		}
		i++;
	}
	return (newstr);
}

char	sec_cut(char const *s1, char const *set)
{
	int	i;
	int j;
	char *newstr;
	i = 0;
	j = 0;
	newstr = (char *)s1;
	while (newstr[i])
		i++;
	while (newstr[i] > newstr[0])
	{
		if (newstr[i] == set)
		{
			return (newstr[i])
		}
		i--;
	}
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*newstr;
	char	*sec_set;

	i = 0;
	sec_set = (char *)set;
	newstr = malloc (ft_strlen(s1));
	if (!newstr)
		return (NULL);
}
