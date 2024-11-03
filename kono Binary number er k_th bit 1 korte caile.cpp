#include<bits/stdc++.h>
using namespace std;

int turn_on_kth_bit(int x,int k)
{
    return(x|(1<<k));
}
int main()
{
 cout<<turn_on_kth_bit(44,4)<<endl;
return 0;
}
///44 er 4th bit ke 1 korle 44+16=60 hoy.
