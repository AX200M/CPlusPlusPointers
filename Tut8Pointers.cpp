using namespace std;
#include <iostream>

int main()
{
    //Setting Variables as floats
    float player1Health =  15.0f;
    float player2Health = 25.0f;
    float vehicleSpeed = 50.0f;
    float playerSpeed = 15.0f;

    //Setting the pointers that point to the variable above
    //Asterisk Is used in C++ to define a pointer, without a asterisk it will print the memory address and wont point to the desired value
    float* currentHealthPointer = &player1Health;
    float* playerSpeedPointer = &playerSpeed;

    //Redefinding Pointer to another variable 
    playerSpeedPointer = &vehicleSpeed;
    //Redefining Pointer to a certain value
    *currentHealthPointer = 5.0f;
    *playerSpeedPointer = 25.0f;

    //Adding the & opperand allows to print the memory address of the variable 
    cout << "The address of player1Health is: " << &player1Health << endl;
    cout << "The address of player2Health is: " << &player2Health << endl;
    //Checking the memory address of the currentHealth pointer to see if it matches with player1Health 
    cout << &currentHealthPointer << endl;

    cout << *playerSpeedPointer << endl;
}
