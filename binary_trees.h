#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Data structres */

/**
 * struct binary_tree_s - Tree node
 * @n: Integer stored in the node(weight)
 * @parent: Pointer to parent node
 * @left: Pointer to left child node
 * @right: Pointer to right child node
 */

struct binary_trees_s {
	int n;
	struct binary_trees_s *parent;
	struct binary_trees_s *left;
	struct binary_trees_s *right;
}

typedef struct binary_tree_s bst_t

#endif /* BINARY_TREES_H */
