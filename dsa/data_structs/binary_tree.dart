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
 * 
 * A useful thing to note is that all of these traversals implicitly use a
 * stack. Pretty neat, huh?
 * 
 * These traversals I described above are known as depth first traversals. 
 * That is because we go as deep as possible down the tree until we reach the 
 * bottom before returning and trying the other side. There are also 
 * breadth-first traversals, which are a bit more complicated.
 * 
 * ### Breadth-first traversals.
 * 
 * A breadth first search is the opposite of a depth first search. Instead of
 * using a stack, we use its opposite, a queue. Using a breadth first traversal,
 * the above poorly drawn tree would be:
 *
 * ```
 * 7, 23, 3, 5, 4, 18, 21
 * ```
 */
class BinaryNode<T> {
  T value;
  BinaryNode<T>? left;
  BinaryNode<T>? right;

  BinaryNode(this.value, {this.left, this.right});

  @override
  String toString() {
    return value.toString();
  }
}

extension on List {
  /// Checks two lists for equality.
  /// Returns true if they are equal, false otherwise.
  bool equals(List list) {
    if (this.length != list.length) return false;

    for (int i = 0; i < this.length; i++) {
      if (this[i] != list[i]) return false;
    }

    return true;
  }
}

class BinaryTree<T> {
  BinaryNode<T>? root;

  // simple constructor using _createBinaryTree
  // just for testing, ignore
  BinaryTree(List<dynamic> treeData) {
    root = _createBinaryTree(treeData);
  }

  // create a binary tree out of a multidimensional list
  // very spaghetti as it is just for testing, ignore
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

  List<T> _inOrderWalk(BinaryNode<T>? curr, List<T> path) {
    if (curr == null) return path;

    _inOrderWalk(curr.left, path);
    path.add(curr.value);
    _inOrderWalk(curr.right, path);

    return path;
  }

  List<T> _postOrderWalk(BinaryNode<T>? curr, List<T> path) {
    if (curr == null) return path;

    _postOrderWalk(curr.left, path);
    _postOrderWalk(curr.right, path);
    path.add(curr.value);

    return path;
  }

  // traverse the tree in various orders and return the path taken:
  List<T> preOrderTraversal() {
    return _preOrderWalk(root, []);
  }

  List<T> inOrderTraversal() {
    return _inOrderWalk(root, []);
  }

  List<T> postOrderTraversal() {
    return _postOrderWalk(root, []);
  }

  // uses the pre order walk by default
  List<T> depthFirstTraversal() {
    return _preOrderWalk(root, []);
  }

  // i should probably use a queue for this but whatever
  List<T> breadthFirstTraversal() {
    final path = <T>[];
    final q = <BinaryNode<T>?>[root];

    while (q.length != 0) {
      final curr = q.removeAt(0);

      // this will probably never happen but good to have this check nonetheless
      if (curr == null) continue;

      path.add(curr.value);

      if (curr.left != null) q.add(curr.left);
      if (curr.right != null) q.add(curr.right);
    }

    return path;
  }
}

/* given two binary trees, find out if they are equal in both shape and 
  structure. We can't use breadth first traversal here, we need to use depth
  first traversal here, because it preserves the shape of the tree in its
  traversal path. We start traversing from the roots of each tree. */
bool binaryTreesEqual<T>(BinaryNode<T>? a, BinaryNode<T>? b) {
  // a few base cases
  // both are null -> true
  if (a == null && b == null) return true;

  // one is null, the other is some value, this would mean that the path
  // of the two traversals differs, so we return false
  // this is a structural check
  if (a == null || b == null) return false;

  // obviously, if the values are different the trees differ.
  // this is a value check
  if (a.value != b.value) return false;

  // we're doing a logical AND on the two recursive calls comparing the
  // subtrees. If any one returns false we know the two trees differ, so
  // we return false
  return binaryTreesEqual(a.left, b.left) && binaryTreesEqual(a.right, b.right);
}

void testBinaryTree() {
  final List<dynamic> treeData = [
    20, // root value
    [
      // left subtree data
      10,
      [
        5,
        [],
        [7, [], []]
      ],
      [15, [], []]
    ],
    [
      // right subtree data
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
  assert(preOrderPath.equals([20, 10, 5, 7, 15, 50, 30, 29, 45, 100]),
      "Got $preOrderPath");

  final inOrderPath = tree.inOrderTraversal();
  assert(inOrderPath.equals([5, 7, 10, 15, 20, 29, 30, 45, 50, 100]),
      "Got $inOrderPath");

  final postOrderPath = tree.postOrderTraversal();
  assert(postOrderPath.equals([7, 5, 15, 10, 29, 45, 30, 100, 50, 20]),
      "Got $postOrderPath");

  final breadthFirstPath = tree.breadthFirstTraversal();
  assert(breadthFirstPath.equals([20, 10, 50, 5, 15, 30, 100, 7, 29, 45]),
      "Got $breadthFirstPath");

  final List<dynamic> treeTwoData = [
    20, // root value
    [
      // left subtree data
      10,
      [
        5,
        [],
        [7, [], []]
      ],
      [15, [], []]
    ],
    [
      // right subtree data
      50,
      [
        30,
        [29, [], []],
        [45, [], []]
      ],
      [100, [], []]
    ]
  ];

  final treeTwo = BinaryTree<int>(treeTwoData);
  assert(binaryTreesEqual(tree.root, treeTwo.root) == true,
      "Expected true, got false");

  print("Tests passed for BinaryTree!");
}

void main() {
  testBinaryTree();
}
