//archivo encabezados
#ifndef PLAYER_H
#define PLAYER_H

class Player
{
  public:
    Player();
    void CallInput();

    //Resetear las coordenadas x,y a la ultima Posición
    void ResetToSefePosition();

    int x, y; //Mala practica (deberia encapsular)
    int lastX, lastY;

  //virtual ~Player();  //Destructor
  protected:
    //

  private:
    //
};
#endif
