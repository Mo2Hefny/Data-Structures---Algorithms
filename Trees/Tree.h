#pragma once
#include <bits/stdc++.h>

struct Node
{
  Node *left, *right, *parent;
  int val;
  Node()
  {
    left = right = parent = NULL;
    val = 0;
  }
  Node(Node *prnt, int value)
  {
    left = right = NULL;
    parent = prnt;
    val = value;
  }
};

struct Node_C : Node
{
  bool color;
  Node_C()
  {
    color = true; // RED NODE
  }
  Node_C(Node *prnt, int value) : Node(prnt, value)
  {
    color = true;
  }
};

class Tree
{
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
   * @returns the offset for the parent node.
   */
  int recPrintTree(const Node *node, size_t offset, size_t depth, char **s);

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