/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:55:10 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/12 09:51:25 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	countlength(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*myitoa(int n)
{
	char	*result;
	int		i;
	int		size;

	size = countlength(n) + 1;
	result = (char *)malloc(size * sizeof(char));
	if (!result)
		return (NULL);
	i = size - 1;
	result[i] = '\0';
	i -= 1;
	while (i >= 0)
	{
		result[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	char	*temp;

	if (n == 0)
	{
		result = ft_strdup("0");
		return (result);
	}
	if (n == INT_MIN)
	{
		result = ft_strdup("-2147483648");
		return (result);
	}
	if (n < 0)
	{
		temp = myitoa(-n);
		if (!temp)
			return (NULL);
		result = ft_strjoin("-", temp);
		free(temp);
	}
	else
		result = myitoa(n);
	return (result);
}

/*
int main() {
    int number1 = 123;
    int number2 = -456;

    char *result1 = ft_itoa(number1);
    char *result2 = ft_itoa(number2);

    if (result1 != NULL && result2 != NULL) {
        printf("Number 1: %d\nString 1: %s\n", number1, result1);
        printf("Number 2: %d\nString 2: %s\n", number2, result2);

        free(result1); // Don't forget to free the allocated memory
        free(result2);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

		absolute = myitoa(-(n + 1));
		if (!absolute)
			return (NULL);
		result = ft_strjoin("-", absolute);
		result[11] = '';
		return (result);
*/
