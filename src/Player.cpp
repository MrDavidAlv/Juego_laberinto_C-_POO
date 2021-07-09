#include "/home/my-robot/Documents/Desarrollo cursos Udemy/c++/Game_OOP/Headers/include/Player.h"
#include <iostream>

using namespace std;

Player::Player(){
  x=1;
  y=1;
}

void Player::CallInput()
{
  char UserInput = ' ';
  cin >> UserInput;
  switch (UserInput) {
    case 'w':
      lastY = y;
      y=y-1;
      cout << "Posición -->  "<<"x:"<<x<<" y:"<<y<< endl;
      break;
    case 's':
      lastY = y;
      y=y+1;
      cout << "Posición -->  "<<"x:"<<x<<" y:"<<y<< endl;
      break;
    case 'd':
      lastX = x;
      x=x+1;
      cout << "Posición -->  "<<"x:"<<x<<" y:"<<y<< endl;
      break;
    case 'a':
      lastX = x;
      x=x-1;
      cout << "Posición -->  "<<"x:"<<x<<" y:"<<y<< endl;
      break;
    default:
      cout << "ERROR: comando no disponible"<<endl;
      break;
  }
}


void Player::ResetToSefePosition(){
  x=lastX;
  y=lastY;
}

/**
//destructor
Player::~Player(){
  //
}
**/
