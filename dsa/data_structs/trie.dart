/* # Trie.
   **VERY COMMON IN INTERVIEWS!**

   Easiest way to think of a trie is autocomplete. If some words are given,
   what should I get back? Use a trie to do that. And, in O(1) time as well.

   If you've read Crafting Interpreters, you might remember this.
   A trie is a type of tree that is mainly used to store strings. However,
   unlike traditional data structures, the strings are stored character by
   character. Nowhere in the trie will you find a whole string.
   A trie has a root. The root doesn't have a value itself. If we have a
   English-language trie, then the root can have one of 26 different 
   children, each for the alphabet. Say we want to add the word
   'cat' to the trie, we can do so by adding a 'c' node as the root's
   child, a 'a' node as 'c's child and a 't' node as 'a's child. Then,
   we'd have some marker at 't' that indicates that this path that has
   been followed to get to this node is an entire word. This could be a
   special marker node, or a boolean field on the node itself.

   And, to add 'cats', what do we do? We just append 's' as 't's child,
   then add a marker to it!

   But what about 'cattle'? For that, we get to the end of 'cat' i.e. 't',
   then append 't' as another child of 't'. And to add 'car', you'd
   obviously go to the 'a' in 'cat', then add a 'r' child to it.

   And to add 'mark', you'd add a 'm' child to the root, then each of the
   rest of 'ark' as children to 'm' and so on. This is basically how a
   trie works.

   Here's a poorly drawn version of the above described trie:

   ```
                            ROOT
                            / \
                         'c'  'm'
                         /      \
                       'a'      'a'
                      /    \      \
                    't'    'r'    'r'
                    / \             \
                  's' 't'           'k'
                        \
                        'l'
                          \
                          'e'
   ```

   Another thing you can do with a trie is to store a frequency / score.
   You generally do this at runtime, based on what the user is using the
   most, using a scoring algorithm.

   ## Insertion

   We walk through the character list provided. For each iteration, we
   check if the current node has the character. If it does we just set
   it to that character, else we create a node for that character.

   ## Deletion

   Delete your way back up after getting to the end of the string.
*/

class TrieNode {
  final String char;
  final bool formsWord;
  late List<TrieNode> children;

  TrieNode(this.char, {required bool this.formsWord}) {
    this.children = [];
  }
}

class Trie {
  late final TrieNode _root;

  Trie() {
    this._root = TrieNode("\0", formsWord: false);
  }

  bool _has(TrieNode node, String str, int currStrPosition) {
    if (currStrPosition >= str.length - 1) {
      return node.children
          .any((element) => element.char == str[currStrPosition]);
    }

    if (node.children.any((element) => element.char == str[currStrPosition])) {
      return _has(
          node.children
              .singleWhere((element) => element.char == str[currStrPosition]),
          str,
          currStrPosition + 1);
    }

    return false;
  }

  // Recursively adds a new word into the trie
  void _insert(TrieNode node, String str, int currStrPosition) {
    if (currStrPosition >= str.length - 1) {
      node.children.add(TrieNode(str[currStrPosition], formsWord: true));
      return;
    }

    if (node.children.any((element) => element.char == str[currStrPosition])) {
      _insert(
          node.children
              .singleWhere((element) => element.char == str[currStrPosition]),
          str,
          currStrPosition + 1);
    }

    final newNode = TrieNode(str[currStrPosition], formsWord: false);
    node.children.add(newNode);
    _insert(node.children.singleWhere((element) => element == newNode), str,
        currStrPosition + 1);
  }

  void insert(String str) {
    _insert(_root, str, 0);
  }

  // Recursively searches for a word in the trie
  bool has(String str) {
    return _has(_root, str, 0);
  }
}

void trieTest() {
  final trie = Trie();

  trie.insert("cat");
  trie.insert("cats");
  trie.insert("cattle");
  trie.insert("car");
  trie.insert("mark");
  trie.insert("march");
  trie.insert("marcher");

  assert(trie.has("cat"));
  assert(trie.has("cats"));
  assert(trie.has("cattle"));
  assert(trie.has("car"));
  assert(trie.has("mark"));
  assert(trie.has("march"));
  assert(trie.has("marcher"));

  print(trie);
}

void main() {
  trieTest();
}
