/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bot.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:17:32 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:17:33 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOT_CLASS_H
# define BOT_CLASS_H
#include <string>
#include "GameEntity.hpp"

class Bot : GameEntity{
    private:
    int EnergyPoints, width, height, x, y;
    std::string name;

    public:
    Bot();
    ~Bot();
    Bot(std::string);
    Bot(const Player &copy);

    Player & operator=(Bot const &rhs);

    void fire();
    void takeDamage(int damage);

    void movedown(int &field);
};

#endif
