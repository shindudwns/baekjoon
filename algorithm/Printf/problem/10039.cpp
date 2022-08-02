#include <iostream>
 
using namespace std;
 
int main() 
{
    int a = 0;
    int sum =0;
    
    for( int i =0 ;i<5;i++)
    {
    	cin >> a;
        
        if( a < 40 )
          a = 40;
          
        sum += a; 
    }
    
    cout << sum/5;
    
    return 0;
}
