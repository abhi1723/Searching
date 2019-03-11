#include <iostream>

using namespace std;
int binary_search_method(int A[],int s,int e,int maximum){
int mid=(s+e)/2;
if(s>e)
    return maximum;
if(A[mid]<A[s]){
    return binary_search_method(A,s,mid-1,maximum);
}
if(maximum<A[mid])
maximum=A[mid];
return binary_search_method(A,mid+1,e,maximum);
}
int main()
{
    int A[]={5,6,7,8,9,1,2};
    int n=sizeof(A)/sizeof(int);
    int maximum=-9999;
    int maximum_number=binary_search_method(A,0,(n-1),maximum);
    cout<<maximum_number;
    return 0;
}
