/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:40:38 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/14 15:04:47 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include<stdio.h>
int	main(void)
{
	int length;

	length = ft_strlen("");
	printf("%d", length);
	return (0);
}*/
