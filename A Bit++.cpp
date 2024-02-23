#include<iostream>
using namespace std;
int main(){
    int x=0,y;

    cin>>y;
    string st;
    for(int i=0;i<y;i++){
        cin>>st;
        if(st=="++X"||"X++"){
            ++x;
        }
        else if(st=="--X"||"X--"){
            --x;
        }

    }
     cout<<x;
return 0;
}
