#include<iostream>

using namespace std;

void sayHello(void);
int sayTwo(void);

int main()
{
	sayHello();
	cout << sayTwo()<<endl;
	return 0;
}

void sayHello() {
	puts("Hello there");
	
}

int sayTwo() {
	return 2;
}