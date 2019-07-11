/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include<bits/stdc++.h>
using namespace std;


int main(){
	long k,n,t,pos;

	cin>>t;
	while(t-->0){
		cin>>n>>k;
		int  numbers[n];
		for(int i=0;i<n;i++){
			cin>>numbers[i];
		}
		k%=n;
		pos=n-k;
		pos%=n;
		do{
			cout<<numbers[pos]<<" ";
			pos++;
			pos%=n;
		}while(pos!=((n-k)%n));
		cout<<endl;
	}
	return 0;
}