/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_rays.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iez-zagh <iez-zagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:29:49 by iez-zagh          #+#    #+#             */
/*   Updated: 2024/09/14 12:33:14 by iez-zagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	cast_rays(t_data *data)
{
	int		i;
	float	angle;

	i = 0;
	angle = data->player->angle;
	while(i < 150)
	{
		data->cast_angle += M_PI / 1100;
		cast_lines(data, data->player->sqaure_x, data->player->sqaure_y);
		i++;
	}
	data->cast_angle = angle;
}

void	remove_rays(t_data *data)
{
	int		i;
	float	angle;

	i = 0;
	angle = data->player->angle;
	while(i < 150)
	{
		data->old_cast_angle += M_PI / 1100;
		remove_direction3(data, data->player->sqaure_x, data->player->sqaure_y);
		i++;
	}
	data->old_cast_angle = angle;
}
