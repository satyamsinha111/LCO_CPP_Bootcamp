#include<iostream>

using namespace std;


int main()
{
	printf("Float type is %ld bits\n", sizeof(long)*8);

	float my_p_value = 20.2 + 20.2;

	if (my_p_value == 40.400002)
	{
		puts("You got it right but wrong in cpp because it deals with exact precision");
	}
	else {
		puts("Instead this will be printed");
	}

	printf("Float addition is %f\n", my_p_value);

	return 0;
}