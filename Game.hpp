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
    Bot bots[5];
    Player player1;

    public:
    int canvas[20][20];
    Game();
    ~Game();
    Game(int timer);

    Game(const Game&copy);
    Game& operator=(Game const &rhs);

    int getCanvasItem(int i, int j);
    void addPlayer(Player a);
    Bot spawnBot();
    void    initialiseBots();

    void MoveUpPlayer();
    void MoveDownPlayer();
    void MoveLeftPlayer();
    void MoveRightPlayer();

    void MoveUp(Bot t);
    void MoveDown(Bot t);
    void MoveLeftBot();
    void MoveRight(Bot t);
    int  collition(int x,int y,int width,int height);
};

#endif