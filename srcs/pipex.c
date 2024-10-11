/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 22:22:29 by janaebyrne        #+#    #+#             */
/*   Updated: 2024/09/09 15:49:01 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "pipex.h"

char	*ft_str_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	return (str);
}

void	pipeline_left(char **argv, char **env, int *pipe_ends)
{
	int	infile_fd;

	(void)ft_execute;
	infile_fd = open(argv[1], O_RDONLY);
	if (close(pipe_ends[0]) == -1)
		perror_and_exit("close", pipe_ends);
	if (infile_fd == -1)
	{
		print_err_msg("pipex: ", argv[1], pipe_ends);
		if (close(pipe_ends[1]) == -1)
			perror_and_exit("close", pipe_ends);
		exit(EXIT_FAILURE);
	}
	if (dup2(pipe_ends[1], STDOUT_FILENO) == -1)
		perror_and_exit("dup2", pipe_ends);
	if (close(pipe_ends[1]) == -1)
		perror_and_exit("close", pipe_ends);
	if (dup2(infile_fd, STDIN_FILENO) == -1)
		perror_and_exit("dup2", pipe_ends);
	if (close(infile_fd) == -1)
		perror_and_exit("close", pipe_ends);
	ft_execute(argv[2], env);
}

void	pipeline_right(char **argv, char **env, int *pipe_ends)
{
	int	outfile_fd;

	outfile_fd = open(argv[4], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (close(pipe_ends[1]) == -1)
		perror_and_exit("close", pipe_ends);
	if (outfile_fd == -1)
	{
		print_err_msg("pipex: ", argv[4], pipe_ends);
		if (close(pipe_ends[0]) == -1)
			perror_and_exit("close", pipe_ends);
		exit(EXIT_FAILURE);
	}
	if (dup2(pipe_ends[0], STDIN_FILENO) == -1)
		perror_and_exit("dup2", pipe_ends);
	if (close(pipe_ends[0]) == -1)
		perror_and_exit("close", pipe_ends);
	if (dup2(outfile_fd, STDOUT_FILENO) == -1)
		perror_and_exit("dup2", pipe_ends);
	if (close(outfile_fd) == -1)
		perror_and_exit("close", pipe_ends);
	ft_execute(argv[3], env);
}

void	parent_process(int process_id_1, int process_id_2, int *pipe_ends)
{
	int	child_status;

	if (close(pipe_ends[0]) == -1)
		perror_and_exit("close", pipe_ends);
	if (close(pipe_ends[1]) == -1)
		perror_and_exit("close", pipe_ends);
	waitpid(process_id_1, NULL, 0);
	waitpid(process_id_2, &child_status, 0);
	if (WIFEXITED(child_status) && WEXITSTATUS(child_status) != EXIT_SUCCESS)
		exit(EXIT_FAILURE);
	else
		exit(EXIT_SUCCESS);
}
