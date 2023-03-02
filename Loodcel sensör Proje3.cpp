#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(void)

{   vector<int> iv(50) ; // vektör tanýmladým .
    int idizi[50];// 50 hanelik bir dizi tanýmladým
    int id;//deðiþken tanýmladým
    int EnFazla = 1024 , EnAz = 0;// sayýlarýn alacaðý deðerlerin aralýklarýný 0,1 olarak tanýmladým.
    float islem ;// islem deðiþkeni olarak tanýmladým fonksiyon icin.
    srand(time(0));// random sayý atayabilmek için gerekti .
for(int i=0;i<50;i++){//döngüy sokarak 1 ile 50 arasýndaki sayýlarý kullandým.
    int randx = rand()%(EnFazla-EnAz+1)+EnAz;
    iv[i] = randx;

    islem = (randx-2)/512; // islemi gerçekleþtirdim
    cout << islem << endl;
}
cout<<islem<<endl ;

for(id = 0 ; id<50; id++){//vektor atamasýný gerçekleştirdim.

    islem = (iv[id]-2)/512; // islemi gerçekleþtirdim
    cout << islem << endl;
}
cout<<endl ;

    return 0;
}

