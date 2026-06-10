/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:59:56 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/10 17:00:10 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    if (dest == NULL || src == NULL)
        return (0);
    i = 0;
    while (src[i] != '\0' && i + 1 < size)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return (strlen(src));
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *subbie;

    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s + start))
        len = ft_strlen(s + start);
    subbie = malloc(len + 1);
    if (!subbie)
        return (NULL);
    i = 0;
    while (i < len)
    {
        subbie[i] = s[start + i];
        i++;
    }
    subbie[i] = '\0';
    return (subbie);
}

int main()
{
    char *s = "Noluthando";
    unsigned int start = 5;
    size_t len = 6;
    char *result = ft_substr(s, start, len);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}