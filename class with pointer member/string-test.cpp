#include<iostream>

#include "string.h"
using namespace std;

int main() {
	String s1("hello ");
	String str("abc");
	//cout << str.get_c_str() << endl;
	String s2(s1);
	String s3 = str;
	cout << s2 << endl;
	cout << s3 << endl;
	return 0;
}