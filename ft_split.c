/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:22:45 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/15 20:48:34 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_array(char **result, int index)
{
	while (index > 0)
	{
		index--;
		free(result[index]);
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	word_len;
	int		word_index;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	word_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;
				
			
			result[word_index] = ft_substr(s, i, word_len);
		
			if (!result[word_index])
				return (free_array(result, word_index));
				
			word_index++;
			i += word_len;
		}
	}
	result[word_index] = ? ;
	return (result);
}

