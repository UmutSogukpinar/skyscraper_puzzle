/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:39:24 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 16:08:02 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/skyscraper.h"
#include "../includes/utils.h"
#include "unistd.h"

static t_bool	is_digit(char c);
static t_bool	is_number(char *str);

t_bool check_args(int argnum, char **args)
{
	int	i;
	int	num;

	i = 0;
	while (++i < argnum)
	{
		if (!(is_number(args[i])))
		{
			write(2, "All provided arguments are not numbers\n", 40);
			return (c_false);
		}
		num = ft_atoi(args[i]);
		if (!(num >= 1 && num <= 4))
		{
			write(2, "Provided arguments should ", 27);
			write(2, "be between one and four as integer\n", 36);
			return (c_false);
		}
	}
	return (c_true);
}

static t_bool	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(is_digit(str[i])))
			return (c_false);
		i++;
	}
	return (c_true);
}

static t_bool	is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (c_true);
	return (c_false);
}
