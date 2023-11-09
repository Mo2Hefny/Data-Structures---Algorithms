#pragma once
#include "Tree.h"

class Binary_Tree : public Tree
{

public:
  Binary_Tree(int val);

  /**
   * @brief Delete all nodes with the given value.
   * 
   * @param value Value of nodes to be deleted.
   * 
   * @returns True, if any node is deleted. False otherwise.
   */
  bool deleteNode(int value);

  /**
   * @brief Delete the given node.
   * 
   * @param node Pointer to the node getting deleted.
   * 
   * @returns True, if any node is deleted. False otherwise.
   */
  bool deleteNode(Node *node);
  
};