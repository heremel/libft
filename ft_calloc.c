/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:44:26 by melferre          #+#    #+#             */
/*   Updated: 2024/10/11 18:03:32 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;
	char	*newstr;
	size_t	i;

	i = 0;
	str = malloc(nmemb * size);
	if (!str)
		return (0);
	newstr = str;
	while (i < size * nmemb)
	{
		newstr[i] = '\0';
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
