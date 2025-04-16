/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mda-enca <mda-enca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 09:55:41 by mda-enca          #+#    #+#             */
/*   Updated: 2025/04/09 09:57:44 by mda-enca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

///ft_memset: Sets the first n bytes of the memory area point to by s to c;
///void *s: Pointer to the memory area;
///int c: Char to be set;
///size_t n: Number of bytes to be set;
///RETURN: SUCCESS: s

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char str[] = "Hello World";
	ft_memset(str, 'H', 5);
	memset(str, 'H', 5);
	printf("ft_memset: %s\n", str);
	printf("memset: %s", str);
	return (0);
}*/
