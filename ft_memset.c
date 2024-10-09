/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:22:43 by melferre          #+#    #+#             */
/*   Updated: 2024/10/09 19:54:26 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;
	size_t	i;

	str = (unsigned char *)s;
	i = 0;
	if (!s && !n)
		return (NULL);
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}