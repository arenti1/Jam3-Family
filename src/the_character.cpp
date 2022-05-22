/*
** EPITECH PROJECT, 2022
** character
** File description:
** the simpson character that we are asking about
*/


#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void the_character(sf::RenderWindow *w, Main *m)
{
    w->draw(m->the_character_bg_s);
    character_event(w, m);
}

void character_event(sf::RenderWindow *w, Main *m)
{   
        while(w->pollEvent(m->event)){
        character_quiz(w, m);
        }
}

void character_quiz(sf::RenderWindow *w, Main *m)
{
    
}