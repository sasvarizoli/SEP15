//
//  Game.h
//  ass1
//
//  Created by Zoltán Sasvári on 15.03.15.
//  Copyright (c) 2015 G-TEAM. All rights reserved.
//

#ifndef __ass1__Game__
#define __ass1__Game__

#include "types.h"
#include <vector>
#include <string>

class Tile;
class Position;

class Game {
  friend class cmd_AddTile;
  friend class cmd_Write;
protected:
  Color Activeplayer;
  bool Running;
  std::string *filename;
  bool constant_write;
  std::vector<Tile*> tiles;
  std::fstream *outputfile;

public:
  Game(std::string *filename);
  ~Game();
  short addTile(Tile* input);
  void run();
  void setRunning(bool input);
  void togglePlayer();
  Color getActivePlayer();
  dimension *getFieldDimension();
};

#endif /* defined(__ass1__Game__) */
