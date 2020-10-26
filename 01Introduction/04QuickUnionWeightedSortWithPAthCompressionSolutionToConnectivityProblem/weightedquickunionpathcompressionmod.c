#include <stdio.h>
#define N 10000

void main()
{
	int i, j, p, q, mx, id[N], sz[N];
	for (i = 0; i < N; i++)
	{
		id[i] = i;
		sz[i] = 1;
	}
	mx = 0;
	while (scanf("%d %d\n", &p, &q) == 2)
	{
		printf("\n\n-------------------------------------------------------------\np: %d, q: %d\n", p, q);
		if (p > mx)
			mx = p;
		if (q > mx)
			mx = q;
		for (i = p; i != id[i]; i = id[i])
		{
			printf("i: %d id[i]: %d id[id[i]]: %d\n", i, id[i], id[id[i]]);
			if (id[i] != id[id[i]])
				printf("now, id[%d] = %d\n", i, id[id[i]]);
			id[i] = id[id[i]];
		}
		for (j = q; j != id[j]; j = id[j])
		{
			printf("j: %d id[j]: %d id[id[j]]: %d\n", j, id[j], id[id[j]]);
			if (id[j] != id[id[j]])
				printf("now, id[%d] = %d\n", j, id[id[j]]);
			id[j] = id[id[j]];
		}
		if (i == j)
			continue;
		printf("\n %d != %d\n", i, j);
		if (sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] += sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] += sz[j];
		}
		printf(" %d %d\n", p, q);
		printf("------------\n");
		for (i = 0; i <= mx; i++)
		{
			printf("%d: %d\n", i, id[i]);
		}
		printf("\n");
	}
}

// ./a.out <test1