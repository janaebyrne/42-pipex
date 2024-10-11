/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:03:53 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/29 15:16:05 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t					i;
	const unsigned char		*byte1;
	const unsigned char		*byte2;

	byte1 = (const unsigned char *) str1;
	byte2 = (const unsigned char *) str2;
	i = 0;
	while (i < n)
	{
		if (byte1[i] > byte2[i])
			return (1);
		else if (byte1[i] < byte2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int	result;

	const char *string1 = "4321";
	const char *string2 = "4321";
	result = ft_memcmp(string1, string2, 4);
	printf("result is %d", result);
	return (0);
}*/
