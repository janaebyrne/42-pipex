/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:00:06 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/14 14:40:15 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include<stdio.h>
int	main(void)
{
	int a;
	a = ft_isascii('\x80');
	printf("%d", a);
	return(0);
}*/
