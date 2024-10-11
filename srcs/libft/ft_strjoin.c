/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:56:53 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/05 14:04:04 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joined;
	size_t		len1;
	size_t		len2;
	size_t		i;
	size_t		j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	j = 0;
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	while (i < len1)
	{
		*(joined + i++) = *s1++;
	}
	while (j < len2)
	{
		*(joined + i + j++) = *s2++;
	}
	*(joined + i + j) = '\0';
	return (joined);
}
/*
int	main(void)
{
	char*	joined;
	joined = ft_strjoin("hello", "how are you");

	int i = 0;
	while (joined[i] != '\0')
	{
		printf("%c", joined[i]);
		i++;
	}
return(0);
}*/
