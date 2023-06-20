/* # Heap / Priority queue.
   A heap is a binary tree, where every child and grandchild of a node is
   smaller (a max heap) or larger (a min heap) than itself. Whenever a node
   is added or deleted, we must adjust it. We don't "traverse" a heap.

   This is a min heap:

   ```
                50
            /       \
          71        100
         /  \      /   \
       101  80   800   101
   ```

   Heaps are weakly ordered.

   ## Insert a node

   First, go straight to the bottom of the heap. Then bubble up as required.
   For example, if we inserted 3 to the above min heap, it would go down to the
   bottom, then start bubbling back up until it reaches the top where it should
   be.
*/
   
