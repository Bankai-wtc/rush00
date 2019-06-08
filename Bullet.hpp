/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bngweny <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:56:25 by bngweny           #+#    #+#             */
/*   Updated: 2019/06/08 14:56:26 by bngweny          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_H
# define BULLET_CLASS_H
#include <string>

class Bullet{
    private:
    int x, y;

    public:
    Bullet();
    ~Bullet();
    Bullet(int , int);
    Bullet(const Bullet &copy);

    Bullet & operator=(Bullet const &rhs);

};

#endif
