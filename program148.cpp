#include<iostream>
using namespace std;

void Display(char str[])
{
	int i = 0;

	while(*str != '\0')
	{
		cout<<*str<<endl;
		str++;
	}
}

int main()
{
	char Arr[20];

	cout<<"Enter string"<<endl;
	scanf("%[^'\n']s",Arr);		// ^ means jo paryant enter yet nahi toparyant data ghya.

	Display(Arr);		// Display(100);

	return 0;
}