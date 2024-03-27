# Binary Trees

[![Binary Tree](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)

## Overview
This is a documentation for a binary tree implementation in C. It covers various traversal methods (pre-order, in-order, post-order), as well as functions to measure the height, depth, size, and count the number of leaves in the tree.

## Table of Contents
- [Binary Trees](#Binary_trees)
- [Overview](##Overview)
- [Tasks](##Tasks)
- [How to Start](##How_to_start)
- [Example](##Example)
- [How to Contribute](##How_to_Contribute)
- [Getting Started](##Getting_Started)
- [Resources](##Resources)
- [Authors](##Authors)

<details>
  <summary>Tasks</summary>
## Tasks

| Task | Description | Prototype | Parameters | Returns |
|------|-------------|-----------|------------|---------|
| **1. New Node** | Write a function that creates a binary tree node. | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` | `parent`: Pointer to the parent node of the node to create. `value`: Value to put in the new node. | A pointer to the new node, or NULL on failure. |
| **2. Insert Left** | Write a function that inserts a node as the left-child of another node. | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` | `parent`: Pointer to the node to insert the left-child in. `value`: Value to store in the new node. | A pointer to the created node, or NULL on failure or if parent is NULL. |
| **3. Insert Right** | Write a function that inserts a node as the right-child of another node. | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` | `parent`: Pointer to the node to insert the right-child in. `value`: Value to store in the new node. | A pointer to the created node, or NULL on failure or if parent is NULL. |
| **4. Delete** | Write a function that deletes an entire binary tree. | `void binary_tree_delete(binary_tree_t *tree);` | `tree`: Pointer to the root node of the tree to delete. | Void. |
| **5. Is Leaf** | Write a function that checks if a node is a leaf. | `int binary_tree_is_leaf(const binary_tree_t *node);` | `node`: Pointer to the node to check. | 1 if node is a leaf, otherwise 0. If node is NULL, return 0. |
| **6. Is Root** | Write a function that checks if a given node is a root. | `int binary_tree_is_root(const binary_tree_t *node);` | `node`: Pointer to the node to check. | 1 if node is a root, otherwise 0. If node is NULL, return 0. |
| **7. Pre-order Traversal** | Write a function that goes through a binary tree using pre-order traversal. | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` | `tree`: Pointer to the root node of the tree to traverse. `func`: Pointer to a function to call for each node. | Void. If tree or func is NULL, do nothing. |
| **8. In-order Traversal** | Write a function that goes through a binary tree using in-order traversal. | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` | `tree`: Pointer to the root node of the tree to traverse. `func`: Pointer to a function to call for each node. | Void. If tree or func is NULL, do nothing. |
| **9. Post-order Traversal** | Write a function that goes through a binary tree using post-order traversal. | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` | `tree`: Pointer to the root node of the tree to traverse. `func`: Pointer to a function to call for each node. | Void. If tree or func is NULL, do nothing. |
| **10. Height** | Write a function that measures the height of a binary tree. | `size_t binary_tree_height(const binary_tree_t *tree);` | `tree`: Pointer to the root node of the tree to measure the height. | The height of the tree. If tree is NULL, return 0. |
| **11. Depth** | Write a function that measures the depth of a node in a binary tree. | `size_t binary_tree_depth(const binary_tree_t *tree);` | `tree`: Pointer to the node to measure the depth. | The depth of the node. If tree is NULL, return 0. |
| **12. Size** | Write a function that measures the size of a binary tree. | `size_t binary_tree_size(const binary_tree_t *tree);` | `tree`: Pointer to the root node of the tree to measure the size. | The size of the tree. If tree is NULL, the function must return 0. |
| **13. Leaves** | Write a function that counts the leaves in a binary tree. | `size_t binary_tree_leaves(const binary_tree_t *tree);` | `tree`: Pointer to the root node of the tree to count the number of leaves. | The number of leaves in the tree. If tree is NULL, the function must return 0. A NULL pointer is not a leaf. |
</details>
  
## How to Start
To use these functionalities, include the respective header file and link with the binary tree implementation in your C project.

## Example
```c
#include <stdio.h>
#include "binary_tree.h"

int main() {
    // Example usage of binary tree functions
    binary_tree_t *root = binary_tree_node(NULL, 10);
    binary_tree_insert_left(root, 5);
    binary_tree_insert_right(root, 15);

    // Additional operations...

    binary_tree_delete(root); // Cleanup
    return 0;
}
```
## How to Contribute
1. **Fork the Repository:** Start by forking the repository to your GitHub account.
2. **Clone your Fork:** Clone the forked repository to your local machine using `git clone`.
3. **Explore and Implement:** Review the source code and implement changes by adding new features to the existing ones or create a new one.
4. **Test your Implementation:** Test your codes without changing or affecting its functionality.
5. **Create Pull Request:** Submit a well-documented pull request with reasons for improvements.

## Getting Started

To contribute to the custom project, follow the example below:

```c
git clone https://github.com/your-username/binary_trees.git\
cd binary_trees
# Start coding and make it your own!
```
## Resources
- Binary tree
- Data Structure and Algorithms - Tree
- Tree Traversal
- Binary Search Tree
- Data structures: Binary Tree

## Authors
- [Aghaulor Gift](aghaulor.gift@gmail.com)
- [Eveshogweyore Alle](alleeveshogweyore@gmail.com)
