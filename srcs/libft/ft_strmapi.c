/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:55:27 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/05 15:01:17 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*result;

	i = 0;
	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/*char test_function(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}
*/
/*int main()
{
    const char *input = "Hello, World!";

    // Applying the example_function to each character of the string
    char *result = ft_strmapi(input, test_function);

    // Print the result
    printf("Result: %s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}

*/
