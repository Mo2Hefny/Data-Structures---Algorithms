#include "header.h"
#include "Trees.h"

int main() {
  BST bst1(4);
  bst1.insertNode(2);
  bst1.insertNode(1);
  bst1.insertNode(3);
  bst1.insertNode(6);
  bst1.insertNode(5);
  bst1.insertNode(7);
  bst1.printTree();
  bst1.deleteNode(3);
  bst1.printTree();
  bst1.insertNode(3);
  bst1.deleteNode(2);
  bst1.printTree();
  bst1.deleteNode(1);
  bst1.deleteNode(3);
  bst1.insertNode(2);
  bst1.insertNode(1);
  bst1.insertNode(3);
  bst1.deleteNode(4);
  bst1.printTree();
}