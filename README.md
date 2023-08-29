# Binary Tree Project

This project implements various functions related to binary trees in C, adhering to the specified requirements.

## Table of Contents

- [Introduction](#introduction)
- [Files](#files)
- [Function Descriptions](#function-descriptions)
- [Usage](#usage)
- [Compilation](#compilation)
- [Author](#author)

## Introduction

This project contains C functions that deal with basic binary tree operations. The functions are implemented according to the specified requirements and use the provided binary tree data structure.

## Files

The project consists of the following files:

- `binary_trees.h`: Header file containing function prototypes and data structures.
- `0-binary_tree_node.c`: Creates a binary tree node.
- `1-binary_tree_insert_left.c`: Inserts a node as the left child of another node.
- `2-binary_tree_insert_right.c`: Inserts a node as the right child of another node.
- ...
- `13-binary_tree_size.c`: Measures the size of a binary tree.
- `14-binary_tree_leaves.c`: Counts the leaves in a binary tree.
- `15-binary_tree_nodes.c`: Counts the nodes with at least 1 child in a binary tree.
- `16-binary_tree_balance.c`: Measures the balance factor of a binary tree.
- `17-binary_tree_is_full.c`: Checks if a binary tree is full.
- `18-binary_tree_is_perfect.c`: Checks if a binary tree is perfect.
- `19-binary_tree_sibling.c`: Finds the sibling of a node.
- `20-binary_tree_uncle.c`: Finds the uncle of a node.
- `21-binary_trees_ancestor.c`: Finds the lowest common ancestor of two nodes.
- `22-binary_tree_levelorder.c`: Traverses a binary tree using level-order traversal.
- `23-binary_tree_is_complete.c`: Checks if a binary tree is complete.
- `README.md`: Project overview and instructions.

## Function Descriptions

Detailed descriptions of each function can be found in the corresponding source files.

## Usage

To use these functions, you need to include the `binary_trees.h` header in your source file and compile your program with the provided files. You can then call the functions as needed to perform various binary tree operations.

## Compilation

To compile the provided examples, you can use the following command:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree_example

