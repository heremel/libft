/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:39:49 by melferre          #+#    #+#             */
/*   Updated: 2024/10/12 21:55:14 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = malloc (ft_strlen(s1));
	if (!newstr)
		return (NULL);
	while (s1[i])
		;
	return (0);
}
