/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:02:12 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/04 18:58:45 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t						i;
	const unsigned char			*strbyte;

	strbyte = str;
	i = 0;
	while (i < n)
	{
		if (strbyte[i] == (unsigned char)c)
			return ((char *) &strbyte[i]);
		i++;
	}
	return ((char *) NULL);
}
/*#include <stdio.h>
int	main(void)
{
	void *result;

	result = ft_memchr ("hellooo", "o", 7);
	printf ("%d", result);
	return (0);
}
*/
