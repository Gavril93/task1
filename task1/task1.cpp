#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	char mySymbol;
	getline(cin, str);
	cin >> mySymbol;
	char * arr = new char[str.size() + 1];
	copy(str.begin(), str.end(), arr);
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == mySymbol)
		{
			str[i] = '\n';
		}
		cout << str[i];
	}
	system("pause");
	return 0;
}