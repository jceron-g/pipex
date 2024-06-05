/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:28:09 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/05 16:39:30 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	parse_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (argv[i][0] == '\0' || argv[i][0] == ' ' || argv[i] == NULL)
			print_error("Command not found");
		i++;
	}
	if (argc == 5)
		return ;
	else
		print_error("Invalid arguments");
}
