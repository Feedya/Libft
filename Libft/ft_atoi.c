/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:40:23 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:40:26 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	t_atoi(const char *strg)
{
	int	i;
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	if (strg[i] == ' ')
		i++;
	if (strg[i] == '-' || strg[i] == '+')
	{
		if (strg[i] == '-')
			sign = -1;
			i++;
	}
	while (strg[i] <= '9' && strg[i] >= '0')
	{
		nbr = nbr * 10;
		nbr = nbr + (strg[i] - 48);
		i++;
	}
	return (sign * nbr);
}
