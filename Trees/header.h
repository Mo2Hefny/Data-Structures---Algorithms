#pragma once
#include "Tree.h"

/**
 * @brief Inserts a node as the left-child of another node.
 * @param parent pointer to the parent node of the node to create.
 * @param val value to put in the new node.
 *
 * @returns NULL if the parent is NULL, pointer to the new node otherwise.
 */
Node *insertLeft(Node *parent, int val);

/**
 * @brief Inserts a node as the right-child of another node.
 * @param parent pointer to the parent node of the node to create.
 * @param val value to put in the new node.
 *
 * @returns NULL if the parent is NULL, pointer to the new node otherwise.
 */
Node *insertRight(Node *parent, int val);