# Quick-Union Weighted Algorithm with Path Compression

## analysis

This is like the weighted quick union, except we are taking an extra step when tracing the roots of compressing the path to the root along the way, so that each node ends up pointing directly at the root.  Compare below the final pattern on test1 from the weighted quick union before and after the path compression:

0: 8\
1: 3\
2: 3\
3: 3\
4: 3\
5: 3\
6: 5\
7: 3\
8: 3\
9: 3

0: 3\
1: 3\
2: 3\
3: 3\
4: 3\
5: 3\
6: 3\
7: 3\
8: 3\
9: 3

In the second form, all paths are compressed and search time becomes linear.

Running example 1, this final change does not ocurr until the very end.  I have added I believe sufficient outputs along the way to `weightedquickunionpathcompressionmod` to make the process visible.
