#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
	int i = 0;
	int j = 0;
	for (j = 1; j< numsSize; j++)
	{
		if ((nums[i] != nums[j]) && (i != j)) {
			nums[++i] = nums[j];
		}
		
	}
	return i + 1;
}

int main(void)
{
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	int ret = removeDuplicates(nums, 10);
	printf("ret=%d\n", ret);
	int i = 0;
	for (i = 0; i < ret; i++){
		printf("num=%d ", nums[i]);
	}
	printf("\n");

	return 0;
}
