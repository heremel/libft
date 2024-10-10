/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:11:17 by melferre          #+#    #+#             */
/*   Updated: 2024/10/10 15:23:34 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_cast;
	char	*s_cast;

	c_cast = (char)c;
	s_cast = (char *)s;
	i = 0;
	while (s_cast[i] != '\0')
	{
		if (s_cast[i] == c_cast)
		{
			return (&s_cast[i]);
		}
		i++;
	}
	if (c_cast == '\0')
		return (&s_cast[i]);
	return (0);
}
