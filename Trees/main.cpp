#include "header.h"
#include "Binary_Tree.h"

int main() {
  Binary_Tree b1(1);
  Node * temp;
  temp = insertLeft(b1.root, 3);
  insertLeft(temp, 2);
  insertRight(temp, 0);
  temp = insertRight(b1.root, 5);
  insertRight(temp, 9);
  insertLeft(temp, 21);
  b1.printTree();
}