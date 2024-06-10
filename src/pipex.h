/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:26:55 by jceron-g          #+#    #+#             */
/*   Updated: 2024/06/10 10:07:46 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../lib/libft/libft.h"

void	print_error(char *str);
void	parse_args(int argc, char **argv);
void	free_matrix(char **str);
int		count_char(char *str, int c);

/*-------------COMMANDS-------------*/
char	**get_path(char **envp);
char	*get_command(char **envp, char *argv);
char	**fixed_commands(char **argv);
void	exec_commands(char *path, char **argv, char **envp);
void	child_process(char **argv, int *fd, char **envp);
void	child_process2(char **argv, int *fd, char **envp);
void	parent_process(char **argv, int *fd, char **envp);

#endif