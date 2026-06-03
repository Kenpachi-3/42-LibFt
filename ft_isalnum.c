/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 19:23:43 by ntshuma           #+#    #+#             */
/*   Updated: 2026/05/24 19:48:27 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
	if ((( c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z')) || ( c>='0' && c<='9'))
		return (1);
	else
		return (0);
}

//if (ft_isdigit(c) || ft_isalpha(c)) this is the same as what is written above... think about using this method too!

int main()
{
	printf("%d", ft_isalnum('o'));
}
