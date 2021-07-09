#include <iostream>
//#include "Headers/include/Player.h" // incluyendo los archivos de encabezado Player.cpp/h
#include "src/Player.cpp"
#include "src/MapCell.cpp"
#include "src/GameMap.cpp"


using namespace std;


int main(){

  GameMap Map;
  Player Hero;

  //cout << "Inicia el juego!!!"<<endl;
  Map.DrawIntro();

  while(Map.isGameOver==false){
    //Aquí es el loop de nuestro juego
    Hero.CallInput();

    //Actualizado de informaci'on jugador heroe a mapa
    if(Map.SetPlayerCell(Hero.x,Hero.y)){
      //Aquí dibuja el mapa
      Map.Draw();
    }
    else{
      Hero.ResetToSefePosition();
      Map.Draw();
    }
  }

  return 0;
}
