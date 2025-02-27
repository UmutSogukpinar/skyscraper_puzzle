/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:28:29 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 18:10:11 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "./includes/skyscraper.h"
#include "./includes/utils.h"

int	main(int argn, char **args)
{
	t_skyscraper	*main;

	if (argn != 17)
	{
		write(2, "Invalid number of arguments\n", 29);
		return (1);
	}
	if (!check_args(argn, args))
		return (1);
	main = parse_args(args);
	get_maps(main);
	free(main);
	return (0);
}
