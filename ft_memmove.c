/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:38:04 by melferre          #+#    #+#             */
/*   Updated: 2024/10/09 20:36:45 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char *str;
	const char *str_sec;
	const char *temp;

	str = dest;
	str_sec = src;
	temp = str_sec;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		str[i] = temp[i];
		i++;
	}
	return (str);
}

// int main()
// {
// 	char *test = strdup("testtesttest");
// 	printf("%s\n", (char *)ft_memmove(test, &test[5], strlen(test)));
// 	char *testt = strdup("testtesttest");
// 	printf("%s\n", (char *)memmove(testt, &testt[5], strlen(testt)));
// }