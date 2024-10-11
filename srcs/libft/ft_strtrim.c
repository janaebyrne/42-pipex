/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:54:48 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/08 16:15:59 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static char	*ft_emptystr(void)
{
	char	*trimmed;

	trimmed = (char *)malloc(1 * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	trimmed[0] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	while (is_in_set(s1[end - 1], set) && end > 0)
		end--;
	if (start > end)
		return (ft_emptystr());
	trimmed = (char *)malloc((end - start + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}
// int main()
//  {
// 	const char *s = "";
// 	const char *set = "";
// 	int i;

// 	char *trimmed = ft_strtrim("   xxx   xxx", " x");
// 	printf("%s\n", trimmed);

// return (0);
// }
