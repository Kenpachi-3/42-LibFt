/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:22:45 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/10 18:22:48 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char **ft_split(char const *s, char c)
{
    char **split;
    size_t i;
    size_t j;
    size_t k;

    if (!s)
        return (NULL);
    split = malloc((ft_strlen(s) + 1) * sizeof(char *));
    if (!split)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        k = i;
        while (s[k] != '\0' && s[k] != c)
            k++;
        split[j++] = ft_substr(s, i, k - i);
        i = k;
    }
    split[j] = NULL;
    return (split);
}

int main()
{
    char *s = "Hello, world! This is a test.";
    char c = ' ';
    char **result = ft_split(s, c);
    if (result)
    {
        for (size_t i = 0; result[i] != NULL; i++)
        {
            printf("'%s'\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    return 0;
}
