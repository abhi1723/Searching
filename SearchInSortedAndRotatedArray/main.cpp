#include <iostream>

using namespace std;
int binary_search_method(int A[],int s,int e,int x){
int mid=(s+e)/2;
if(s>e)
    return -1;
if(A[mid]==x)
{
    return mid;
}
if(A[mid]>=A[s]){
    if(x>=A[s] && x<A[mid]){
      return  binary_search_method(A,s,mid-1,x);
    }
    else
     return   binary_search_method(A,mid+1,e,x);
}
if(x>=A[mid] && x<=A[e]){
   return binary_search_method(A,mid+1,e,x);
}
binary_search_method(A,s,mid-1,x);
}
int main()
{
    int A[]={4,5,6,7,1,2,3};
    int n=sizeof(A)/sizeof(int);
    int x;
    cin>>x;
    int index=binary_search_method(A,0,(n-1),x);
    cout<<index;

    return 0;
}
