#include<iostream>
using namespace std; 
int BSearch(int a[],int l,int h, int n)
{
if(l<=h)
{
int m=(l+h)/2;
if(a[m]==n)
{
    return m;
    
}
else if(a[m] <n)
{
    return BSearch(a,m+1,h,n);
    
}
else
{
    return BSearch(a,l,m-1,n);
}
}
return -1;
}
int main()
{
    int a[]={1,3,5,8,10};
    int n=5,l,h,m, index;
    l=0;
    h=(sizeof(a)/sizeof(a[0]))-1;
    index= BSearch(a,l,h,n);
    if(index==-1)
    {
        cout<<"Number not found. "<<endl;
    }
    else
    {
        cout<<"Number found at index: "<<index<<endl;
        
    }
    return 0;
}

