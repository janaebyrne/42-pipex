/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:05:25 by jbyrne            #+#    #+#             */
/*   Updated: 2023/12/11 19:32:18 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t			total_size;
	unsigned char	*ptr;

	if (num_elements > 0 && SIZE_MAX / num_elements < element_size)
	{
		return (NULL);
	}
	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
