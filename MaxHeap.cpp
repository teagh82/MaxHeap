#include "MaxHeap.h"
#include <stdlib.h>

void main()
{
  MaxHeap heap;

  heap.insert( 10 );
  heap.display();
  heap.insert( 40 );
  heap.display();
  heap.insert( 30 );
  heap.display();
  heap.insert( 5 );
  heap.display();
  heap.insert( 12 );
  heap.display();
  heap.insert( 6 );
  heap.display();
  heap.insert( 15 );
  heap.display();
  heap.insert( 9 );
  heap.display();
  heap.insert( 60 );
  heap.display();

  system("pause");
}
