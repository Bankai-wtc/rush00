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
#include <iostream>

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
                return this->canvas[i][j];
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
    this->player1 = a;
}

Bot Game::spawnBot()
{
    int r = (rand() % 19);
    int r2 = 15 + (rand() % 5);
    if (this->collition(r2, r, 1, 2) == 0)
    {
        this->canvas[r][r2] = 2;
        this->canvas[r + 1][r2] = 2;
    }
    Bot newBot("level1_Destroyer");
    newBot.setX(r);
    newBot.setY(r2);
  //  std::cout << r << std::endl;
    return newBot;
}

void Game::initialiseBots()
{
    for (int i = 0; i < 5; i++)
    {
        this->bots[i] = spawnBot();
    }
}

void Game::MoveDownPlayer()
{
    if ((this->player1.getX() + this->player1.getHeight()) < 19)
    {
        for (int i = 0; i < this->player1.getWidth(); i++)
        {
            this->canvas[this->player1.getX()][this->player1.getY() + i] = 0;
            this->canvas[this->player1.getX() + this->player1.getWidth() ][this->player1.getY() + i] = 1;
        }
        this->player1.setX(this->player1.getX() + 1);
    }
    else
    {
        /* GAME OVER bc collition*/
    }
}

void Game::MoveRightPlayer()
{
    if ((this->player1.getX() + this->player1.getWidth()) < 19)
    {
        for (int i = 0; i < this->player1.getHeight(); i++)
        {
            this->canvas[this->player1.getX() + i][this->player1.getY()] = 0;
            this->canvas[this->player1.getX() + i][this->player1.getY() + this->player1.getWidth() ] = 1;
        }
        this->player1.setY(this->player1.getY() + 1);
    }
    else
    {
        /* GAME OVER bc collition*/
    }
    
}

void Game::MoveLeftPlayer()
{
    if (this->player1.getY() - 1 >= 0)
    {
        for (int i = 0; i < this->player1.getHeight(); i++)
        {
            this->canvas[this->player1.getX() + i][this->player1.getY() + this->player1.getWidth() - 1] = 0;
            this->canvas[this->player1.getX() + i][this->player1.getY() - 1  ] = 1;
        }
        this->player1.setY(this->player1.getY() - 1);
    }
    else
    {
        /* GAME OVER bc collition*/
    }
}

void Game::MoveUpPlayer()
{
    if ((this->player1.getX() - 1) >= 0)
    {
        for (int i = 0; i < this->player1.getWidth(); i++)
        {
            this->canvas[this->player1.getX() + this->player1.getHeight() - 1][this->player1.getY() + i] = 0;
            this->canvas[this->player1.getX() - 1  ][this->player1.getY() + i] = 1;
        }
        this->player1.setX(this->player1.getX() - 1);
    } 
    else
    {
        /* GAME OVER bc collition*/
    }   
}

void Game::MoveLeftBot()
{
    for (int k = 0; k < 5; k++)
    {
        if (this->bots[k].getY() - 1 >= 0)
        {
            for (int i = 0; i < this->bots[k].getHeight(); i++)
            {
                this->canvas[this->bots[k].getX() + i][this->bots[k].getY() + this->bots[k].getWidth() - 1] = 0;
                this->canvas[this->bots[k].getX() + i][this->bots[k].getY() - 1  ] = 2;
            }
            this->bots[k].setY(this->bots[k].getY() - 1);
        }
        else
        {
            /* ReSpawn*/
        }
    }
}



