#include"DES.h"
int main()
{
	cout << "Please enter the Plaintext:" << endl;
	string Plaintext(16, NULL);
	getline(cin, Plaintext, '\n');
	cout << "Please enter the Key:" << endl;
	string key(16, NULL);
	getline(cin, key, '\n');
	/*string Plaintext = "computer";
	string key = "security";*/
	string Ciphertext = gunala(Plaintext, key);
	cout << Ciphertext<<endl;
	system("pause");
	return 0;
}