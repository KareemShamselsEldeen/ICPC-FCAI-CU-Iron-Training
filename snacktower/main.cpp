#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int max = size;
    int frq[size+1] = {0};
    for(int i=0; i<size; i++)
    {
        int num;
        cin>>num;
        frq[num] = 1;
        while(frq[max])
        {
            cout<<max<<" ";
            max--;
        }
        cout<<endl;
    }
    return 0;
}
