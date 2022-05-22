/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** personalityQuiz
*/

#include <iostream>
#include <sstream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void draw_Text(sf::RenderWindow *window, std::string str, int x, int y)
{
    sf::Font font;
    if (!font.loadFromFile("./assests/arial.ttf"))
        std::cout << "Font couldn't be loaded\n";

    std::stringstream t;
    t << str << std::endl;

    sf::Text text;
    text.setFont(font);
    text.setString(t.str());
    text.setCharacterSize(60);
    text.setFillColor(sf::Color::White);

    text.setPosition(x, y);
    window->draw(text);
}

void display_question(sf::RenderWindow *w, Question *Q, Main *m)
{
    
}

void PersonalityQuiz(sf::RenderWindow *w, Main *m)
{
    for (auto i = m->PersonalityQ.begin(); i != m->PersonalityQ.end(); i++){
        display_question(w, (*i), m);
    }
}