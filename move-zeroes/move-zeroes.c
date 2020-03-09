#include <stdio.h>


#define SWAP_NUM(x, y)	\
do {				\
	int tmp = x;	\
	x = y;			\
	y = tmp;		\
}while(0)

void moveZeroes(int* nums, int numsSize){

	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < numsSize; i++){
		if (nums[i] != 0){
			SWAP_NUM(nums[j], nums[i]);
			j++;
		}
	}

}





int main(void){

	int nums[] = {0,1,0,3,12};
	moveZeroes(nums, 5);
	int i = 0;
	for (i = 0; i < 5; i++){
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}
