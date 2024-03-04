// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include <iostream>
#include <windows.h>

#include "Vector.h"
#include "ScreenWindow.h"
#include "World.h"


using namespace sf;

int main(){
    ScreenWindow window;

    World world(&window);
    Body body();
    
    world.addBody(Body());



    const float fps = 100;
    const float dt = 1 / fps;
    float accumulator = 0;
    // In units seconds 
    float frameStart = GetCurrentTime();
    // main loop 
    while (true) {
        const float currentTime = GetCurrentTime();
        // Store the time elapsed since the last frame began 
        accumulator += currentTime - frameStart;

        // Record the starting of this frame 
        frameStart = currentTime;
        // Avoid spiral of death and clamp dt, thus clamping how many times the UpdatePhysics can be called in a single game loop. 
        if (accumulator > 0.2f)
            accumulator = 0.2f;

        while (accumulator > dt) {
            //UpdatePhysics(dt)
            accumulator -= dt;
        }

        //Render
        window.RenderWindow();
      
        /*
         const float alpha = accumulator / dt;
          RenderGame( alpha )
        void RenderGame( float alpha )
          for shape in game do
            // calculate an interpolated transform for rendering 
            Transform i = shape.previous * alpha + shape.current * (1.0f - alpha)
            shape.previous = shape.current
            shape.Render( i )




        The next thing to fix is quite minor in comparison to the spiral of death. This loop is taking dt chunks from the accumulator until the accumulator is smaller than dt. This is fun, but there's still a little bit of remaining time left in the accumulator. This poses a problem.

        Assume the accumulator is left with 1/5th of a dt chunk every frame. On the sixth frame the accumulator will have enough remaining time to perform one more physics update than all the other frames. This will result in one frame every second or so performing a slightly larger discrete jump in time, and might be very noticeable in your game.

        To solve this, the use of linear interpolation is required. If this sounds scary, don't worry - the implementation will be shown. If you want to understand the implementation there are many resources online for linear interpolation.

        // linear interpolation for a from 0 to 1 
        // from t1 to t2 
        t1 * a + t2(1.0f - a)
        Using this we can interpolate (approximate) where we might be between two different time intervals. This can be used to render the state of a game in between two different physics updates.

        With linear interpolation, the rendering of an engine can run at a different pace than the physics engine. This allows a graceful handling of the leftover accumulator from the physics updates.
    */
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
