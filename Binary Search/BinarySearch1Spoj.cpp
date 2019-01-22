//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int x,result,Left,Right,mid,n,nrQueries;
int A[100005];
int main()
{
    cout<<"Enter number and queries: ";
    cin>>n>>nrQueries;

    for(int i=0;i<n;++i)
        cin>>A[i];
    //let's take each query
    for(int i=1;i<=nrQueries;++i)
    {
        cin>>x;//read the number we are searching
        result =-1;
        Left = 0;
        Right =n-1;

        while(Left<=Right)
        {
            mid=(Left+Right)/2;
            if(A[mid]==x) result=mid,Right=mid-1;
            else if(x<A[mid]) Right=mid-1;
            else Left=mid+1;
        }
        cout<<result;

    }

    return 0;
}
