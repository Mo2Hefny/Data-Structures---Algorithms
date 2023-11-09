#ifndef _NODE_
#define _NODE_

struct Node
{
  Node *left, *right, *parent;
  int val;

  Node(int value = 0) {
    left = right = parent = nullptr;
    val = value;
  }

  Node(Node *prnt, int value)
  {
    left = right = nullptr;
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

#endif