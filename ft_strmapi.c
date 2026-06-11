/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:23:32 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/11 22:05:43 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    size_t len;
    char *result;

    if (!s || !f)
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    result = (char *)malloc(len + 1);
    if (!result)
        return (NULL);
    while (i < len)
    {
        result[i] = (*f)(i, s[i]);
        i++;
    }
    result[len] = '\0';
        return (result);
}
/*char uppercase(unsigned int index, char c)
{
    (void)index;
    if (c >= 'a' && c <= 'z')
    {
        c = c - 32;
    }
        return (c);
}

int main(void)
{
    char *new_string = "why do you want my heart?";
    char *result;

    result = ft_strmapi(new_string, uppercase);

    if (result == NULL)
    {
        printf("Error: Malloc failed.\n");
        return(1);
    }
    printf("Result: %s\n",result);
    free(result);
    return(0);
}*/