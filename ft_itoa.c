/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:53:09 by melferre          #+#    #+#             */
/*   Updated: 2024/10/12 23:37:42 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//STANDBY, CONTINUE TOMORROW.
#include "libft.h"

int	get_size(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 1)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
char *ft_itoa(int n)
{
	char *str;

	str = malloc(get_size(n + 1) * sizeof(char));
	if (!str)
		return (NULL);
}
 #include <stdio.h>

int main()
{
	// printf("%d\n", get_size(1000));
	// printf("%d\n", get_size(-1000));
	// printf("%d\n", get_size(50));
	// printf("%d\n", get_size(-50));
	// printf("%d\n", get_size(1));
	// printf("%d\n", get_size(-1));
	printf("%d\n", get_size(-687488) + 1);
}