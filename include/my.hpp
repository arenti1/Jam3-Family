/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#ifndef MY_HPP_
#define MY_HPP_
#define BART_SIMPSON "../assets/Bart_simpson.jpg"

class Question
{
    public:
        std::string question;
        std::string A;
        std::string B;
        std::string C;
        std::string D;
        std::string E;
    Question(std::string q, std::string a, std::string b, std::string c, std::string d, std::string e) :
                question(q), A(a), B(b), C(c), D(d), E(e) {}
};

class Main
{
    public:
        short state = 0;
        short character[4];
        int simpson = 0;
        int score = 0;
        short answer = 0; // 1 = yes and 2 = no
        short family_member; //which member is chosen for the quiz
            //family_member = 0 - Homer
            //family_member = 0 - Marge
            //family_member = 0 - Bart
            //family_member = 0 - Lisa
            //family_member = 0 - Maggie

        char answers[5];

        sf::Event event;

        sf::Texture start_game_bg_t; //the background image texture of start screen
        sf::Sprite start_game_bg_s; //the background image texture of start screen


        std::vector<Question*> PersonalityQ;

        sf::Texture the_character_bg_t;
        sf::Sprite the_character_bg_s;

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
<<<<<<< HEAD
void the_character(sf::RenderWindow *w, Main *m);

=======
void start_screen_events(sf::RenderWindow *window, Main *m);
>>>>>>> 2f0d0e59a8ec8fd831aea02ce952af70ecdd573e
#endif /* !MY_HPP_ */
