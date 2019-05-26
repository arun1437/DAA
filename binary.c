int bin_search(int arr[],int key,int low,int high)
{
int mid;
if(low>high)
return -1;
else
{
mid=(low+high)/2;
if(key<arr[mid])
bin_search(arr,key,low,mid-1);
else if(key>arr[mid])
bin_search(arr,key,mid+1,high);
else
return mid;
}
}
int main()
{
int i,low,high,n,key,arr[55];
printf("enter the number:");
scanf("%d",&n);
printf("enter the array elemet:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter element to be searched");
scanf("%d",&key);
int val=bin_search(arr,key,0,n-1);
if(val==-1)
printf("not found");
else
printf("the element  %d found at position %d\n",key,val+1);
}
