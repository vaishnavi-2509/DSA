void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
     int j=0;
    for(int i=m;i<nums1Size;i++)
    {
        if(nums1[i]==0)
        {
            nums1[i]=nums2[j];
            j++;
        }
    }

int temp=0;
for(int i=0;i<nums1Size-1;i++)
{
    for(int k=0;k<nums1Size-i-1;k++)
    {
        if(nums1[k]>nums1[k+1])
        {
            temp=nums1[k];
            nums1[k]=nums1[k+1];
            nums1[k+1]=temp;
        }
    }
}
}