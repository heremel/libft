/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:39:49 by melferre          #+#    #+#             */
/*   Updated: 2024/10/15 02:03:40 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (newstr[i])
	{
		if (sec_set[i] == newstr[i])
		{
			return (newstr);
		}
		i++;
	}
	return (newstr);
}
