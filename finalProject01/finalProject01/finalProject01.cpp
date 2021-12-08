

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char iterate = 'Y';
	cout << "input a letter to complete your word: ";
	do
	{
		char letter;
		cin >> letter;
		int num = (int)letter - 64;
		cout << num << endl;
		cout << "would you like to add another letter [Y/N]";
		cin >> iterate;
	} while (iterate != 'N');




	
	

}

