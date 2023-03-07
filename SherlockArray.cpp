#include<iostream>

using namespace std;

int main()
{
    int tc, count = 0;
    cin >> tc;
    while(tc--)
    {
        int n,t1 = 0, t2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        for (int i = 0 ; i < n ; i++)
        {
           
            if ( i == 0) t1 = 0;
            else {
                for (int j = 0 ; j < i ; j++)
                {
                    t1 += a[j];
                }
            }
            if ( i == n - 1 ) t2 = 0;
            else {
                for (int k = i + 1 ; k < n ; k++)
                {
                    t2 += a[k];
                }
            }
            
            if (t1 == t2) count++;
            cout << "Khi i = " << i << " thi tong 1 = " << t1 << " va tong 2 = " << t2 << " count = " << count << endl; 
            t1 = 0;
            t2 = 0;
            count = 0;
         
        }
        if( count > 0 )cout << "yes";
        else cout << "no";
        
    }
    return 0;
}