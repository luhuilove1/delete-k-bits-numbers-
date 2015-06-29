#include<iostream>
using namespace std;
int FindIndex(char Num[], int StartIndex, int EndIndex)
{
	int maxi;
	char max = '0';
	for (int i = StartIndex; i <= EndIndex; i++)
	{
		if (Num[i] >= max)
		{
			max = Num[i];
			maxi = i;
		}
	}
	return maxi;
}
int BigNum(char Num[], char Bignum[], int k)
{
	int maxi = -1;
	int i = 0;
	while (1)
	{
		maxi = FindIndex(Num, maxi + 1, k);
		Bignum[i] = Num[maxi];
		i++;
		if (maxi == k)
			break;
		else
			k++;
	}
	int m = maxi + 1;
	while (Num[m] != '\0')
	{
		Bignum[i++] = Num[m++];
	}
	Bignum[i] = '\0';
	return 0;
}
int main()
{
	char Num[20];
	char Bignum[20];
	int k;
	cout << "input the number\n";
	cin >> Num;
	cout << "input the number of bit U wanna remove\n";
	cin >> k;
	BigNum(Num, Bignum, k);
	cout << Bignum;
}
