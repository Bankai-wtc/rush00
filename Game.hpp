/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:36:58 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 13:36:59 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_H
# define GAME_CLASS_H
#include "Player.hpp"
#include "Bot.hpp"
#include <string>

class Game{
    private:
    int timer;

    public:
    int canvas[20][20];
    Game();
    ~Game();
    Game(int timer);

    Game(const Game&copy);
    Game& operator=(Game const &rhs);

    int getCanvasItem(int i, int j);
    void addPlayer(Player a);
    void spawnBot();

    void MoveUp(Player t);
    void MoveDown(Player t);
    void MoveLeft(Player t);
    void MoveRight(Player t);

    void MoveUp(Bot t);
    void MoveDown(Bot t);
    void MoveLeft(Bot t);
    void MoveRight(Bot t);
    int  collition(int x,int y,int width,int height);
};

#endif