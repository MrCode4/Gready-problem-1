#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    multiset<int, greater<int> > numbers;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;

        numbers.insert(x);
    }

    while(true)
    {
        auto it = numbers.begin();
        int max = *it;

        numbers.erase(it);

        bool can_not_found = true;

        it = numbers.upper_bound(max);
        if(it == numbers.end())
        {
            numbers.insert(max);

            break;
        }

        numbers.insert(max - *it);
    }

    int sum = 0;
    for(auto it = numbers.begin(); it != numbers.end(); it++)
        sum += *it;
    
    cout << sum;

    return 0;
}