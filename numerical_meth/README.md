Most of these numerical methods use something from math.h, so to compile them
you need to link the math library from `libc` using this command:

```bash
gcc program.c -o output -lm
```
