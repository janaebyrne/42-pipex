/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:58:43 by jbyrne            #+#    #+#             */
/*   Updated: 2023/11/20 17:03:31 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && str1[i] && (str1[i] == str2[i]))
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
		return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
/*#include <stdio.h>

int	main()
{
	const char *str1 = "hellothere";
	const char *str2 = "helloapple";

	int result = ft_strncmp (str1, str2, 6);
	printf("%d", result);
}*/
