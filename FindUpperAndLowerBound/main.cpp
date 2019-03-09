#include <iostream>

using namespace std;
int binary_search_function(int *A,int n,int input){
int start=0,ending=n-1;
int mid,lower_index=-1;
while(start<=ending){
        mid=(start+ending)/2;
    if(A[mid]==input)
    {
          lower_index=mid;
          ending=mid-1;
    }
    else if(A[mid]<input)
    start=mid+1;
    else
        ending=mid-1;
}
return lower_index;
}
int binary_search_function2(int *A,int n,int input){
int start=0,ending=n-1;
int mid,lower_index=-1;
while(start<=ending){
        mid=(start+ending)/2;
    if(A[mid]==input)
    {
          lower_index=mid;
          start=mid+1;
    }
    else if(A[mid]<input)
    start=mid+1;
    else
        ending=mid-1;
}
return lower_index;
}

int main()
{
   int k;
   cin>>k;
   int A[k];
   for(int i=0;i<k;i++)
        cin>>A[i];
   int n=sizeof(A)/sizeof(int);
   int input;
   int t,mn=0;
   cin>>t;
   int yo[t];
   for(int i=0;i<t;i++)
    cin>>yo[i];
   while(mn<t){
   input=yo[mn];
   int lower_index=binary_search_function(A,n,input);
   int upper_index=binary_search_function2(A,n,input);
   cout<<lower_index<<" "<<upper_index<<endl;
   mn++;
   }
    return 0;
}
