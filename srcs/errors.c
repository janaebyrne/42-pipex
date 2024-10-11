/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:49:09 by jbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 15:49:33 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	perror_and_exit(char *msg, int *pipe_ends)
{
	perror(msg);
	if (pipe_ends)
	{
		if (close(pipe_ends[0]) == -1)
			perror("Error closing pipe end [0]");
		if (close(pipe_ends[1]) == -1)
			perror("Error closing pipe end [1]");
	}
	exit(EXIT_FAILURE);
}

void	print_err_msg(char *prefix, char *file, int *pipe_ends)
{
	char	*errno_message;

	errno_message = ft_strdup(strerror(errno));
	if (!errno_message)
		perror_and_exit("malloc", pipe_ends);
	ft_str_tolower(errno_message);
	ft_putstr_fd(prefix, STDERR_FILENO);
	ft_putstr_fd(errno_message, STDERR_FILENO);
	free(errno_message);
	ft_putstr_fd(": ", STDERR_FILENO);
	ft_putstr_fd(file, STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
}
