/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:47:55 by sdaban            #+#    #+#             */
/*   Updated: 2024/10/11 14:05:04 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *src1, const void *src2, size_t nbr)
{
	size_t	i;

	i = 0;
	while (i < nbr)
	{
		if (((unsigned char *)src1)[i] != ((unsigned char *)src2)[i])
			return (((unsigned char *)src1)[i] - ((unsigned char *)src2)[i]);
		i++;
	}
	return (0);
}
