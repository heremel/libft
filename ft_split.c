/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:34:51 by melferre          #+#    #+#             */
/*   Updated: 2024/10/16 20:13:11 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char **newstr;
	char	*s1;
	int	i;

	i = 0;
	s1 = (char *)s;
	newstr = malloc(ft_strlen(s) + 1);
	if (!newstr)
		return (NULL);
	while (s[i])
	{
		s1 = (char *)s;
		if (s[i] == c)
		{
			newstr[i] = &s1[i];
			return(&newstr[i]);
		}
		i++;
	}
	return (0);
}