// #977C
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int pos = n - 1;
        while (pos > 0 && v[pos - 1] >= v[pos])
        {
            pos--;
        }
        while (pos > 0 && v[pos - 1] <= v[pos])
        {
            pos--;
        }
        cout <<  pos << endl;
    }
}
