#include<iostream>

using namespace std;

int main()
{
	char my_string[] = "Satyam";
	
	for (char* cp = my_string; *cp != 0; *cp++)
	{
		cout << "Char is " << *cp << endl;
	}
	return 0;
}