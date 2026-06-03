/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 17:09:52 by ntshuma           #+#    #+#             */
/*   Updated: 2026/05/24 19:10:17 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >='a' && c<= 'z'))
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d", ft_isalpha('#'));
}*/
