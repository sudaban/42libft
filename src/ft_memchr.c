/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:47:57 by sdaban            #+#    #+#             */
/*   Updated: 2024/10/11 11:00:15 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t nbr)
{
	size_t	i;

	i = 0;
	while (i < nbr)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return ((void *)(src + i));
		i++;
	}
	return (0);
}
