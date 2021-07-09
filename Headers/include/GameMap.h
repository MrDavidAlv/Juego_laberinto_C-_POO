#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
  {
  public:
    GameMap();

    //Creamos un apuntador
    MapCell* PlayerCell;
    MapCell cells[15][10]; //Arreglo bidimensional de 15x10

    //Esta funcion dibuja el mapa
    void Draw();

    //Esta función tiene las coordenadas de Player y actualiza el mapa
	  bool SetPlayerCell(int PlayerX, int PlayerY);
    bool isGameOver =false;
    void DrawIntro();
    void DrawVictory();

    //virtual ~GameMap();


  protected:
    void LoadMapFromFile();
  private:
  };
#endif
