/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:53:17 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/08 16:13:37 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	ft_memcpy(((void*)0), ((void*)0), 3);
	return (0);
}

//     char src[20] = "How Are you ?"; //Source String
//     char dst[20] = {0}; //dst buffer
//     //copy source buffer int dst
//     ft_memcpy(dst,src,sizeof(src));
//     printf("dst = %s\n", dst);
//     return 0;
//

*/
