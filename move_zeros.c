void moveZeroes(int* nums, int numsSize) {
    int count=0;
    int j=0;
 for(int i=0;i<numsSize;i++)
 {
    if(nums[i]==0)
    {
    count++;
    j++;
    }
    else
    {
    nums[i-count]=nums[i];
    j++;
    }
 }   

for(int k=j-count;k<numsSize;k++)
{
    nums[k]=0;
}
}