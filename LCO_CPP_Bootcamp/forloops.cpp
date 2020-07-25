#include<iostream>

using namespace std;

int main()
{
	//My variables
	int my_nums[] = {2,3,4,5,6};

	////For loop
	//for (int i = 0; i < 5; i++) {
	//	cout << "My nums " << my_nums[i] << endl;
	//}

	//For range
	for(int i:my_nums)
	{
		cout << "For range";
		cout << i << endl;
	}


	return 0;
}