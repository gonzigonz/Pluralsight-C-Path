# Compiler Specific Topics
Change directory (cd) into this folder and...
```
clang++ Cli.cpp -o Cli
./Cli

# To set warning levels up and treat like errors do...
clang++ -std=c++11 -Wall -Wextra -Wpedantic Cli.cpp -o Cli
./Cli
```

## Makefile's
```
# Simple makefile example...
make
./Cli
```

For more complex multi-file `makefile` examples see [Module 07](../Module_07_Writing_Classes/README.md).
