#include <iostream>

using namespace std;

int main()

{
    int array_1[9] = {1, 4, 6, 3, 6, 9,1};


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++){

			if (array_1[i]== array_1[j])
			{

			break;

			}
		}
		cout<<array_1[i]<<endl;
	}
}
