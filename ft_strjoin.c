/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:31:30 by melferre          #+#    #+#             */
/*   Updated: 2024/10/11 20:42:05 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	length;
	char *newstr;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	length = ft_strlen(str1);
	newstr = malloc (ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!newstr)
		return (NULL);
	while (s2[i] != '\0')
	{
		str1[length + i] = str2[i];
		i++;
	}
	newstr[length + i] = '\0';
	return (newstr);
}
