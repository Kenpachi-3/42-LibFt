/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:59:56 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/15 19:20:22 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}*/

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

/*int main()
{
    char *s = "Noluthando";
    unsigned int start = 4;
    size_t len = 6;
    char *result = ft_substr(s, start, len);
    if (result)
    {
        printf("Result %s\n", result);
        free(result);
    }
    return (0);
}*/