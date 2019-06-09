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
#include "Game.hpp"
#include <ncurses.h>
#include <iostream>

void initialise()
{
    initscr();
    cbreak();
    noecho();
  //  endwin();//for normal settings
    
}

int main()
{
    initialise();
    WINDOW *win = newwin(20 ,  20, 10, 10);
    refresh();
    box(win, 0 , 0);
    wrefresh(win);

    int c = getch();
    endwin();
    srand(time(NULL));
 /*   Game *game1 = new Game(20);
    Player player1("myPlayer");
    game1->addPlayer(player1);
    game1->initialiseBots();
    game1->MoveRightPlayer();
    game1->MoveRightPlayer();
    game1->MoveDownPlayer();
    game1->MoveDownPlayer();
    game1->MoveLeftPlayer();
    game1->MoveLeftPlayer();
    game1->MoveUpPlayer();
    game1->MoveUpPlayer();
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            std::cout << game1->getCanvasItem(i, j);
        }
        std::cout << std::endl;
    }
    std::cout << "\n\n";
    game1->MoveLeftBot();
    game1->MoveLeftBot();
    game1->MoveLeftBot();
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            std::cout << game1->getCanvasItem(i, j);
        }
        std::cout << std::endl;
    }*/
   // WINDOW *win = newwin(20 ,  20, 0, 0);
}