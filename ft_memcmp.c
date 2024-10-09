/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:03:37 by melferre          #+#    #+#             */
/*   Updated: 2024/10/09 20:01:24 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TRUC A MODIFIER

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t 					i;

	str1 = s1;
	str2 = s2;
	i = 0;
	
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}  