/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#ifndef MY_HPP_
#define MY_HPP_

class Main
{
    public:
        short state = 0;
        short character[4];

        sf::Event event;

        sf::Texture start_game_bg_t;
        sf::Sprite start_game_bg_s;

        sf::Texture the_character_bg_t;
        sf::Sprite the_character_bg_s;

        Main();
};


void start_game(sf::RenderWindow *w, Main *m);
void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s);
void the_character(sf::RenderWindow *w, Main *m);

#endif /* !MY_HPP_ */
