/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:49:23 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/07 15:00:03 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int character)
{
	int		i;
	char	c;

	c = (char)character;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != c && (i >= 0))
		i--;
	if (i >= 0)
		return ((char *)&str[i]);
	else
		return (NULL);
}
