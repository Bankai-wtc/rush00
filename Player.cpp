/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:17:18 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:17:19 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include <string>

Player::Player()
{
}

Player::~Player()
{
}

Player::Player(std::string name)
{
    this->name = name;
    this->EnergyPoints = 100;
    this->height = 2;
    this->width = 2;
    this->x = 0;
    this->y= 0;
}

void Player::takeDamage(int damage)
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

int Player::getHeight()
{
    return this->height;
}

int Player::getWidth()
{
    return this->width;
}

int Player::getX()
{
    return this->x;
}

int Player::getY()
{
    return this->y;
}

void Player::setX(int x)
{
    this->x = x;
}

void Player::setY(int y)
{
    this->y = y;
}