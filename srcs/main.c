/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:22:15 by janaebyrne        #+#    #+#             */
/*   Updated: 2024/09/09 15:51:24 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pipex.h"

static void	check_args(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Usage: ./pipex file1 cmd1 cmd2 file2\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}

int	main(int argc, char **argv, char **env)
{
	int		pipe_ends[2];
	pid_t	p_left_id;
	pid_t	p_right_id;

	check_args(argc);
	if (pipe(pipe_ends) == -1)
		perror_and_exit("pipe", NULL);
	p_left_id = fork();
	if (p_left_id == -1)
		perror_and_exit("fork", pipe_ends);
	else if (p_left_id == 0)
		pipeline_left(argv, env, pipe_ends);
	else
	{
		p_right_id = fork();
		if (p_right_id == -1)
			perror_and_exit("fork", pipe_ends);
		else if (p_right_id == 0)
		{
			pipeline_right(argv, env, pipe_ends);
		}
		else
			parent_process(p_left_id, p_right_id, pipe_ends);
	}
}
