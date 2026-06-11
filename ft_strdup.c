/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:44:54 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/04 18:44:58 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

/*size_t ft_strlen(const char *s)
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
    return (ft_strlen(src));
}*/

char *ft_strdup(const char *s)
{
    char *duplicate;
    size_t len;

    len = ft_strlen(s);
    duplicate = (char *)malloc(len + 1);
    if (duplicate == NULL)
        return NULL;
    ft_strlcpy(duplicate, s, len + 1);
    return duplicate;
}

/*int main()
{
    const char *original = "I love avocados!";
    char *duplicate;

    duplicate = ft_strdup(original);
    if (duplicate == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    free(duplicate);
    return 0;
}*/