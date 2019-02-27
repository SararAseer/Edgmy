#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"

int main() {
  screen s;
  struct matrix *edges;
  edges = new_matrix(4, 4);
  add_point(edges, 0,0,0);
  print_matrix(edges);
  free_matrix( edges );
}  
