/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 00:53:09 by melferre          #+#    #+#             */
/*   Updated: 2024/10/15 01:04:06 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//STANDBY, CONTINUE TOMORROW.
#include "libft.h"

int	get_div(int n)
{
	long	new_n;
	int		result;

	new_n = (long)n;
	result = 1;
	if (new_n < 0)
		new_n = new_n * -1;
	while (new_n >= 10)
	{
		new_n = new_n / 10;
		result *= 10;
	}
	return (result);
}

int	get_size(int n)
{
	int		count;
	long	new_n;

	new_n = (long)n;
	count = 0;
	if (new_n <= 0)
	{
		new_n = new_n * -1;
		count++;
	}
	while (new_n >= 1)
	{
		new_n = new_n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	new_n;
	int		var_div;

	new_n = (long)n;
	i = 0;
	var_div = (get_div(n));
	str = malloc(get_size(n) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	if (new_n < 0)
	{
		new_n = new_n * -1;
		str[0] = '-';
		i++;
	}
	while (var_div > 0)
	{
		str[i] = (new_n / var_div) + '0';
		new_n = new_n % var_div;
		var_div = var_div / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
