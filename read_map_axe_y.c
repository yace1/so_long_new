/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_axe_y.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:38:31 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 12:13:21 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	read_map_axe_y(t_display_map *map)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(map->map, O_RDONLY);
	while (get_next_line(fd))
		i++;
	return (i);
}
