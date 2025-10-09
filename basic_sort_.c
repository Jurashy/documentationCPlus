#include <stdio.h>
#include <stdlib.h>

int main()
{
	int unsorted_n[] = { 2, 3, 13, 18, -5, 38, -10, 11, 0, 104};
	int size = sizeof(unsorted_n) / sizeof(unsorted_n[0]);

	int *can_divided = NULL;
	int *cant_divided = NULL;
	int can_size = 0, cant_size = 0;

	for(int i = 0; i< size; ++i)
	{
		if(unsorted_n[i] % 2 == 0){
			can_divided = realloc(can_divided, (can_size + 1) * sizeof(int));
			can_divided[can_size++] = unsorted_n[i];
		}
		else{
			cant_divided = realloc(cant_divided, (cant_size + 1) * sizeof(int));
			cant_divided[cant_size++] = unsorted_n[i];
		}
	}

	printf("divisible by 2 => ");
	for(int i = 0; i < can_size; ++i)
		printf("%d ", can_divided[i]);
	printf("\n");

	printf("cant divided by 2 => ");
	for(int i = 0; i< cant_size; ++i)
		printf("%d ", cant_divided[i]);
	printf("\n");

	free(can_divided);
	free(cant_divided);

	return 0;
}
