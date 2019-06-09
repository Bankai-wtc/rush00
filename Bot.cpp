/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bot.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:17:44 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:17:45 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bot.hpp"
#include <string>

Bot::Bot()
{
}

Bot::~Bot()
{
}

Bot::Bot(std::string name)
{
    this->name = name;
    this->EnergyPoints = 100;
    this->height = 2;
    this->width = 1;
    this->x = 0;
    this->y= 0;
}

Bot::Bot(Bot const &copy)
{
    *this = copy;
}

Bot &Bot::operator=(Bot const &rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->height = rhs.height;
        this->width = rhs.width;
        this->x = rhs.x;
        this->y = rhs.y;
    }
    return (*this);
}

void Bot::takeDamage(int damage)
{
    if ((this->EnergyPoints - damage) >0)
    {
        this->EnergyPoints -= damage;
    }
    else
    {
        this->EnergyPoints = 0;
    }   
}

int Bot::getHeight()
{
    return this->height;
}

int Bot::getWidth()
{
    return this->width;
}

int Bot::getX()
{
    return this->x;
}

int Bot::getY()
{
    return this->y;
}

void Bot::setX(int x)
{
    this->x = x;
}

void Bot::setY(int y)
{
    this->y = y;
}
