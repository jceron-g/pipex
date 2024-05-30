/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:44:33 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 17:26:16 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_path(char **envp)
{
	char	*complete_path;
	char	**splitted_path;

	complete_path = NULL;
	while (*envp)
	{
		if (ft_strncmp(*envp, "PATH=", 5) == 0)
		{
			complete_path = (*envp + 5);
			break ;
		}
		envp++;
	}
	if (!complete_path)
		print_error("Error finding the variable in envp");
	splitted_path = ft_split(complete_path, ':');
	return (splitted_path);
}

char	*get_command(char **envp, char *argv)
{
	char	**path;
	char	**command;
	char	*command_path;
	int		i;

	i = 0;
	command_path = NULL;
	path = get_path(envp);
	command = ft_split(argv, ' ');
	while (path[i])
	{
		command_path = ft_strjoin(ft_strjoin(path[i], "/"), command[0]);
		if (!access(command_path, X_OK))
			break ;
		free(command_path);
		command_path = NULL;
		i++;
	}
	free_matrix(path);
	return (command_path);
}
