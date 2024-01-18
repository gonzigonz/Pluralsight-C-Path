all: Simple

Simple: Account.o Transaction.o SimpleClasses.o
	clang++ Account.o Transaction.o SimpleClasses.o -o Simple

Account.o: Account.cpp Account.h Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic Account.cpp

Transaction.o: Transaction.cpp Transaction.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic Transaction.cpp

SimpleClasses.o: SimpleClasses.cpp Account.h
	clang++ -c -std=c++11 -Wall -Wextra -Wpedantic SimpleClasses.cpp
