#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5][5];
   int c=0;
   
   for (int i = 0; i <5; i++)
   {
    for (int z = 0; z <5; z++)
    {
        cin>>arr[i][z];
        
    } 
    
    }
   for (int i = 0; i <5; i++)
   {
        for (int z = 0; z <5; z++)
        {
            if (arr[i][z]==1)
            {
              c= c + abs(2 - i) + abs(2 - z);
                
            }
            
        }
    
    
   }
   
   cout<<endl<<c;

}
