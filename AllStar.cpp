/*
A function to insert stars after every char except the last one. 
allStar("hello") → "h*e*l*l*o"
allStar("abc") → "a*b*c"
allStar("ab") → "a*b"

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	int index=0, lengthOfString=0;
	cin>>str;
	lengthOfString=str.length();
	cout << "New string where all the adjacent chars are now separated by a \"*\" in " << str << " is ";
	for(index=0; index<lengthOfString-1; index++)
	cout<<str[index]<<"*";
	cout<<str[lengthOfString -1]<<endl;
	return 0;
}

