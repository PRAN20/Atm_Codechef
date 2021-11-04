/* #include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int num;
	float amount;
	cin >> num >> amount;
	if(num < amount + 0.5)
	{
	     if ( num % 5 == 0)
	     {
	          amount = amount - num - 0.5;
	     }
	}
    cout<<setprecision(2)<<fixed<<amount;
    return 0;
}
*/
#include <iostream>
using namespace std;

int main() {
	int k;
    float amt;
    cin>>k>>amt;
    if((amt>=k+.5) && k%5==0){
        amt-=k+.5;
    }
    cout<<amt;
	return 0;
}

