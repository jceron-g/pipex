/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:37:29 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/06 13:11:10 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
    int fd[2];

    parse_args(argc, argv);
 	if (pipe(fd) == -1)
		print_error("Pipe could not be created");
	else
    	parent_process(argv, fd, envp);
}
