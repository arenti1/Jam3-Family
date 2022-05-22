/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#ifndef MY_HPP_
#define MY_HPP_
#define BART_SIMPSON "../assets/Bart_simpson.jpg"

class Main
{
    public:
        short state = 0;
        short character[4];

        sf::Texture start_game_bg_t;
        sf::Sprite start_game_bg_s;

        Main();
};

#endif /* !MY_HPP_ */
