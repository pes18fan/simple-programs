/* # Tree.
 * A tree is a data structure consisting of nodes each with a value and a list
 * of their children.
 *
 * Some terminology:
 * - Root: the topmost node of the tree.
 * - Height: the longest distance from the root to the youngest node / greatest
 *   grand descendant.
 * - General tree: a tree with zero or more children.
 * - Binary trees: a tree with at least zero children, and at most two children
 *   for each node. Binary trees have a `left` and `right` field for each node
 *   rather than a list of children.
 * - Binary search tree: a binary tree with a specific ordering to the nodes
 * - Leaf: a node with no children
 * - Balanced tree: a tree is perfectly balanced if all the leaves are on the
 *   same level.
 * - Branching factor: the amount of children a tree has. A binary tree has a 
 *   branching factor of 2.
 *
 * ## Tree traversals.
 * 
 * The fun begins here!
 * 
 * In a traversal, you "visit" a node, which just generally means doing 
 * something to a node rather than just going to it, then recurse into another.
 * There's generally three types of tree traversals.
 *
 * Consider this poorly drawn tree:
 *
 * ```
 *        7
 *    /      \
 *   23       3
 *   / \    /   \
 *  5   4  18   21
 * ```
 *
 * Let's say our node-visiting function visit_node just prints the value of the
 * node. Now, we can do three types of traversals:
 *
 * ### Pre-order traversal.
 * 
 * In a pre-order traversal, we visit the node, then recurse into the left 
 * subtree, then recurse into the right subtree. So, we visit first, then
 * recurse afterward. So, "visiting" every node in the tree
 * in pre-order would print:
 *
 * ```
 * 7, 23, 5, 4, 3, 18, 21
 * ```
 *
 * ### In-order traversal.
 *
 * In an in-order traversal, we recurse into the left subtree, then visit the
 * node, then recurse into the right subtree. So, we visit in the middle. So,
 * "visiting" every node in the tree in in-order would print:
 *
 * ```
 * 5, 23, 4, 7, 18, 3, 21
 * ```
 *
 * ### Post-order traversal.
 *
 * In a post-order traversal, we recurse into the left subtree, then recurse
 * into the right subtree, then visit the node. So, we visit only AFTER we
 * recurse. A post-order traversal would print:
 *
 * ```
 * 5, 4, 23, 18, 21, 3, 7
 * ```
 *
 * All traversals are O(n), since the amount of travelling to nodes doubles if
 * you double the size of the tree.
 */
class BinaryNode<T> {
  T value;
  BinaryNode<T>? left;
  BinaryNode<T>? right;

  BinaryNode(this.value, {this.left, this.right});
}

class BinaryTree<T> {
  late final BinaryNode<T>? _root;

  // simple constructor using _createBinaryTree
  BinaryTree(List<dynamic> treeData) {
    _root = _createBinaryTree(treeData);
  }

  // create a binary tree out of a multidimensional list
  BinaryNode<T>? _createBinaryTree(List<dynamic> treeData) {
    if (treeData.isEmpty) {
      return null;
    }

    T value = treeData[0] as T;
    List<dynamic> leftSubtreeData = treeData[1];
    List<dynamic> rightSubtreeData = treeData[2];

    BinaryNode<T>? leftSubtree = _createBinaryTree(leftSubtreeData);
    BinaryNode<T>? rightSubtree = _createBinaryTree(rightSubtreeData);

    return BinaryNode<T>(value, left: leftSubtree, right: rightSubtree);
  }

  List<T> _preOrderWalk(BinaryNode<T>? curr, List<T> path) {
    if (curr == null) return path;

    path.add(curr.value);

    _preOrderWalk(curr.left, path);
    _preOrderWalk(curr.right, path);

    return path;
  }

  List<T> preOrderTraversal() {
    return _preOrderWalk(_root, []);
  }
}

void main() {
  final List<dynamic> treeData = [
    20, // root value
    [ // left subtree data
      10,
      [
        5,
        [],
        [7, [], []]

      ],
      [15, [], []]

    ],
    [ // right subtree data
      50,
      [
        30,
        [29, [], []],
        [45, [], []]
      ],
      [100, [], []]
    ]
  ];

  final tree = BinaryTree<int>(treeData);

  final preOrderPath = tree.preOrderTraversal();
  print('[ ${preOrderPath.join(', ')} ]');
  // Expect: [20, 10, 5, 7, 15, 50, 30, 29, 45, 100]
}
