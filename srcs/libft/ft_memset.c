/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:10:22 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/01 13:41:36 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t				i;
	unsigned char		*p;

	p = (unsigned char *) ptr;
	i = 0;
	while (i < n)
	{
		p[i] = x;
		i++;
	}
	return (ptr);
}
/*
#include<stdio.h>
int	main(void)
{
    char str1[] = "hello there";
    int i;

    str1[5] = '\0'; // Null-terminate the string at position 5 before modifying

    ft_memset(str1 + 5, '.', 5);

    i = 0;
    while (str1[i] != '\0')
    {
        printf("%c", str1[i]);
        i++;
    }
}*/
