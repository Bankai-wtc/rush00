/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:49:49 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:49:50 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "GameEntity.hpp"
#include "Game.hpp"
#include <ncurses.h>

void initialise()
{
    initscr();
    cbreak();
    noecho();
    //endwin();//for normal settings
    
}

int main()
{
    initialise();
    Game *game1 = new Game(20);
    Player *player = new Player();

    WINDOW *win = newwin(20 ,  20, 0, 0);
}