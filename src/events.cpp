/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

int event_manager (sf::RenderWindow window, sf::Event event, sf::Vector2f button_pos)
{
    while (window.pollEvent(event)) {
        switch (event.type) {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::MouseButtonPressed:
                if (event.mouseButton.button == sf::Mouse::Right &&
                    (event.mouseButton.x >= button_pos.x && event.mouseButton.x <= button_pos.x + 150)
                    && (event.mouseButton.y >= button_pos.y && event.mouseButton.y <= button_pos.y + 30)) {
                    // Do something
                }
                break;
            default:
                break;
        }
    }
}