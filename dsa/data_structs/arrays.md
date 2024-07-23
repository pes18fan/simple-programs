# arrays

An array is simply a contiguous memory space, which consists of a certain
number of bytes. The way this memory is interpreted depends on what you
tell the compiler. For example, if the array is of ints, every 4 bytes
of the array is interpreted as a single item.

You can't grow arrays. Array sizes must be fixed at compile time. That's
why `const a = [];` in JS is not an array, since you can grow it!

You can't delete items from an array or insert new items either. That's
where linked lists come in.
