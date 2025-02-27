/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:28:29 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 16:09:24 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "./includes/skyscraper.h"

int	main(int argn, char **args)
{
	if (argn != 17)
	{
		write(2, "Invalid number of arguments\n", 29);
		return (1);
	}
	if (!check_args(argn, args))
		return (1);
	return (0);
}
