

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
int sum=0;
int* arr=malloc(sizeof(int)*numsSize);
for(int i=0;i<numsSize;i++)
{
    sum=sum+nums[i];
    arr[i]=sum;
}
*returnSize=numsSize;
return arr;
}