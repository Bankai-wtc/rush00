/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:42:19 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:42:20 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEENTITYCLASS_H
# define GAMEENTITY_CLASS_H
#include <string>

class GameEntity{
    private:
    int EnergyPoints, width, height, x, y;
    std::string name;

    public:
    GameEntity();
    ~GameEntity();
    GameEntity(std::string);
    GameEntity(const GameEntity &copy);

    GameEntity & operator=(GameEntity const &rhs);

    int getX();
    int getY();
    int getWidth();
    int getHeight();

    void    setX(int x);
    void    setY(int y);

    void moveup();
    void movedown();
    void moveleft();
    void moveright();
    void fire();
    void takeDamage(int damage);
};

#endif
