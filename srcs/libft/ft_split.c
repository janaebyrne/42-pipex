/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:08:13 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/08 16:48:01 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int wordindex)
{
	int	i;
	int	wordlen;

	i = 0;
	wordlen = 0;
	while (wordindex > 0)
	{
		wordlen = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			wordlen++;
		}
		wordindex--;
	}
	return (wordlen);
}

static char	*extractword(const char *s, char c, int whichword)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, whichword) + 1));
	if (str == NULL)
		return (NULL);
	while (whichword > 0)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (whichword == 1)
				str[j] = s[i];
			i++;
			j++;
		}
		whichword--;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (i <= ft_wordcount(s, c) - 1)
	{
		str[i] = extractword(s, c, i + 1);
		if (str[i] == NULL)
		{
			while (i > 0)
			{
				free(str [i - 1]);
				i--;
			}
			free (str);
			return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}
