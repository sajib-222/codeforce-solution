#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin>>w;
    int x,y,z,c=0;
    for (int i = 0; i <w; i++)
    {
        cin>>x>>y>>z;
        if ((x+y+z)>=2)
        {
            c++;
        }       
    }
    cout<<c;   
return 0;
}
