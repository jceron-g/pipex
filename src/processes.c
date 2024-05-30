/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:06:31 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 12:49:28 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// void	child_process(char **argv, char **envp, int *fd)
// {
// 	int		infile_fd;
// 	pid_t	pid;

// 	infile_fd = open(argv[1], O_RDONLY);
// 	pid = fork();
// 	if (pid == -1)
// 		print_error("PID failing to fork");
// 	close(fd[0]);
// }
