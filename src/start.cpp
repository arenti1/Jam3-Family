/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** start
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void start_game(sf::RenderWindow *w, Main *m)
{
    w->draw(m->start_game_bg_s);
}