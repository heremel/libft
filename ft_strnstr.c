/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:37:58 by melferre          #+#    #+#             */
/*   Updated: 2024/10/11 00:05:03 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*huge;
	char	*small;
	size_t	i;
	size_t	j;

	huge = (char *)big;
	small = (char *)little;
	i = 0;
	j = 0;
	if (small[0] == '\0')
		return (&huge[i]);
	while (huge[i] != '\0' && i < len)
	{
		while (huge[i] == small[j] && i < len)
		{
			j++;
			i++;
			if (small[j] == '\0')
				return (&huge[i - j]);
		}
		i -= j;
		j = 0;
		i++;
	}
	return (0);
}
