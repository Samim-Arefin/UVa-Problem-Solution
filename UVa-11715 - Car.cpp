
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double u, v, a, s, t;
    int x, i = 1;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(3);

    while(cin >> x && x > 0)
    {
        u = v = a = s = t = 0;

        if(x == 1)
        {
            cin >> u >> v >> t;
            s = ((u+v)/2)*t;
            a = (v-u)/t;
            cout << "Case " << i++ << ": " << s << " " << a << endl;
        }

        if(x == 2)
        {
            cin >> u >> v >> a;
            t = (v-u)/a;
            s = ((u+v)/2)*t;
            cout << "Case " << i++ << ": " << s << " " << t << endl;
        }

        if(x == 3)
        {
            cin >> u >> a >> s;
            double d = (u*u) + 2*a*s;
            v = sqrt(d);
            t = (v-u)/a;
            cout << "Case " << i++ << ": " << v << " " << t << endl;
        }

        if(x == 4)
        {
            cin >> v >> a >> s;
            double d = (v*v) - 2*a*s;
            u = sqrt(d);
            t = (v-u)/a;
            cout << "Case " << i++ << ": " << u << " " << t << endl;
        }

    }
    return 0;
}
