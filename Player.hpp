/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:17:12 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:17:13 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H
#include <string>
#include "GameEntity.hpp"

class Player : GameEntity{
    private:
    int EnergyPoints, width, height, x, y;
    std::string name;

    public:
    Player();
    ~Player();
    Player(std::string);
    Player(const Player &copy);

    Player & operator=(Player const &rhs);

    void fire();
    void takeDamage(int damage);

    int getX();
    int getY();
    int getWidth();
    int getHeight();

    void    setX(int x);
    void    setY(int y);
};

#endif
