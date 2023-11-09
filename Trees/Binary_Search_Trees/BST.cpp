#include "BST.h"

BST::BST(int value) : Tree(value)
{
}

/**
 * @brief Get min element of a given subtree.
 *
 * @param node Root of the subtree.
 *
 * @returns Node having the minimum value.
 */
Node *BST::getMinNode(Node *node)
{
  if (!node)  return nullptr;
  if (!node->left) return node;
  return getMinNode(node->left);
}

/**
 * @brief Get max element of a given subtree.
 *
 * @param node Root of the subtree.
 *
 * @returns Node having the maximum value.
 */
Node *BST::getMaxNode(Node *node)
{
  if (!node)  return nullptr;
  if (!node->right) return node;
  return getMaxNode(node->right);
}

/**
 * @brief Insert a new node.
 *
 * @param value Value of the new node.
 *
 * @returns True, if inserted. False if node already exists.
 */
bool BST::insertNode(int value)
{
  if (!root)
  {
    root = new Node(value);
    return true;
  }

  Node *temp = root;
  while (temp)
  {
    // Go to left subtree if val < node->val
    if (value < temp->val)
    {
      if (temp->left == nullptr)
      {
        temp->left = new Node(temp, value);
        return true;
      }
      temp = temp->left;
    }
    // Go to right subtree if val > node->val
    else if (value > temp->val)
    {
      if (temp->right == nullptr)
      {
        temp->right = new Node(temp, value);
        return true;
      }
      temp = temp->right;
    }
    else
      return false;
  }
  return false;
}

/**
 * @brief Delete all nodes with the given value.
 *
 * @param value Value of nodes to be deleted.
 *
 * @returns True, if any node is deleted. False otherwise.
 */
bool BST::deleteNode(int value)
{
  if (!root)
    return false;

  Node *temp = root;
  while (temp)
  {
    // Go to left subtree if val < node->val
    if (value < temp->val)
      temp = temp->left;
    // Go to right subtree if val >= node->val
    else if (value > temp->val)
      temp = temp->right;
    else
      return deleteNode(temp);
  }
  return false;
}

/**
 * @brief Delete the given node.
 *
 * @param node Pointer to the node getting deleted.
 *
 * @returns True, if any node is deleted. False otherwise.
 */
bool BST::deleteNode(Node *node)
{
  if (!node)
    return false;
  if (node == root) root = nullptr;
  // Node is leaf
  if (!node->left && !node->right)
  {
    Node *parent = node->parent;
    if (parent && parent->left == node)
      parent->left = nullptr;
    if (parent && parent->right == node)
      parent->right = nullptr;
    delete node;
    return true;
  }

  // Node has one child
  if (!node->left || !node->right)
  {
    Node *child = (!node->left) ? node->right : node->left;
    Node *parent = node->parent;
    child->parent = parent;
    if (parent && parent->left == node)
      parent->left = child;
    else if (parent)
      parent->right = child;
    else
      root = child;
    delete node;
    return true;
  }

  // Has 2 subtrees.
  Node *replacement = getMaxNode(node->left);
  swap(replacement, node);
  if (!root)  root = replacement;
  return deleteNode(node);
}