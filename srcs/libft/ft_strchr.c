/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:41:01 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/07 15:00:20 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int character)
{
	size_t		i;
	char		c;

	c = (char)character;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *) &str[i]);
		}
		i++;
	}
	if (str[i] == c)
		return ((char *) &str[i]);
	return (NULL);
}

/*
#include <stdio.h>
int main() {
    const char *str = "Hello, World!";
    char search_char = 'o';

    char *result = ft_strchr(str, search_char);

    printf("%s", result);

    return 0;
}*/
