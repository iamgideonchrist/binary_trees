# 0x1D. C - Binary trees

This project was done during **ALX SE Studies** at **ALX School**. The end game is to know:
* What a binary tree is.
* The difference between a binary tree and a Binary Search Tree.
* The possible gain in terms of time complexity compared to linked lists.
* The depth, height, the size of a binary tree.
* The different traversal methods to go through a binary tree.
* What a complete, full, perfect, balanced binary tree is.

## Requirements
### General
* Used editors: `vi`, `vim`, and `emacs`
* All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All files end with a new line
* A `README.md` file at the root of the folder of the project
* Used `Betty` style comment for all codes. It is checked using `betty-style.pl`and `betty-doc.pl`
* No global variable used
* No more than 5 functions per file
* Standard library allowed
* The `main.c` files are examples and can be used to test the functions
* The prototypes of all functions are included in the header file called `binary_trees.h`

## Files

| Filename | Description |
| -------- | ----------- |
| `binary_trees.h` | Header File |
| `0-binary_tree_node.c` | A function that creates a binary tree node |
| `1-binary_tree_insert_left.c` | A function that inserts a node as the left-child of another node |
| `2-binary_tree_insert_right.c` | A function that inserts a node as the right-child of another node |
| `3-binary_tree_delete.c` | A function that deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | A function that checks if a node is a leaf |
| `5-binary_tree_is_root.c` | A function that checks if a given node is a root |
| `6-binary_tree_preorder.c` | A function that goes through a binary tree using pre-order traversal |
| `7-binary_tree_inorder.c` | A function that goes through a binary tree using in-order traversal |
| `8-binary_tree_postorder.c` | A function that goes through a binary tree using post-order traversal |
| `9-binary_tree_height.c` | A function that measures the height of a binary tree |
| `10-binary_tree_depth.c` | A function that measures the depth of a node in a binary tree |
| `11-binary_tree_size.c` | A function that measures the size of a binary tree |
| `12-binary_tree_leaves.c` | A function that counts the leaves in a binary tree |
| `13-binary_tree_nodes.c` | A function that counts the nodes with at least 1 child in a binary tree |
| `14-binary_tree_balance.c` | A function that measures the balance factor of a binary tree |
| `15-binary_tree_is_full.c` | A function that checks if a binary tree is full |
| `16-binary_tree_is_perfect.c` | A function that checks if a binary tree is perfect |
| `17-binary_tree_sibling.c` | A function that finds the sibling of a node |
| `18-binary_tree_uncle.c` | A function that finds the uncle of a node |
| `100-binary_trees_ancestor.c` | A function that finds the lowest common ancestor of two nodes |
| `101-binary_tree_levelorder.c` | A function that goes through a binary tree using level-order traversal |
| `102-binary_tree_is_complete.c` | A function that checks if a binary tree is complete |
| `103-binary_tree_rotate_left.c` | A function that performs a left-rotation on a binary tree |
| `104-binary_tree_rotate_right.c` | A function that performs a right-rotation on a binary tree |
| `110-binary_tree_is_bst.c` | A function that checks if a binary tree is a valid `Binary Search Tree` |
| `111-bst_insert.c, 0-binary_tree_node.c` | A function that inserts a value in a Binary Search Tree |
| `112-array_to_bst.c, 111-bst_insert.c, 0-binary_tree_node.c` | A function that builds a Binary Search Tree from an array |
| `113-bst_search.c` | A function that searches for a value in a Binary Search Tree |
| `114-bst_remove.c` | A function that removes a node from a Binary Search Tree |
| `115-O` | Average time complexities of those operations on a Binary Search Tree |
| `120-binary_tree_is_avl.c` | A function that checks if a binary tree is a valid `AVL Tree` |
| `121-avl_insert.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 0-binary_tree_node.c` | A function that inserts a value in an AVL Tree |
| `122-array_to_avl.c, 121-avl_insert.c, 0-binary_tree_node.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c, 14-binary_tree_balance.c` | A function that builds an AVL tree from an array |
| `123-avl_remove.c, 14-binary_tree_balance.c, 103-binary_tree_rotate_left.c, 104-binary_tree_rotate_right.c` | A function that removes a node from an AVL tree |
| `124-sorted_array_to_avl.c, 0-binary_tree_node.c` | A function that builds an AVL tree from an array |
| `125-O` | Average time complexities of those operations on an AVL Tree |
| `130-binary_tree_is_heap.c` | A function that checks if a binary tree is a valid `Max Binary Heap` |
| `131-heap_insert.c, 0-binary_tree_node.c` | A function that inserts a value in Max Binary Heap |
| `132-array_to_heap.c, 131-heap_insert.c, 0-binary_tree_node.c` | A function that builds a Max Binary Heap tree from an array |
| `133-heap_extract.c` | A function that extracts the root node of a Max Binary Heap |
| `134-heap_to_sorted_array.c, 133-heap_extract.c` | A function that converts a Binary Max Heap to a sorted array of integers |
| `135-O` | Average time complexities of those operations on a Binary Heap |

## Author:
### Gideon Selorm Attakpah: [GitHub](https://github.com/iamgideonchrist) - [Twitter](https://twitter.com/iamgideonchrist) - [Linkedin](https://www.linkedin.com/in/iamgideonchrist/)
