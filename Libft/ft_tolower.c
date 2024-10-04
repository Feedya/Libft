/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:41:57 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:41:58 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_toupper(int c)
{
	if (c <= 90 && c >= 65)
		c = c + 32;
	return (c);
}
