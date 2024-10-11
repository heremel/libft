/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:56:36 by melferre          #+#    #+#             */
/*   Updated: 2024/10/11 20:30:07 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*newstr;

	j = 0;
	if (start >= ft_strlen(s))
	{
		newstr = malloc(1);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	newstr = malloc (len + 1);
	if (!newstr)
		return (NULL);
	while (s[start] && j < len)
	{
		newstr[j] = s[start];
		j++;
		start++;
	}
	newstr[j] = '\0';
	return (newstr);
}
