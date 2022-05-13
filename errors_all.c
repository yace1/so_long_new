/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:35:24 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 12:01:28 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	errors_all(t_display_map *map)
{
	error_wall_up_bottom(map);
	error_wall_left_right(map);
	error_check_square(map);
	error_check_exit(map);
	error_check_item(map);
	error_check_player(map);
	return (0);
}
