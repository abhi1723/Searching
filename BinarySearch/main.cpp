#include <iostream>

using namespace std;
int binary_search_function(int *A,int n,int input){
int start=0,ending=n-1;
int mid;
while(start<=ending){
        mid=(start+ending)/2;
    if(A[mid]==input)
        return mid;
    else if(A[mid]<input)
    start=mid+1;
    else
        ending=mid-1;
}
return -1;
}
int main()
{
   int A[]={1,2,3,4,5,6,7};
   int n=sizeof(A)/sizeof(int);
   int input;
   cin>>input;
   int index=binary_search_function(A,n,input);
   if(index==-1)
    cout<<"Element is not present";
   else
    cout<<"Element is present";
    return 0;
}
