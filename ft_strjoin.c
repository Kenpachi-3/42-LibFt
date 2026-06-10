/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:17:37 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/10 18:17:42 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *joined;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!joined)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        joined[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        joined[i + j] = s2[j];
        j++;
    }
    joined[i + j] = '\0';
    return (joined);
} 

int main()
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
