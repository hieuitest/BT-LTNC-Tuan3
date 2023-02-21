#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    int count = 0;
    cin >> tc;
    while(tc--){
       int a, b;
       cin >> a >> b;
       count = 0;
       for ( int i = a ; i <= b ; i++)
       {
        int c = i,  du, res = 0;
        while (c > 0)
        {
            du = c%10;
            res = res*10 + du;
            c /= 10;
        }

        if (res == i)
        {
            count++;
        }
        
       }
       cout << count << endl;
    }
    

}