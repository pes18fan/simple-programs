Most of these numerical methods use something from math.h, so to compile them
you need to link the math library from `libc` using this command:

```bash
gcc program.c -o output -lm
```

Additionally, for user input like the function to approximate the result of and
initial guesses, a correspoding header file is provided where you can input
those values. Initial guesses are likely to be computable though, so in the future
I might change the programs to compute an initial guess by themselves; such that
the only thing left to input is the function to approximate.
