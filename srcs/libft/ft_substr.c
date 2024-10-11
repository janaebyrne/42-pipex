/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:51:41 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/07 15:14:16 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	if (s == NULL || start >= (unsigned int) ft_strlen(s) || len == 0)
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (start + len > (unsigned int)ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char	*result;
	int		i;

	i = 0;
	result = ft_substr("hello", 2, 4);
	while (result[i] != '\0')
	{
		printf("%c", result[i]);
		i++;
	}

	free(result);
	return (0);
}*/
