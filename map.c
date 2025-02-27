/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usogukpi <usogukpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:09:04 by usogukpi          #+#    #+#             */
/*   Updated: 2025/02/27 19:12:02 by usogukpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/skyscraper.h"
#include "./includes/utils.h"

void	get_maps(t_skyscraper *main)
{
	int	map[MAP_LEN][MAP_LEN];

	ft_memset(map, 0, sizeof(map));
	create_maps(main, map, 0);
}

void	create_maps(t_skyscraper *main, int **map, int j)
{
	if (j == MAP_LEN)
	{
		if (check_map(main, map))
			print_map(main, map);
		return ;
	}
	
}

void	print_combinations(int arr[], int n, int r, int data[])
{
	static int index = 0;
	static int i = 0;

	if (index == r)
		return ;
	if (i >= n)
		return ;
	data[index] = arr[i];
	index++;
	print_combinations(arr, n, r, data);
	index--;
	i++;
	print_combinations(arr, n, r, data);
}
