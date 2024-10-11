/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:55:22 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/05 15:40:25 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return ((char *) str);
	while (str[i] != '\0' && i < n)
	{
		k = i;
		while (str[k] == to_find[j] && to_find[j] != '\0' && k < n)
		{
			j++;
			k++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *) &str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    char str[] = "Hellowo, world!";
    char to_find[] = "wor";

    char *result = ft_strnstr(str, to_find, 12);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
*/
