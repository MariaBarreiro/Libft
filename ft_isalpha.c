/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:02:58 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/08 15:05:06 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_isalpha: Check if char is alphabetic;
///int c: char to check;
///RETURN: SUCCESS: c:
///RETURN: FAILURE: 0;

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	int c = 'a';
	printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("isalpha: %d", isalpha(c));
	return (0);
}/*/
