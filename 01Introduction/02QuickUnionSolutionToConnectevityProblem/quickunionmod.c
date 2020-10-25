#include <stdio.h>
#define N 10000

void main()
{
    int i, j, p, q, id[N];
    for(i = 0; i < N; i++) id[i] = i;
    while (scanf("%d %d\n", &p, &q) == 2){
        for(i = p; i != id[i]; i = id[i]);
        for(j = q; j != id[j]; j = id[j]);
        if(i==j) continue;
        id[i] = j;
        printf(" %d %d\n", p, q);
        printf("------------\n");
        for(i = 0; i <=9; i++){
            printf("%d: %d\n", i, id[i]);
        }
        printf("\n");
    }
}

// ./a.out <test1