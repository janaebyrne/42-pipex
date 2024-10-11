/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:33:37 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/20 16:36:24 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    char to_find[] = "World";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}*/
