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
        short state = 0; //state of the game 
        short family_member; //which member is chosen for the quiz
            //family_member = 0 - Homer
            //family_member = 0 - Marge
            //family_member = 0 - Bart
            //family_member = 0 - Lisa
            //family_member = 0 - Maggie

        sf::Event event;

        sf::Texture start_game_bg_t; //the background image texture of start screen
        sf::Sprite start_game_bg_s; //the background image texture of start screen

        Main();
};

//BUTTON CLASS
class Button
{
    public:
        int x;
        int y;
        int w;
        int h;
        
        Button(int xx, int yy, int ww, int hh) : x(xx), y(yy), w(ww), h(hh) {};
};


void start_game(sf::RenderWindow *w, Main *m);
void init_sprite(std::string str, sf::Texture *t, sf::Sprite *s);
void start_screen_events(sf::RenderWindow *window, Main *m);
#endif /* !MY_HPP_ */
