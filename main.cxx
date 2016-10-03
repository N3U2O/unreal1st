// Pointcloud rendering prototype
/*
See the following links:
========================
http://www.vtk.org/Wiki/VTK/Examples/Cxx
http://potree.org/

Compilation:
> clang++ -o pc.exe *.cxx
*/
#include <cstdio>

const unsigned int dim_C = 3;

typedef float coord_t;

typedef struct vec_t_ {
  coord_t c[dim_C];
} vec_t;

int main (void)
{
  printf ("Syntax is your choice in C\n");
}