/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 08:58:31 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 15:47:09 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_game(t_display_map *map)
{
	while (read_map_axe_y(map) > map->y)
	{
		map->str[map->y] = get_next_line(map->fd);
		map->x = 0;
		map->axe_x = 0;
		while (map->str[map->y][map->x])
		{
			mlx_put_image_to_window(map->mlx_ptr, map->win_ptr,
				map->background, map->axe_x, map->axe_y);
			read_wall(map);
			read_collectible(map);
			read_exit(map);
			read_player(map);
			map->x++;
			map->axe_x = map->axe_x + 50;
		}
		map->y++;
		map->axe_y = map->axe_y + 50;
	}
}

int	main(int argc, char **argv)
{
	t_display_map	map;

	if (argc != 2)
		exit(1);
	map.map = ft_strdup(argv[1]);
	map.fd = open(argv[1], O_RDONLY);
	initialisation_mlx(&map);
	errors_all(&map);
	initialisation_variables(&map);
	init_game(&map);
	mlx_key_hook(map.win_ptr, deal_key, &map);
	mlx_hook(map.win_ptr, 17, 1L << 0, destroy_window, &map);
	mlx_loop(map.mlx_ptr);
	free(map.str);
	free(map.map);
	close(map.fd);
	mlx_destroy_image(map.mlx_ptr, map.player);
	mlx_destroy_image(map.mlx_ptr, map.collectible);
	mlx_destroy_image(map.mlx_ptr, map.exit);
	mlx_destroy_image(map.mlx_ptr, map.wall);
	mlx_destroy_image(map.mlx_ptr, map.background);
	mlx_destroy_window(map.mlx_ptr, map.win_ptr);
	return (0);
}
