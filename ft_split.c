/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 21:34:51 by melferre          #+#    #+#             */
/*   Updated: 2024/10/17 00:01:20 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords()
{














	
}
char **ft_split(char const *s, char c)
{
	char **split_str;

	**split_str = malloc (ft_strlen(s) * sizeof(char *));
	if (!split_str)
		return (NULL);
	*split_str = malloc (ft_strlen(s) * sizeof (char));
	if (!split_str)
		return (NULL);
}