#ifndef _BINARY_SEARCH_TREE_
#define _BINARY_SEARCH_TREE_

#include "../Base_Files/Tree.h"

class BST : public Tree
{
protected:
  /**
   * @brief Get min element of a given subtree.
   * 
   * @param node Root of the subtree.
   * 
   * @returns Node having the minimum value.
   */
  Node *getMinNode(Node *node);

  /**
   * @brief Get max element of a given subtree.
   * 
   * @param node Root of the subtree.
   * 
   * @returns Node having the maximum value.
   */
  Node *getMaxNode(Node *node);
public:
  BST(int val);

  /**
   * @brief Insert a new node.
   * 
   * @param value Value of the new node.
   * 
   * @returns True, if inserted. False if node already exists.
   */
  bool insertNode(int val);

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

#endif