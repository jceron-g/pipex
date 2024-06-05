/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:06:31 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/05 16:44:17 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec_commands(char *path, char **argv, char **envp)
{
	char	**command;

	command = NULL;
	command = fixed_commands(argv);
	execve(path, command, envp);
	free_matrix(command);
}

void	child_process(char **argv, int *fd, char **envp)
{
	int		infile_fd;
	char	*path;

	infile_fd = open(argv[1], O_RDONLY);
	if (infile_fd == -1)
		print_error("Error opening the infile.\n");
	dup2(infile_fd, 0);
	dup2(fd[1], 1);
	close(fd[0]);
	path = get_command(envp, &argv[2]);
	if (!path)
		print_error("Command not found");
	exec_commands(path, &argv[2], envp);
	exit(EXIT_SUCCESS);
}
