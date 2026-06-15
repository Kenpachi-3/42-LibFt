/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:21:15 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/15 20:39:15 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    if (c == '\0')
        return ((char *)(s + i));
    return (NULL);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    
    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] != '\0' && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    return (ft_substr(s1, start, end - start));
}

int main(void)
{
    char *res;

    res = ft_strtrim("Avogadro","gadro");
    printf("Test : %s\n", res);
    free(res);

    return (0);
}
    

    

    
