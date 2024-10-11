/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:35:15 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/04 18:42:39 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == NULL || size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
int main() {
    // Test case 1: Normal operation
    char destination[20];
    const char *source = "Hello, World!";
    size_t result = strlcpy(destination, source, sizeof(destination));

    printf("Test 1:\n");
    printf("Result: %zu\n", result);
    printf("Destination: %s\n\n", destination);

    // Test case 2: Buffer size is 0
    char dest2[5];
    const char *src2 = "Testing";
size_t result2 = strlcpy(dest2, src2, 0);

    printf("Test 2:\n");
    printf("Result: %zu\n", result2);
    printf("Destination: %s\n\n", dest2);

    // Test case 3: Destination buffer is NULL
    char *dest3 = NULL;
    const char *src3 = "This should not be copied";
    size_t result3 = strlcpy(dest3, src3, 10);

    printf("Test 3:\n");
    printf("Result: %zu\n", result3);

    return 0;
}*/
