/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:42:14 by jbyrne            #+#    #+#             */
/*   Updated: 2024/09/09 16:01:08 by jbyrne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>
# include "libft.h"

char	*ft_findpath(char *desired_var, char **env);
void	ft_makepipe(int pipefd[2]);
void	ft_handlechild(char *cmd[], int in_fd, int out_fd, char **env);
void	ft_closefds(int fd1, int fd2);
int		ft_wordcount(const char *s, char c);
int		ft_wordlen(const char *s, char c, int wordindex);
char	*extractword(const char *s, char c, int whichword);
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
void	free_array(char **array);
char	*ft_findpath(char *desired_var, char **env);
char	*ft_join_path(const char *directory, const char *cmd_name);
char	*ft_find_command_path(char *cmd_name, char **env);
void	ft_execute(char *cmd, char **env);
void	parent_process(int process_id_1, int process_id_2, int *pipe_ends);
void	pipeline_right(char **argv, char **env, int *pipe_ends);
void	pipeline_left(char **argv, char **env, int *pipe_ends);
void	print_err_msg(char *prefix, char *file, int *pipe_ends);
void	perror_and_exit(char *prefix, int *pipe_ends);
char	*ft_str_tolower(char *str);

#endif
