#include <bits/stdc++.h>
using namespace std;

int main() {
	int money;
	cin>>money;
	
	int notes = 0;
	
	money+= notes/100;
	notes%=100;

	money+= notes/20;
	notes%=20;

	money+= notes/10;
	notes%=10;

	money+= notes/5;
	notes%=5;

	money+= notes;
	
	cout<<notes;
	return 0;

}
