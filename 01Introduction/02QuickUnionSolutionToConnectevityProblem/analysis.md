# Quick-Union Algorithm

## analysis

It's hard to work this out analytically, but we know that in some cases this _can_ be slowe than Quick-Find. It's possible, for example, for the connections to worm a long chain.

0 1
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9

So: we end up with:

0: 1
1: 2
2: 3
3: 4
4: 5
5: 6
6: 7
7: 8
8: 9
9: 9

0 takes 9 steps
1 takes 8 steps
2 takes 7 steps

etc

avg number of steps is (1+2+3+..+N-1)/2 = (N\*(N-1))/(2N) = (N-1)/2

If the remainder of the pairs connect N to some other object, then they will wind up at the end of the list. Thus, each of those other objects will take over N-1 pointers.
