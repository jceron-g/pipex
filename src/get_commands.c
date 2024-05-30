/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:44:33 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 13:24:33 by jceron-g         ###   ########.fr       */
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
			complete_path = *envp + 5;
			break ;
		}
		envp++;
	}
	if (!complete_path)
		print_error("Error finding the variable in envp");
	splitted_path = ft_split(complete_path, ':');
	return (splitted_path);
}
