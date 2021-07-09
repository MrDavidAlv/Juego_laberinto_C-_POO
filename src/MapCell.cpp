#include "/home/my-robot/Documents/Desarrollo cursos Udemy/c++/Game_OOP/Headers/include/MapCell.h"
#include <iostream>

MapCell::MapCell()
  {
    id = 0;
  }

bool MapCell::IsBlocked()
  {
    if(id=='1'){
      return true;
    }
    else{
      return false;
    }
  }

/**
MapCell::~MapCell()
  {
    //
  }
**/
