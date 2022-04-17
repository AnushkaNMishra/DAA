#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int first,int mid,int end)
{
    int i,j,k;
    int n1=mid-first+1;
    int n2=end-mid;
    int leftarr[n1],rightarr[n2];
    for(i=0;i<n1;i++)
    {
        leftarr[i]=arr[i+first];
    }
    for(j=0;j<n2;j++)
    {
        rightarr[j]=arr[mid+1+j];
    }
    i=0,j=0,k=first;
    while(i<n1 && j<n2)
    {
        if(leftarr[i]<=rightarr[j])
        {
            arr[k]=leftarr[i];
            i++;
        }
        else
        {
            arr[k]=rightarr[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k++]=leftarr[i++];
    }
    while(j<n2)
    {
        arr[k++]=rightarr[j++];
    }
}
void mergeSort(int arr[],int first,int end)
{
    if(first<end)
    {
        int mid=(first+end)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,first,mid,end);
    }
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      bool flag=false;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      mergeSort(arr,0,n-1);
      for(int i=1;i<=n;i++)
      {
          if(arr[i]==arr[i-1])
          flag=true;
      }
      if(flag)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
  }
}
