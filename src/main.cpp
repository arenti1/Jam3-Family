/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

int main(int argc, char **argv)
{
    Main m;
    sf::RenderWindow window(sf::VideoMode(1247, 701), "Simpsons Quiz");

    while (window.isOpen()){
        if (m.state == 0){
            start_game(&window, &m);
        }
        else if (m.state == 1){
           the_character(&window, &m);
        }
        else if (m.state == 2){
            //quiz1();
        }
        else if (m.state == 3){
            //end_game1();
        }
        else if (m.state == 4){
            //end_game2();
        }
        window.display();
    }
    return 0; 
}