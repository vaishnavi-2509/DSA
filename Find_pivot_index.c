int pivotIndex(int* nums, int numsSize) {
int t_sum=0;
for(int i=0;i<numsSize;i++)
{
    t_sum=t_sum+nums[i];
}
int left_sum=0;
for(int i=0;i<numsSize;i++)
{
    if(left_sum==t_sum-left_sum-nums[i])
    {
    return i;
    }
    left_sum=left_sum+nums[i];
}
return -1;
}