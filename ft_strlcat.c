/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:32:11 by melferre          #+#    #+#             */
/*   Updated: 2024/10/11 18:50:52 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	return_val;

	i = 0;
	return_val = ft_strlen(dst) + ft_strlen(src);
	dst_len = (ft_strlen(dst));
	if (size < ft_strlen(dst))
	{
		return (ft_strlen(src) + size);
	}
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (dst_len < size - 1 && src[i] != '\0')
	{
		dst[dst_len++] = src[i];
		i++;
	}
	dst[dst_len] = '\0';
	return (return_val);
}
