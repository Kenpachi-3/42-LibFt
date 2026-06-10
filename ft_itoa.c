/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:24:19 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/10 18:24:26 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int ft_strlen(const char *s)
{
	static int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}



char *ft_itoa(int n)
{
    
}
