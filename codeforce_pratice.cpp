
#include<bits/stdc++.h>
using namespace std;

int main(){   
    int d;
    cin>>d;
    string st[d];
    string s; 

//for input
    for (int i = 0; i <d; i++)
    {
        cin>>s;
        st[i]=s;       
    }


//for output
    for (int i = 0; i <d; i++)
    {

        double l=st[i].length()-2;
        double ln=st[i].length();
        if(ln>10)
        {
            cout<<st[i][0];
            cout<<l;
            cout<<st[i][ln-1]<<endl;

        } 
        else cout<<st[i]<<endl;
                     
    }
return 0;
}