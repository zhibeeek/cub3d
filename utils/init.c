/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzhyrgal <zzhyrgal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:21:40 by zzhyrgal          #+#    #+#             */
/*   Updated: 2026/02/13 12:10:37 by zzhyrgal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
//bzero only modifies already-existing memory;
//A pointer with all bits set to zero is guaranteed 
                            //to be a NULL pointer.
//Uninitialized memory contains garbage.

void init_game(t_game *game)
{
    ft_bzero(game, sizeof(t_game));
    game->mlx = NULL;
    game->win = NULL;
    game->map.grid = NULL;
}

//i have 2 versions: Which one?


//all pointers start as NULL;
//free functions become safe;
void init_game(t_game *game)
{
    memset(game, 0, sizeof(t_game));
}
//ownership rule:each allocation must have exactly one owner;
//never free the same memory in two different places:
    //is it OKAY if it was set NULL??? ask ai to confirm!
//    