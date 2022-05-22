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
    init_sprite("./assets/simpsons_background.png", &the_character_bg_t, &the_character_bg_s);
    init_sprite("./assets/quiz_bg.png", &personalityQuiz_bg_t, &personalityQuiz_bg_s);

    init_sprite("./assets/Homer.png", &Homer_t, &Homer_s);
    init_sprite("./assets/Marge.jpg", &Marge_t, &Marge_s);
    init_sprite("./assets/Bart.jpg", &Bart_t, &Bart_s);
    init_sprite("./assets/Lisa.jpg", &Lisa_t, &Lisa_s);
    init_sprite("./assets/Maggie.jpg", &Maggie_t, &Maggie_s);
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

