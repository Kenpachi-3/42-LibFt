/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:00:59 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:01:03 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}
/*int main(void)
{
    char c = 'A';
    char lower_c = tolower(c);
    printf("The lowercase of '%c' is '%c'\n", c, lower_c);
    return 0;
}*/