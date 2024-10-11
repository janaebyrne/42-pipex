/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:27:30 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/05 15:55:10 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = source;
	if (d == s || n == 0)
		return (dest);
	if (d < s || d >= s + n)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}

/*void	*ft_memmove(void *dest, const void *source, size_t n)
{
	if (dest > source)
	{
		dest += n;
		source += n;
		while (n--)
		{
			(--dest);
			(--source);
			*(char *)dest = *(char *)source;
		}
	}
	else if (dest < source)
	{
		while (n--)
		{
			*(char *)dest ++ = *(char *)source++;
		}
	}
	return (dest);
}

int main()
{
    char str[] = "Hello, world!";
    char buffer[20];

   ft_memmove(buffer, (str + 7), 6);
    printf("Using memmove: %s\n", buffer);

    return (0);
}*/
