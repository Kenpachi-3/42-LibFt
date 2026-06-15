/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:17:37 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/15 18:11:47 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *new_str;
    size_t len1;
    size_t len2;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    new_str = (char *)malloc(sizeof(char)* (len1 + len2 +1));
    if (!new_str)
        return (NULL);
    
    i = 0;
    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
            i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        new_str[i+j] = s2[j];
            j++;
    }
    new_str[i+j] = '\0';
    return (new_str);
}

/*int main (void)
{
    char *res;

    res = ft_strjoin("God is ","a woman.");
    printf("Test : %s\n", res);
    free(res);
}*/
