/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:37:29 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/05 16:40:15 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char *holi = NULL;
	char **bye = NULL;
	int	i = 0;
	parse_args(argc, argv);
	holi = get_command(envp, argv);
	bye = fixed_commands(&argv[3]);
	ft_printf("Aquí llega y la ruta es: %s!\n", holi);
	while(bye[i])
	{
		ft_printf("El comando que tengo es: %s!\n", bye[i]);
		i++;
	}
}
