//Prime Generator
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    long long int m,n;
	    cin>>m>>n;
	    
	    for (int i=m;i<=n;i++)
	    {
	        bool flag= true;
	        
	        for (int j=2;j<sqrt(i)+1;j++)
	        {
	            if (i%j == 0)
	            {
	                flag=false;
	                break;
	            }
	        }
	        if (i==2)
	       {
	           cout<<2<<endl;
	       }
	       if (flag && i!=1)
	       {
	           cout<<i<<endl;
	       }
	            
	    }
	}
	return 0;
}
