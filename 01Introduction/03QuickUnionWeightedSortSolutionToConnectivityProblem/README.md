# Quick-Union Weighted Algorithm

## analysis

This is like quick union, except we are always connecting the shorter tree to the longer.  Even in the worst case scenario, the *maximum* number of pointers needed to get to the root of a tree with 2^n nodes is 2.  This, when we move two tree of of 2^n nodes, we get 2 * 2^n = 2^(n+1) nodes, and the maximum distance has increased to n+1.

If you apply this algoruthm to the example from the unweighted version:

0 1\
1 2\
2 3\
3 4\
4 5\
5 6\
6 7\
7 8\
8 9

you end up with everything tied to a single node, the shortest possible scenario:

0: 0\
1: 0\
2: 0\
3: 0\
4: 0\
5: 0\
6: 0\
7: 0\
8: 0\
9: 0

Here is a scenario where I try to build the most obnoxious tree possible (test 5):
0 1\
2 3\
4 5\
6 7\
8 9\
1 2\
5 6\
3 4\
7 8

Observe the result under the previous algorythm:
0: 1\
1: 3\
2: 3\
3: 7\
4: 5\
5: 7\
6: 7\
7: 9\
8: 9\
9: 9\

If you draw this out and count steps, you will see that the longest chain to the root is 4 steps and the mean number of steps to the root is 2.1, and the statistical variance is 1.29.  Here is the result of the new algorythm:

0: 0\
1: 0\
2: 0\
3: 2\
4: 0\
5: 4\
6: 4\
7: 6\
8: 0\
9: 8

Here the mean is 1.5, and the variance is 0.64.

Recallying that *lg* is log base 2, it can be shewn that that maximum number of pointers required to determine if 2 objects are connected are 2 lg N.  Observe that the number of pointers from any location to the root is no greater than lg N (lg 10 ~ 3.3219281).  Thus, to connect each of two points to the root point is no greater than 2 lg N steps.

For large sets, this is literally millions of times faster.
