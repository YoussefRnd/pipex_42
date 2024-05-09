/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:40:22 by yboumlak          #+#    #+#             */
/*   Updated: 2024/05/09 18:55:20 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pipex.h"

void	error(char *error_msg)
{
	perror(error_msg);
	exit(EXIT_FAILURE);
}

void	print_usage(void)
{
	ft_putstr_fd("Usage:\n", 2);
	ft_putstr_fd("./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2\n", 2);
	exit(EXIT_FAILURE);
}
