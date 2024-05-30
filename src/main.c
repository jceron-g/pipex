/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:37:29 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 17:23:12 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char **idk = NULL;
	char *holi = NULL;
	//int	i = 0;
	int j = 0;

	parse_args(argc);
	idk = get_path(envp);
	holi = get_command(envp, *argv);
	// while (idk[i])
	// {
	// 	printf("This are my paths: %s\n", idk[i]);
	// 	i++;
	// }
	while (holi[j])
	{
		printf("My path for %s command is %s\n", argv[j], holi);
		j++;
	}
}
