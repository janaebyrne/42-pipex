/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:09:14 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/22 15:38:21 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *str, size_t n)
{
	char	*p;

	p = (char *)str;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int	main(void)
{     char *buffer = (char *)malloc(6);
	strcpy(buffer, "hello");

    printf("Buffer before bzero: %s\n", buffer);
    ft_bzero(buffer, 6);

    printf("Buffer after bzero: %s\n", buffer);

    return 0;
}*/
