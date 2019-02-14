#include <iostream>


using namespace std;

int main()
{	
	bool exit = true;
	setlocale(LC_ALL,"Russian");
  	cout << "10чная система исчестленя в 2ичную" << endl;
	while(exit)
	{

		int num;
		int len=0;
		cout << "Введите 10чное числ0" << endl;
		cin >> num;
		int num2 = num;

		while(num2 != 1)
		{
			num2 /= 2;
			len++;
		}

		len++;
		int *arr = new int[len];
		for(int i = len-1;i>=0;i--)
		{
			arr[i]=num%2;
			num /= 2;
		}	
		for(int i = 0;i<len;i++)
		{
			cout << arr[i];
		}
		delete []arr;
		cout << "\n\nПовторим?(1-да 0-нет)";
		cin >> exit;
	}
	
	return 0;
}
