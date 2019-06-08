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
    this->width = 2;
    this->x = 0;
    this->y= 0;
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

void Bot::movedown(int &field)
{
}
