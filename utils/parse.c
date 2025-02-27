/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:37:19 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 19:00:21 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/skyscraper.h"
#include "../includes/utils.h"
#include "stdlib.h"

static void	parse_up(t_skyscraper *main, char **args, int start);
static void	parse_down(t_skyscraper *main, char **args, int start);
static void	parse_left(t_skyscraper *main, char **args, int start);
static void	parse_right(t_skyscraper *main, char **args, int start);

t_skyscraper	*parse_args(char **args)
{
	t_skyscraper	*new;

	new = ft_calloc(1, sizeof(t_skyscraper));
	if (!new)
		return (NULL);
	parse_up(new, args, 1);
	parse_down(new, args, 5);
	parse_left(new, args, 9);
	parse_right(new, args, 13);
	new->solution_flag = c_false;
	return (new);
}

static void	parse_up(t_skyscraper *main, char **args, int start)
{
	main->up.line_one = ft_atoi(args[start]);
	main->up.line_two = ft_atoi(args[start + 1]);
	main->up.line_three = ft_atoi(args[start + 2]);
	main->up.line_four = ft_atoi(args[start + 3]);
}

static void	parse_down(t_skyscraper *main, char **args, int start)
{
	main->down.line_one = ft_atoi(args[start]);
	main->down.line_two = ft_atoi(args[start + 1]);
	main->down.line_three = ft_atoi(args[start + 2]);
	main->down.line_four = ft_atoi(args[start + 3]);
}

static void	parse_left(t_skyscraper *main, char **args, int start)
{
	main->left.line_one = ft_atoi(args[start]);
	main->left.line_two = ft_atoi(args[start + 1]);
	main->left.line_three = ft_atoi(args[start + 2]);
	main->left.line_four = ft_atoi(args[start + 3]);
}

static void	parse_right(t_skyscraper *main, char **args, int start)
{
	main->right.line_one = ft_atoi(args[start]);
	main->right.line_two = ft_atoi(args[start + 1]);
	main->right.line_three = ft_atoi(args[start + 2]);
	main->right.line_four = ft_atoi(args[start + 3]);
}
