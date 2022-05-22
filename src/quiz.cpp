/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "../include/my.hpp"
#include <iostream>
#include <string>

int guessed;
int total;

class Question {

private:
    sf::Text _question;
	std::string _questionText;
	sf::Text _a1;
	std::string _a1Text;
	sf::Text _a2;
	std::string _a2Text;
	sf::Text _a3;
	std::string _a3Text;
	sf::Text _a4;
	std::string _a4Text;
	sf::Text _correctAnswer;
	std::string _correctAnswerText;

    int _questionCounter = 0;
	int _correctAnswerCounter = 0;

public:
    void setValues(string, string,
                   string, string,
                   string, int, int);
    void quiz();
};

int quiz(Main m)
{
    std::ifstream inFile;

    switch (m.character)
		{
		case 0:
			inFile.open("../questions/lisa.txt");
			break;
		case 1:
			inFile.open("");
			break;
		}
}