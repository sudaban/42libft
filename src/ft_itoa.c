/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:13:01 by sdaban            #+#    #+#             */
/*   Updated: 2024/10/19 14:13:57 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	pull_digit_count(int num)
{
	size_t	i;

	if (num == 0)
		return (1);
	i = 0;
	if (num < 0)
		num = -num;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_version;
	size_t		digits;
	long int	num;

	num = n;
	digits = pull_digit_count(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_version = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_version)
		return (NULL);
	*(str_version + digits) = 0;
	while (digits--)
	{
		*(str_version + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_version + 0) = '-';
	return (str_version);
}
