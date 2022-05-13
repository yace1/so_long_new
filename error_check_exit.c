/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_exit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:33:10 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 15:45:53 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error_check_exit(t_display_map *map)
{
	t_errors	errors;

	errors.fd = open(map->map, O_RDONLY);
	errors.i = 0;
	errors.str = malloc(sizeof(char *) * read_map_axe_y(map));
	while (errors.i < read_map_axe_y(map))
	{
		errors.str[errors.i] = get_next_line(errors.fd);
		if (ft_strchr(errors.str[errors.i], 'E') != NULL)
			return (0);
		else
			errors.i++;
	}
	ft_printf("Erreur\nIl manque une sortie !\n");
	free(errors.str);
	exit(0);
}
