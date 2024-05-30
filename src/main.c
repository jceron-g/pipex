/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:37:29 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 13:19:25 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char **idk = NULL;
	(void)argv;
	int	i;

	i = -1;
	parse_args(argc);
	idk = get_path(envp);
	while (idk[++i])
		printf("This is/are my path(s): %s\n", idk[i]);
}
