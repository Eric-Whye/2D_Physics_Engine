// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include <iostream>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(640, 480), "SFML works!");

    CircleShape hoop;
    hoop.setRadius(50.f);
    hoop.setFillColor(Color::Blue);
    hoop.setOutlineThickness(2);
    hoop.setOutlineColor(Color::Yellow);


    CircleShape ball;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        //Update
        window.clear(Color::White);
        



        //Draw
        window.draw(hoop);
        window.display();
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file