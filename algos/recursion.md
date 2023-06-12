# Recursion

Defining a problem in terms of itself. This is often used in the context of a 
recursive function. A recursive function is a function that calls itself until 
some problem is solved. The point where the problem is solved is known as the 
base case.

Understanding your base case is super important for understanding how 
recursion works.

When you recurse, the function calls make you go down the call stack until you
hit the base case. Then, it stops recursing and all of the functions start 
returning and thus getting popped off the stack one by one, eventually getting 
back to where the first function was called.

We can implement a simple maze solver via recursion. Consider this:

```
// # is a wall, S is the start and E is the end
[
    "#####E#",
    "#     #",
    "#S#####",
]
```

We need to go from S to E. We could go in any of the four directions from the
start.

You can consider the following base cases here, where you'd return from the
function:
- Its a wall
- Off the map
- We've reached the end
- If we've reached a spot we've already seen

For the recursive step, we just go all four directions.
