/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map_axe_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:38:17 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 12:14:00 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	read_map_axe_x(t_display_map *map)
{
	int	fd;

	fd = open(map->map, O_RDONLY);
	return (ft_strlen(get_next_line(fd)) - 1);
}
