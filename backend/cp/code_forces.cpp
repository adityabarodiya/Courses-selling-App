#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define vi vector<int>

#define println(a) cout << a << endl;
#define print(a) cout << a << " ";
#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pb push_back
#define printArr(a)       \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl

#define all(x) x.begin(), x.end()

/*
    Start Solving from here ---------------------------------------------------------------------
*/

void inputArr(vi &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int ele;
        cin >> ele;

        v[i] = ele;
    }
}

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int count = 0;


    while (1)
    {
        if(b > y){
            println(-1);
            return;
        }
        if(a == x || y == b){
            break;
        }
        count++;
        a++;
        b++;
    }

    if(b == y){
    count += abs(x-a);

    }else count += (y-x)*2;

    println(abs(count));
    

}

int32_t main()
{
    // for fast input and output
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}