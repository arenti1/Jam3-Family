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
    if(m->simpson == 1)
        homero_quiz(w, m);
    else if(m->simpson == 2)
        marge_quiz(w, m);
    else if(m->simpson == 3)
        brat_quiz(w, m);
    else if(m->simpson == 4)
        lisa_quiz(w, m);
    else if(m->simpson == 5)
        magie_quiz(w, m);
}
/*
void homero_quiz(sf::RenderWindow *w, Main *m)
{    
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if(x >  && 
        x <  &&
        y >  &&
        y < )
  }
}


void marge_quiz(sf::RenderWindow *w, Main *m)
{    
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if(x >  && 
        x <  &&
        y >  &&
        y < )
    }
}

void brat_quiz(sf::RenderWindow *w, Main *m)
{    
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if(x >  && 
        x <  &&
        y >  &&
        y < )
    }
}

void lisa_quiz(sf::RenderWindow *w, Main *m)
{    
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if(x >  && 
        x <  &&
        y >  &&
        y < )
    }
}
*/
void magie_quiz(sf::RenderWindow *w, Main *m)
{    
    float x = sf::Mouse::getPosition(*w).x;
    float y = sf::Mouse::getPosition(*w).y;
    if(m->event.type == sf::Event::MouseButtonPressed){
        if(x > 20 && 
        x < 182 &&
        y > 345 &&
        y < 435) 
        m->answer = 1;
        else if(x > 310 &&
        x < 440 && 
        y > 350 &&
        y < 430)
        m->answer = 2;
    }
}