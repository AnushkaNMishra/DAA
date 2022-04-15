#include<bits/stdc++.h>
using namespace std;
void res(int arr[],int l,int h,int key)
{
    int start=-1,end=-1,temp,result,mid,temp2;
    bool flag=false;
    while(l<=h)
    {
         mid=(l+h)/2;
        if(arr[mid]==key)
        {
            temp2=mid;
            temp=mid;
            while(mid>0 && arr[mid]==key)
            mid--;
            start=mid;
            while(temp<h && arr[temp+1]==key)
            temp++;
            end=temp;
            flag=true;
            result=end-start;
            break;
        }
        else if(arr[mid]>key)
        h=mid-1;
        else
        l=mid+1;
    }

    if(flag)
    {
        cout<<arr[temp2]<<" "<<result<<endl;
    }
    else
        cout<<"Key not present"<<endl;
}
int main()
{
 int n;
 cin>>n;
 while(n--)
 {
     int size;
     cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    res(arr,0,size-1,key);
 }
}
