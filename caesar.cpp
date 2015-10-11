#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	int caesarNum = 0;
	string sourceMessage;

	if (argc == 1)
	{
		caesarNum = 0;
	}
	else
	{
		caesarNum = atoi(argv[1]);
	}
	caesarNum %= 26;

	cout << "input the source message: \n";
	cin >> sourceMessage;
	string encryptedMessage = sourceMessage;
	for (auto &a : encryptedMessage)
	{
		a = (a + caesarNum) > 'z' ? (a + caesarNum - 26) : (a + caesarNum);
	}

	cout << "The caesar number is : " << caesarNum <<
		"\nThe source meassage is :"<< sourceMessage <<
		"\nThe encrypted message is :" << encryptedMessage << endl;
	
	return 0;
}
