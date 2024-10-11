/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:13:02 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/13 15:20:40 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*#include<stdio.h>
int	main(void)
{
	int c;
	int d;

	c = ft_isprint('z');
	d = ft_isprint(127);
	printf("%d", c);
	printf("%d", d);
	return(0);
}*/		
