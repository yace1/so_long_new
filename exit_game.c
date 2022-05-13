/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:35:37 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 11:31:59 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	destroy_window(void)
{
	exit (0);
}

int	exit_game_esc(int key, t_display_map *map)
{
	if (key == 53)
	{
		(void)map;
		exit(0);
	}
	return (0);
}
