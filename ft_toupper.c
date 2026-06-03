/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:58:13 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 14:58:18 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -32);
    return (c);
}
/*int main (void)
{
    char c = 'a';
    char upper_c = ft_toupper(c);
    printf("The uppercase of '%c' is '%c'\n", c, upper_c);
    return (0);
}*/