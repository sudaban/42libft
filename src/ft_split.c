/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdaban <sdaban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:12:59 by sdaban            #+#    #+#             */
/*   Updated: 2024/10/19 16:32:24 by sdaban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(const char *str, char delimiter)
{
	size_t	word_count;

	word_count = 0;
	while (*str)
	{
		while (*str == delimiter)
			str++;
		if (*str)
			word_count++;
		while (*str != delimiter && *str)
			str++;
	}
	return (word_count);
}

static void	free_all_memory(char **word_list, int index)
{
	while (index >= 0)
		free(word_list[index--]);
	free(word_list);
}

static char	*extract_word(const char *str, char delimiter)
{
	size_t	word_length;

	word_length = 0;
	while (str[word_length] && str[word_length] != delimiter)
		word_length++;
	return (ft_substr(str, 0, word_length));
}

static int	fill_word_list(char **word_list, const char *str, char delimiter)
{
	int	index;

	index = 0;
	while (*str)
	{
		while (*str == delimiter && *str)
			str++;
		if (*str)
		{
			word_list[index] = extract_word(str, delimiter);
			if (!word_list[index])
			{
				free_all_memory(word_list, index - 1);
				return (0);
			}
			str += ft_strlen(word_list[index++]);
		}
	}
	word_list[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!lst || !fill_word_list(lst, s, c))
		return (NULL);
	return (lst);
}
