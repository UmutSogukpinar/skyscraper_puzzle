/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:37:28 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 17:02:33 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

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

}				t_skyscraper;

t_bool			check_args(int argnum, char **args);
t_skyscraper	*parse_args(char **args);

#endif