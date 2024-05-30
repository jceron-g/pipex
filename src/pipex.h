/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:26:55 by jceron-g          #+#    #+#             */
/*   Updated: 2024/05/30 17:09:00 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../lib/libft/libft.h"

void	print_error(char *str);
void	parse_args(int argument);
void 	free_matrix(char **str);

/*-------------COMMANDS-------------*/
char	**get_path(char **envp);
char	*get_command(char **envp, char *argv);

#endif