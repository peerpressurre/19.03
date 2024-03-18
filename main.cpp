#include <iostream>
#include <string>
using namespace std;

class String{
	string str;
	static int counter;
public:
	String() {
		str = string(80, ' ');
		counter++;
	}
	String(int length) {
		str = string(length, ' ');
		counter++;
	}
	String(string s) {
		str = s;
		counter++;
	}
	~String() {
	    counter--;
	}

	void inputstr() {
		cout << "Enter your string: ";
		getline(cin, str);	
	}

	void outputstr() {
		cout << "Your string: " << str << endl;
	}

	string& getStr() {
		return str;
	}

	static int getCounter() {
		return counter;
	}
};

int String::counter = 0;


int main() {
	string s = "Lala";
	String str1;
	String str2(50);
	String str3(s);
	str1.inputstr();
	cout << "str1: ";
	str1.outputstr();
	str2.inputstr();
	cout << "str2: ";
	str2.outputstr();
	cout << "str3: ";
	str3.outputstr();
	cout << "str counter: " << str3.getCounter();

	return 0;
}