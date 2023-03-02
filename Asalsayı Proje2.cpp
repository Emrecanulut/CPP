#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int sayac1=0,sayi,toplam = 0;
   cout<<"sayi :";
   cin>>sayi ;

	for(int i=2;i<=sayi;i++)
	{
		sayac1=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sayac1++;
				break;
			}
		}
		if(sayac1==0)
		{
			cout<<i<<" ";

			toplam = toplam+i;
		}
	}
	cout<<endl;
	cout<<"Toplam :"<< toplam ;

    return 0;
}
