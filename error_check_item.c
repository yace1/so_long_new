/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_item.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:33:36 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 12:11:54 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error_check_item(t_display_map *map)
{
	int		fd;
	int		i;
	char	**str;

	fd = open(map->map, O_RDONLY);
	i = 0;
	str = malloc(sizeof(char *) * read_map_axe_y(map));
	while (i < read_map_axe_y(map))
	{
		str[i] = get_next_line(fd);
		if (ft_strchr(str[i], 'C') != NULL)
			return (0);
		else
			i++;
	}
	ft_printf("Erreur\nIl manque un item !\n");
	free(str);
	exit(0);
}
