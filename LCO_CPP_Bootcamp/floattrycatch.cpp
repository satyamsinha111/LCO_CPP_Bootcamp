#include<iostream>

using namespace std;

int main()
{
	int call_api = 2.0;
	try
	{
		cout << "trying to use a API value"<<endl;
		cout << "Did some testing with api value"<<endl;
		throw call_api;
		cout << "No code executed after this"<<endl;
	}
	catch (int x)
	{
		cout << "Integer exception occured"<<endl;
	}
	catch (float f) {
		cout << "Float exception occured"<<endl;
	}
	catch (...)
	{
		cout << "Something went wrong";
	}
	cout << "Keep on moving with the rest of the code";
	return 0;
}