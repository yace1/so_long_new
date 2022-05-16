/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_collectible.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacinebentayeb <yacinebentayeb@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:32:08 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/16 14:34:31 by yacinebenta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	catch_collectible(int key, t_display_map *map)
{
	(void)key;
	if (map->str[map->p_y / 50][map->p_x / 50] == 'C')
	{
		map->collectible_number--;
		map->str[map->p_y / 50][map->p_x / 50] = 'B';
	}
	if (map->str[map->p_y / 50][map->p_x / 50] == 'E')
	{
		if (map->collectible_number <= 0
			&& map->str[map->p_y == map->exit_axe_y]
			[map->p_x == map->exit_axe_x])
			free (map->map);
			free_and_exit(map);
		exit(0);
	}
	return (0);
}

/*
while (1)
{
	sleep(1);
	printf("%d\n", getpid());
}
*/