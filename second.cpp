#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

multiset<int, std::greater<int> > my_set;
int n, answer = 0;

void solve()
{
    int max_num = *my_set.begin();

    auto max2_iterator = my_set.upper_bound(max_num);
    if(max2_iterator == my_set.end())
        return;

    my_set.erase(my_set.begin());
    my_set.insert(max_num - *max2_iterator);

    solve();
}

void input()
{
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        int num;
        cin >> num;

        my_set.insert(num);
    }
}

int main()
{
    input();
    solve();

    cout << n * (*my_set.begin());

    return 0;
}