/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:47:50 by sdaban            #+#    #+#             */
/*   Updated: 2024/10/19 13:05:52 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t nbr)
{
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, nbr);
	else if (dst > src)
	{
		while (nbr--)
			*((unsigned char *)(dst + nbr)) = *((unsigned char *)(src + nbr));
	}
	return (dst);
}
