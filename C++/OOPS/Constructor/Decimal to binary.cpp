/*
Write a program to convert decimal number into binary number using constructor.

Input : n=100

Output : binary number  = 1100100
*/

#include<iostream>
using namespace std;
class Decimal_Number
{
	public:
		Decimal_Number(int n)
		{
		int i=1,j=n,Binary_Number=0;


				for(j=n;j>0;j=j/2)
				{
					Binary_Number=Binary_Number+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<"binary number = "<<Binary_Number;
			}
		};
		int main()
		{
		   Decimal_Number obj(100);

		}
