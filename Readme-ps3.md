# PS3a: N-Body Simulation (Static)

## Contact
Name:Jason Ossai
Section:201 
Time to Complete: 2 hrs

## Description
The program simulates and displays the movements of celestial bodies in an N-body simulation, showcasing their dynamic interactions under gravitational forces using SFML. It visualizes the trajectories, velocities, and accelerations of the bodies in real-time, creating an engaging and accurate depiction of orbital mechanics and celestial dynamics.

### Features
The major decisions revolved around designing robust error handling and implementing efficient texture management for celestial bodies. Comprehensive tests were created to ensure the program could gracefully handle scenarios such as missing or corrupted texture files. Each celestial body was assigned its own unique texture, emphasizing realism and variety in the simulation. This approach enhanced visual clarity and user engagement while modularizing texture loading to streamline performance and maintainability.

Implemented two main classes: Universe to manage all celestial bodies and Celestial Body to represent each individual body.
The simulation reads a static universe from a text file and displays it using a graphical interface.
The program outputs the updated positions of the bodies based on the mutual gravitational forces acting upon them.

### Memory
There was no dynamic memory allocation used in the implementation, so managing object lifetimes was straightforward and entirely stack-based. All objects, including celestial bodies and textures, were created and destroyed within their respective scopes, ensuring efficient memory management without the need for smart pointers or manual deallocation. This approach minimized complexity and potential memory-related issues while maintaining clean and predictable code behavior

### Changes
I worked on my Unit tests to make sure they all pass the autograder, in doing so I made sure I declared each class in it's scope, and gave every class a corresponding member. Hopefully it runs on auto grader
I also made sure I added 'Werror' to my make file when compiling. Test Failed: '-Werror' not found in 'g++ -std=c++11 -Wall -Wextra -pedantic -g -c main.cpp -o main.o' : -Werror flag is required when compiling
Fixed some of the lint issues


### Extra Credit
None Attempted


Source Files Created:
Main.cpp
celestialbody cpp nd hpp
universe cpp and hpp
test.cpp
planets.txt
makefile
planet drawings

Statement of Functionality
The program is partially functional and successfully simulates the motion of particles based on gravitational forces. However, it does not implement any extra credit features.

## Acknowledgements
List all sources of help including the instructor or TAs, classmates, and web pages.
If you used images or other resources than the ones provided, list them here.
I just used the SFML library

