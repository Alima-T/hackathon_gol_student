#pragma warning(push, 0)
#include <stdint.h>
#include <stdlib.h>

#define WIN32_LEAN_AND_MEAN
#define UNICODE
#include <windows.h>
#pragma(pop)

#pragma warning(disable :5045)

typedef struct
{
  uint32_t x;
  uint32_t y;
} start_coord_t;

static int loops_counter = 0;

uint8_t *simulate_life(uint32_t grid_dim, start_coord_t *initial_points, uint32_t initial_point_count)
{
  static uint8_t map[4096];
  uint8_t *buffer = calloc((grid_dim*grid_dim), sizeof(uint8_t));
  if(!upgrated_life)
   exit(1);

  int count = 0;
  for (int dx = -1; dx <= 1; dx++)
  {
    for (int dy = -1; dy <= 1; dy++)
    {
      if(dx == 0 && dy == 0) 
        continue;
      int nx = x + dx;
      int ny = y + dy;
      if (nx >= 0 && nx < grid_dim) || (ny >= 0 && ny < grid_dim)
      {
        if (char_grid[nx][ny] == '0') 
          count++;
      }
    }
  }
    return count;
  //TODO: Implement this function!
  return upgrated_life;
}

int count_neighbour (uint32_t char_grid[grid_dim][grid_dim], int x, int y)
{
  int count = 0;
  for (int dx = -1; dx <= 1; dx++)
  {
    for (int dy = -1; dy <= 1; dy++)
    {
      if(dx == 0 && dy == 0) 
        continue;
      int nx = x + dx;
      int ny = y + dy;
      if (nx >= 0 && nx < grid_dim) || (ny >= 0 && ny < grid_dim)
      {
        if (char_grid[nx][ny] == '0') 
          count++;
      }
    }
  }
  return count;
}

uint8_t *get_next_generation(uint8_t[2048][2048], uint8_t grid_dim, uint8_t *buffer)
{
  int counte = 0;
  int cordi = 0; //to convert 2D into 1D buffer index
  for (int i = 0; i < grid_dim; i++)
  {
    for (int j = 0; j < grid_dim; j++)
    {
      cordi = (i + j) + (i * (grid_dim - 1)) + grid_dim;
      counter = count_neighbour(map, grid_dim, i, j);
      if (map[i][j] == 0)
      {
        if(counter == 3)
          buffer[cordi] = 1;
        else
          buffer[cordi] = 0;
      }
      else
      {
      if(counter == 2 || counter == 3)
        buffer[cordi] = 1;
      else
        buffer[cordi] = 0;
      }
    }
  }
  return buffer;
}
