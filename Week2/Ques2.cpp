#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, j;
        cin >> n;
        int arr[n];
        vector<int> vr;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            int k = n - 1;
            j = i + 1;
            while (j < n)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    vr.push_back(i + 1);
                    vr.push_back(j + 1);
                    vr.push_back(k + 1);
                    break;
                }
                else if (arr[i] + arr[j] > arr[k])
                {
                    j++;
                    k = n - 1;
                }
                else
                    k--;
            }
        }
        if (vr.empty())
        {
            cout << "No sequence found"<<endl;
        }
        else
        {
            for (auto &it : vr)
                cout << it << ",";
                cout<<endl;
        }
    }
}
