/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:39:04 by fepopadi          #+#    #+#             */
/*   Updated: 2024/10/04 14:39:05 by fepopadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(nmemb) * (size));
	if (dest == NULL)
		return (NULL);
	while (i != size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
