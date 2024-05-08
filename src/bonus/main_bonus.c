/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yboumlak <yboumlak@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:21:30 by yboumlak          #+#    #+#             */
/*   Updated: 2024/05/08 18:09:42 by yboumlak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/pipex_bonus.h"

int	main(int argc, char **argv, char **envp)
{
	t_pipe	p;

	p.argc = argc;
	p.args = argv;
	p.envp = envp;
	p.is_here_doc = false;
	if (argc > 5)
	{
		if (is_here_doc(p.args))
		{
			p.idx = 3;
			p.is_here_doc = true;
		}
		else
		{
			p.idx = 2;
			p.in_fd = open(argv[1], O_RDONLY);
			if (p.in_fd < 0)
			{
				perror("Error opening input file");
				return (1);
			}
			p.out_fd = open(argv[argc - 1], O_WRONLY | O_CREAT | O_TRUNC, 0777);
			if (p.out_fd < 0)
			{
				perror("Error opening output file");
				return (1);
			}
		}
		execute_pipe(&p);
	}
	else
		perror("Ghayerha");
}