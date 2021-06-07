// #977C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    if (k != 0)
    {
        int num = v[k - 1];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (num >= v[i])
            {
                count++;
            }
        }
        //cout << count;
        if (count == k)
        {
            cout << num;
        }
        else
        {
            cout << -1;
        }
    }
    else
    {
        cout << 1;
    }
}
