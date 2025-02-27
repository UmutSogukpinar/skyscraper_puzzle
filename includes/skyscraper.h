/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:37:28 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 18:59:49 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

# define MAP_LEN 4

typedef enum e_bool
{
	c_true = 1,
	c_false = 0
}				t_bool;

typedef struct s_way
{
	int			line_one;
	int			line_two;
	int			line_three;
	int			line_four;

}				t_way;

typedef struct s_skyscraper
{
	t_way		up;
	t_way		down;
	t_way		left;
	t_way		right;
	int			map[MAP_LEN][MAP_LEN];
	t_bool		solution_flag;

}				t_skyscraper;

t_bool			check_args(int argnum, char **args);
t_skyscraper	*parse_args(char **args);

#endif