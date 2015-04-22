//------------------------------------------------------------------------------
// main.cpp
//
// Group: Group 43, study assistant: Max Mustertutor
//
// Authors: Super Student 1 (0800001)
// Super Student 2 (0800002)
// Super Student 3 (0800003)
// Super Student 4 (0800004)
//------------------------------------------------------------------------------
//

#include <iostream>
#include <string.h>
#include "Game.h"
#include "Position.h"
#include "types.h"
#include "Tile.h"

using namespace std;
//------------------------------------------------------------------------------
// main function
// entry point for execution
// @param argc argument count
// @param **argv argument values
// @return return value for the OS
//
int main(int argc, char **argv)
{
  string *filename = nullptr;
  //chack for arguments
  if (argc > 3) {
    cout << "Usage: <" << string(argv[0]) << ">" << endl;
    return 2;
  }
  if (argc > 1 && !strcmp(argv[1], "-g")) {
    if (argv[2] == nullptr) {
      //error
    } else {
      filename = new std::string(argv[2]);
    }
  }

  Game *trax = new Game(filename);

  //testtiles
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(0,0), trax->getActivePlayer(), trax)) << endl;

  //curve
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(2,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(-1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(-2,0), trax->getActivePlayer(), trax)) << endl;

  //line
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(-1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(2,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(2,1), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(2,2), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(3,2), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(4,2), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(5,2), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(6,2), trax->getActivePlayer(), trax)) << endl;
  //1


  //line2
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(2,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(3,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(4,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(5,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(6,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(7,0), trax->getActivePlayer(), trax)) << endl;
  //2

  //doubleloop
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(-1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(0,-1), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(1,-1), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(1,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_2, new Position(2,0), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(2,1), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CROSS, new Position(1,1), trax->getActivePlayer(), trax)) << endl;
//  cout << (int)trax->addTile(new Tile(CURVE_1, new Position(1,2), trax->getActivePlayer(), trax)) << endl;


  try {
    trax->run();
  } catch (std::bad_alloc &ba) {
    delete trax;
    cout << "Error: Out of Memory!" << endl;
    return -1;
  }
  delete trax;
  return 0;
}
