#include <iostream>
#include <stdio.h>
 using namespace std;

void bst(int tree[],int temp)
{
  int index=0,flag=0;
  while (flag==0)
  {
    if(tree[index]==0)
    {
        tree[index]=temp;
        flag=1;
    }
    else
    {
        if(temp<tree[index])
        {
            index=index*2+1;
        }
        else
        {
            index=index*2+2;
        }
    }
   
  }
   return;
}
int main()
{
   int n;
   cin>>n;
   int temp;
   int tree[30]={0};
   for(int i=0;i<n;i++)
   {
    cin>>temp;
    bst(tree,temp);
   }
   cout<<"BST Tree: ";
   for(int i=0;i<30;i++)
   {
    printf("%d ",tree[i]);
   }
}