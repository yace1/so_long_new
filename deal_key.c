/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacinebentayeb <yacinebentayeb@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:32:38 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/16 14:46:10 by yacinebenta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	deal_key(int key, t_display_map *map)
{
	move_down(key, map);
	move_up(key, map);
	move_left(key, map);
	move_right(key, map);
	move_count(key, map);
	exit_game_esc(key, map);
	catch_collectible(key, map);
	return (0);
}
