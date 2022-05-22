/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** initialize
*/

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

Main::Main()
{
    init_sprite("./assets/start_bg.jpg", &start_game_bg_t, &start_game_bg_s);
}

void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s)
{
    sf::Image image;
    if (!image.loadFromFile(str.c_str())){
        std::cout << "Cannot load Image\n";
    }
    if (!t->loadFromImage(image)){
        std::cout << "error loading from image\n";
    }
    s->setTexture(*t);
}

