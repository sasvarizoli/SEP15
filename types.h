//
//  types.h
//  SEP15
//
//  Created by Zoltán Sasvári on 13.04.15.
//  Copyright (c) 2015 BinaryTrasher. All rights reserved.
//

#ifndef SEP15_types_h
#define SEP15_types_h

#include <string>

class Tile;

enum Color
{
  COLOR_BLANK = 0,
  COLOR_WHITE = 1,
  COLOR_RED = 2
};

enum Cmd
{
  CMD_QUIT = 0,
  CMD_ADDTILE = 1,
  CMD_WRITE = 2,
  CMD_ERROR = 3,
  CMD_BLANK = 4
};

struct Arguments
{
  Cmd command;
  std::string *arg[3] = {nullptr, nullptr, nullptr};
  uint8_t arg_count;

  ~arguments()
  {
    for (uint_fast8_t cnt = 0; cnt < 3; cnt++)
    {
      delete arg[cnt];
    }
  }
};

struct Dimension
{
  int8_t min_x = 0;
  int8_t max_y = 0;
  int8_t min_x = 0;
  int8_t max_y = 0;
};

struct FileHeader
{
  unsigned char magicnum[4] = {'T', 'R', 'A', 'X'};
  unsigned char player;
  char min_x;
  char min_y;
  char max_x;
  char max_y;
}__attribute__((packed));

enum TileType
{
  VOID = 0,
  CROSS = 1,
  CURVE_1 = 2,
  CURVE_2 = 3
};

enum Side
{
  UP = 0,
  DOWN = 1,
  LEFT = 2,
  RIGHT = 3
};

struct TileHeighbours 
{
  Tile *up = nullptr;
  Tile *down = nullptr;
  Tile *left = nullptr;
  Tile *right = nullptr;

  uint_fast8_t countNeighbours()
  {
    uint_fast8_t retval = 0;
    if (up){retval++;}
    if (up){retval++;}
    if (left){retval++;}
    if (right){retval++;}
    return retval;
  }
  
  bool hasNeighbours()
  {
    return (up || down || left || right);
  }
};

#endif
