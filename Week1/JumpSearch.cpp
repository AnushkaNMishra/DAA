#include <bits/stdc++.h>

using namespace std;
void jumpsearch(int arr[],int n,int key)
{
    int first=0,ele=0,flag=0;
    int end=sqrt(n);
    while(arr[end]<=key && end<n)
    {  
        ele++;
        first=end;
        end+=sqrt(n);
        if(end>n-1) 
            end=n;
    }
    
    for(int i=first;i<end;i++)
    {
        if(arr[i]==key)
        {
          flag=true;
          break;
        }
    }
    if(flag)
        cout<<"Present "<<ele<<endl;
    else 
        cout<<"Not present "<<<<ele<<endl;
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
        for(int i=0;i<size;i++)cin>>arr[i];
        int key;
        cin>>key;
        jumpsearch(arr,size,key);
    }
 return 0;
}
