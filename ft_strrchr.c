/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:36:30 by melferre          #+#    #+#             */
/*   Updated: 2024/10/10 22:36:29 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_cast;
	char	*s_cast;
	int		i;

	c_cast = (char)c;
	s_cast = (char *)s;
	i = 0;
	while (s_cast[i])
		i++;
	while (i >= 0)
	{
		if (s_cast[i] == c_cast)
		{
			return (&s_cast[i]);
		}
		i--;
	}
	if (c_cast == '\0')
		return (&s_cast[i]);
	return (0);
}
