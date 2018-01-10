#include <stdio.h>
#include <limits.h>

int main(void) {
	int num;
	int max = INT_MIN;
	printf("How many number do you want to sort?");
	scanf("%d", &num);

	int orinum[num];

	printf("Input those numbers waiting for sorting\n");

	for(int i = 0; i < num; i++)
		scanf("%d", &orinum[i]);

	for (int i = 0; i < num; ++i)
		if(orinum[i] >= max)
			max = orinum[i];

	int bucket[max+1];

	for (int i = 0; i <= max; ++i)
		bucket[i] = 0;

	for(int i = 0; i < num; i++){
		int index = orinum[i];
		bucket[index]++;
	}

	for (int i = 0; i <= max; ++i) {
		while(bucket[i]){
			printf("%d ", i);
			bucket[i]--;
		}
	}

	return 0;
}