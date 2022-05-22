/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"

void init_mainClass(Main *m)
{
    Question Q1("What's been the greatest achievement of your life?",
                "A. Handling Challenges",
                "B. Securing Awards",
                "C. Maintaining a happy family",
                "D. Pursuit of knowledge",
                "E. Following your bliss");
    Question Q2("What describes you best?",
                "A. The ultimate realist",
                "B. Ready to try anything once",
                "C. An inspiration to others",
                "D. A natural leader",
                "E. A huge sense of duty");
    Question Q3("What's your hobby?",
                "A. Blogging",
                "B. Traveling",
                "C. Sports",
                "D. Music",
                "E. Reading");
    Question Q4("What's your biggest regret?",
                "A. Working too much",
                "B. Not spending enough time with family",
                "C. Worryinh too much",
                "D. Taking life too seriously",
                "E. Not following your passion");
    Question Q5("What's your greates fear?",
                "Fear of time",
                "Fear of failure",
                "Fear of being judged",
                "Fear of who you really are",
                "Fear of loss");

    m->PersonalityQ.push_back(&Q1);
    m->PersonalityQ.push_back(&Q2);
    m->PersonalityQ.push_back(&Q3);
    m->PersonalityQ.push_back(&Q4);
    m->PersonalityQ.push_back(&Q5);
}

int main(int argc, char **argv)
{
    Main m;

    sf::RenderWindow window(sf::VideoMode(1247, 701), "Simpsons Quiz");

    while (window.isOpen()){
        if (m.state == 0){
            start_game(&window, &m);
        }
        else if (m.state == 1){
         //  the_character(&window, &m);
        }
        else if (m.state == 2){
            //quiz2();
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