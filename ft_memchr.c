/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:51:28 by melferre          #+#    #+#             */
/*   Updated: 2024/10/10 15:26:57 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	c_cast;

	s1 = (void *)s;
	c_cast = c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c_cast)
		{
			return (&s1[i]);
		}
		i++;
	}
	return (0);
}
