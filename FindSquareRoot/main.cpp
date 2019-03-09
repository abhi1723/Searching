#include <iostream>

using namespace std;
float findSquareRoot(int n){
int s=0,e=n,p=1,mid;
int A[n];
float res;
for(int i=0;i<n;i++)
{
    A[i]=p;
    p++;
}
while(s<=e){
    mid=(s+e)/2;
     if((A[mid]*A[mid])<=n){
        res=A[mid];
        s=mid+1;
    }
    else{
        e=mid-1;
    }
}
float dp=0.1,sr;
int k=3;
int h=1;
cout<<res<<endl;
while(h<=k){
    while((res*res)<=n){

        res+=dp;
    }
    res-=dp;
    h++;
    dp/=10;
}
return res;
}
int main()
{
    int n;
    cin>>n;
    float squareRoot=findSquareRoot(n);
    cout<<squareRoot;
    return 0;
}
