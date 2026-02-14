/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhyrgal <zzhyrgal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:47:37 by zzhyrgal          #+#    #+#             */
/*   Updated: 2026/02/03 13:21:33 by zzhyrgal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MAP_H
# define MAP_H
# include <map.h>

typedef struct s_map
{
    char **grid;
    int width;
    int height;
}   t_map;

#endif
/*
main
 ├─ parse arguments
 ├─ parse .cub file
 │    ├─ textures & colors
 │    └─ map
 ├─ validate parsed data
 ├─ initialize game state
 ├─ hand off to graphics loop
 └─ cleanup on exit
*/