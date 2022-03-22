#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1("I have a dream");
	string s2("Computer Programming");

	cout << "(1) " << s1.append(s2) << endl;
	
	s1 = "I have a dream";
	cout << "(2) " << s1.append(s2, 9, 7) << endl;
	
	s1 = "I have a dream";
	cout << "(3) " << s1.append("NEW", 3) << endl;
	
	s1 = "I have a dream";
	cout << "(4) " << s1.append(3, 'N') << endl;
	
	s1 = "I have a dream";
	cout << "(5) " << s1.assign(3, 'N') << endl;
	
	s1 = "I have a dream";
	cout << "(6) " << s1.assign(s2, 9, 7) << endl;
	
	s1 = "I have a dream";
	cout << "(7) " << s1.assign("NEWNEW", 3) << endl;
	
	s1 = "I have a dream";
	cout << "(8) " << s1.assign(3, 'N') << endl;
	
	s1 = "I have a dream";
	cout << "(9) " << s1.at(0) << endl;
	
	s1 = "I have a dream";
	cout << "(10) " << s1.length() << endl;
	
	s1 = "I have a dream";
	cout << "(11) " << s1.size() << endl;
	
	s1 = "I have a dream";
	cout << "(12) " << s1.capacity() << endl;
	
	s1 = "I have a dream";
	cout << "(13) " << s1.erase(1, 2) << endl;
	
	s1 = "I have a dream";
	cout << "(14) " << s1.compare(s2) << endl;
	
	s1 = "I have a dream";
	cout << "(15) " << s1.compare(0, 10, s2) << endl;
	
	s1 = "I have a dream";
	cout << "(16) " << s1.c_str() << endl;
	
	s1 = "I have a dream";
	cout << "(17) " << s1.substr(4, 8) << endl;
	
	s1 = "I have a dream";
	cout << "(18) " << s1.substr(4) << endl;
	
	s1 = "I have a dream";
	cout << "(19) " << s1.find('A') << endl;
	
	s1 = "I have a dream";
	cout << "(20) " << s1.find('a', 9) << endl;
	
	s1 = "I have a dream";
	cout << "(21) " << s1.replace(2, 4, "NEW") << endl;
	
	s1 = "I have a dream";
	cout << "(22) " << s1.insert(4, "NEW") << endl;
	
	s1 = "I have a dream";
	cout << "(23) " << s1.insert(6, 8, 'N') << endl;
	
	s1 = "I have a dream";
	cout << "(24) " << s1.empty() << endl;

	return (0);
}
