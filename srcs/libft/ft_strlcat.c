/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:49 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/08 15:59:03 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dest_length;
	size_t		i;

	dest_length = 0;
	i = 0;
	while (dest_length < size && dest[dest_length] != '\0')
		dest_length++;
	while (src[i] != '\0' && dest_length + 1 < size)
		dest[dest_length++] = src[i++];
	if (dest_length < size)
		dest[dest_length] = '\0';
	while (src[i] != '\0')
	{
		i++;
		dest_length++;
	}
	return (dest_length);
}
