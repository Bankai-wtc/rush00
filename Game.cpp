/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:37:05 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:37:06 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game()
{
    this->timer = 20;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; i < 20; j++)
        {
            this->canvas[i][j] = 0; // 0 means its empty; 1 means its occupied
        }
    }
}

Game::~Game()
{
}

Game::Game(int timer)
{
    this->timer = timer;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; i < 20; j++)
        {
            this->canvas[i][j] = 0;
        }
    }
}

int Game::getCanvasItem(int i, int j)
{
    return (this->canvas[i][j]);
}

int Game::collition(int ax, int ay, int aw, int ah)
{
    for (int i = ax; i < (ax + aw); i++)
    {
        for (int j = ay; j < (ay + ah); j++)
        {
            if (this->canvas[i][j] != 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void Game::addPlayer(Player a)
{
    if (this->collition(a.getX(), a.getY(), a.getWidth(), a.getHeight()) == 0) //no collition
    {
        for (int i = a.getX(); i < (a.getX(), + a.getWidth()); i++)
        {
            for (int j = a.getY(); j < (a.getY() + a.getHeight()); j++)
            {
                this->canvas[i][j] = 1;
            }
        }
    }
}
