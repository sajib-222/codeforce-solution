//domino
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int c=x*y;
    double z=(double(c)/2);
    cout<<setprecision(4)<<round(z-.5)<<endl;

}
