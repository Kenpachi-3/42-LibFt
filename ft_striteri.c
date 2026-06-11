/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:21:34 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/11 17:30:53 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;
    if (!s)
        return ;
    while (s[i] != '\0')
    {
        (*f)(i, &s[i]);
        i++;
    }
}

/*void uppercase(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "meow meow meow";
    
    ft_striteri(str, uppercase);
    printf("%s\n", str);
    return (0);
}*/