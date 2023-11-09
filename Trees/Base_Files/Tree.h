#pragma once
#include <bits/stdc++.h>
#include "../header.h"

class Tree
{
protected:
  /**
   * @brief Measures the height of a tree.
   *
   * @param node Pointer to the node to measure its tree height.
   *
   * @returns The height of the tree starting at @node.
   */
  size_t getHeight(const Node *node);

  /**
   * @brief Fills the buffer with the tree.
   *
   * @param node Current node.
   * @param offset The offset of the value in the buffer.
   * @param depth The current level.
   * @param s The buffer.
   * 
   * @returns the offset for the parent node.
   */
  int recPrintTree(const Node *node, size_t offset, size_t depth, char **s);

  /**
   * @brief Swap the two nodes places.
   * 
   * @param node1 First node.
   * @param node2 Second node.
   */
  void swap(Node *node1, Node *node2);

  /**
   * @brief Copy source node to destination.
   *  
   * @param src First node.
   * @param dest Second node.
   */
  inline void copy(Node *src, Node *dest);
public:
  Node *root;
  Tree();
  Tree(int val);
  ~Tree();

  /**
   * @brief Deallocate all nodes before deconstructing the class.
   */
  void destructTree();

  /**
   * @brief Insert a new node to the tree.
   */
  virtual void InsertNode(int value);

  /**
   * @brief If found, delete a node from the tree.
   */
  virtual void DeleteNode(int value);

  /**
   * @brief Prints the tree in the console.
   */
  void printTree();
};