/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:29:18 by melferre          #+#    #+#             */
/*   Updated: 2024/10/10 15:25:35 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*str_sec;

	str = dest;
	str_sec = src;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		str[i] = str_sec[i];
		i++;
	}
	return (str);
}
