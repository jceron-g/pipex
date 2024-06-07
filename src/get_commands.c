/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:44:33 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/07 16:19:57 by jceron-g         ###   ########.fr       */
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
	{
		print_error("Error finding the variable in envp");
		free(complete_path);
	}
	splitted_path = ft_split(complete_path, ':');
	return (splitted_path);
}

char	*get_command(char **envp, char *argv)
{
	char	**path;
	char	**command;
	char	*actual_path;
	char	*command_path;
	int		i;

	i = 0;
	command_path = NULL;
	path = get_path(envp);
	command = ft_split(argv, ' ');
	while (path[i])
	{
		actual_path = ft_strjoin(path[i], "/");
		command_path = ft_strjoin(actual_path, command[0]);
		free (actual_path);
		if (access(command_path, F_OK | X_OK) == 0)
			break ;
		free(command_path);
		i++;
	}
	free_matrix(path);
	return (command_path);
}

char	**fixed_commands(char **argv)
{
	int		quote_num;
	char	**commands;

	quote_num = count_char(*argv, '\'');
	if (quote_num == 2)
	{
		commands = ft_split(*argv, '\'');
		commands[0] = ft_strtrim(commands[0], " ");
		return (commands);
	}
	else
	{
		commands = ft_split(*argv, ' ');
		return (commands);
	}
}
