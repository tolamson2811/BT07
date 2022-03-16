#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#define END 70

void updatePos(int turtleStep, int rabbitStep, int& posOfRabbit, int& posOfTurtle, int& count);

void typeOfMovement(int turtleStep, int rabbitStep);

void step(int turtleTypeMovement[], int rabbitTypeMovement[], int& posOfRabbit, int& posOfTurtle, int& count) {
    int turtleStep = turtleTypeMovement[rand() % 10];
    int rabbitStep = rabbitTypeMovement[rand() % 10];
    updatePos(turtleStep, rabbitStep, posOfRabbit, posOfTurtle, count);
}

void updatePos(int turtleStep, int rabbitStep, int& posOfRabbit, int& posOfTurtle, int& count) {
    count++;
    cout << "Step " << count << endl;
    posOfRabbit += rabbitStep;
    posOfTurtle += turtleStep;
    if(posOfRabbit < 0) posOfRabbit = 0;
    if(posOfTurtle < 0) posOfTurtle = 0;
    typeOfMovement(turtleStep, rabbitStep);
    cout << "Position of Turtle: " << posOfTurtle << endl;
    cout << "Position of Rabbit: " << posOfRabbit << endl;
    if(posOfTurtle >= 70) cout << "Turtle is the winner!\n";
    else if(posOfRabbit >= 70) cout << "Rabbit is the winner\n";
}

void typeOfMovement(int turtleStep, int rabbitStep) {
    cout << "Turtle ";
    switch(turtleStep) {
        case 3:
            cout << "Tien dai 3\n";
            break;
        case 1:
            cout << "Tien ngan 1\n";
            break;
        case -6:
            cout << "Truot 6\n";
            break;
    }
    cout << "Rabbit ";
    switch(rabbitStep) {
        case 0:
            cout << "Ngu\n";
            break;
        case 9:
            cout << "Tien dai 9\n";
            break;
        case -12:
            cout << "Truot dai 12\n";
            break;
        case 1:
            cout << "Tien ngan 1\n";
            break;
        case -2:
            cout << "Truot ngan 2\n";
            break;
    }
}

int main() {
    srand(time(NULL));
    int count = 0;
    int posOfRabbit = 0;
    int posOfTurtle = 0;
    int turtleTypeMovement[] = {3, 3, 3, 3, 3, 1, 1, 1, -6, -6};
    int rabbitTypeMovement[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    cout << "The race begins!" << endl;
    cout << "Position of Turtle: " << posOfTurtle << endl;
    cout << "Position of Rabbit: " << posOfRabbit << endl;
    while(posOfRabbit < 70 && posOfTurtle < 70) {
        step(turtleTypeMovement, rabbitTypeMovement, posOfRabbit, posOfTurtle, count);
    }
    return 0;
}