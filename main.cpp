#include "std_lib_facilities.h"


void print(int loops,const vector<int>& out)
{
	cout << "Number in the sequence: " << loops << "\n";
	for (int i=0; i<out.size(); ++i)
		cout << out[i] << '\n';
}

// x and y are the first two numbers of the fibonacci sequence n is the numbers of times to run the loop
void fibonacci(int x,int y,int n)
{
	vector<int> v;	// a vector that contains every number iterated (minus the first two)
	int z;
	int loops = 0;
	
	while (v.size() != n)
	{
		++loops;
		z = x + y;
		v.push_back(z);
		// shuffle the numbers 	
		x = y;
		y = z;
		// pass to print() next
		print(loops, v);
	}
}



int main(){

	// these numbers are just test numbers
	fibonacci(1,2,10);
}
