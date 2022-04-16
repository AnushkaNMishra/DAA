#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x;
   cin>>x;
   while(x--)
   {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key,count=0;
    cin>>key;
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        int l=i;
        int h=n-1;

            while(l<h)
            {
                if(arr[h]-arr[l]==key)
                {
                    count++;
                    l++;
                    h--;
                }
              else if(arr[h]-arr[l]>key)
                h--;
            else
                l++;
            }
    }

    cout<<count<<endl;
   }
}
