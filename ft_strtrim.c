/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:39:49 by melferre          #+#    #+#             */
/*   Updated: 2024/10/12 01:00:38 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//STANDBY, DO LATER, ITOA FIRST.
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*newstr;

	i = 0;
	newstr = malloc (ft_strlen(s1) - ft_strlen(set));
	if (!newstr)
		return (NULL);
	while (s1[i])
		;
}
