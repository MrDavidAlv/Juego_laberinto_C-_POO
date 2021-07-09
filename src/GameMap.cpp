#include "/home/my-robot/Documents/Desarrollo cursos Udemy/c++/Game_OOP/Headers/include/GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
  {
    //Va a limpiar la información del apuntador
    PlayerCell = NULL;
    LoadMapFromFile();
    isGameOver = false;
  }

void GameMap::Draw(){
  if(isGameOver==true){
    cout<<"\n\n\n";
  }
  else{
   for(int i = 0; i<15; i++){
     for(int j = 0; j<10; j++){
       //CellMap[i][j];
       cout << cells[i][j].id;
     }
     cout << endl;
   }
 }
 }



bool GameMap::SetPlayerCell(int PlayerX, int PlayerY){
    if(cells[PlayerY][PlayerX].IsBlocked() == false)
    {
      if(cells[PlayerY][PlayerX].id=='$'){
        isGameOver=true;
        DrawVictory();
        return true;
      }
      else{
          if(PlayerCell != NULL)
          {
            PlayerCell->id=' ';
          }
          PlayerCell = &cells[PlayerY][PlayerX];
          PlayerCell->id = '*';
          //cout << "Coordenadas -->>>  "<<"X:"<<PlayerX<<" Y:"<<PlayerY<<endl;
      }
      return true;
    }
    else{
      return false;
    }
}


void GameMap::DrawIntro(){
  string line;
  ifstream MyFile("Intro.txt");
  if(MyFile.is_open()){

    while(getline(MyFile,line)){
      cout <<  line << endl;
    }
  }
  else {
    cout << "FATAL ERROR: INTRO  COULD NOT BE LOADED!"<<endl;
  }
}



void GameMap::DrawVictory(){
  string line;
  ifstream MyFile("Victory.txt");
  if(MyFile.is_open()){
    while(getline(MyFile,line)){
      cout <<  line << endl;
    }
  }
  else {
    cout << "FATAL ERROR: VICTORY  COULD NOT BE LOADED!"<<endl;
  }
}




void GameMap::LoadMapFromFile() {
  /** CON ESTA PARTE DEL CODIGO CREAS UN DOCUMENTO DEL MAPA
    ofstream FileCreated("Map.txt");
    if(FileCreated.is_open()){
      //codigo para crear mapa automatixamente
    }
    else{
      cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATE!"<<endl;
    }**/
    string line;
    int row = 0;

    ifstream MyFile("Map.txt");
    if(MyFile.is_open()){

      while(getline(MyFile,line)){
        for(int j=0; j<line.length(); j++){
          if(line[j] == '0')
            cells[row][j].id=' ';

          else{
            cells[row][j].id=line[j];
          }
        }
        row++;
      }

    }
    else {
      cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!"<<endl;
    }
}





/**
GameMap::~GameMap()
  {
    //
  }
**/
