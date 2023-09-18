#include <iostream>

using namespace std;
struct karakter{
string isim ;
int can;
int guc;
int hiz;
};

int main()
{
    karakter One;
    cout<<"Karakterinizin ismini giriniz :"<<endl;
    cin>>One.isim;
     cout<<"Karakterinizin can degerini  giriniz :"<<endl;
    cin>>One.can;
     cout<<"Karakterinizin gucunu  giriniz :"<<endl;
    cin>>One.guc;
    cout<<"Karakterinizin hýzýný giriniz :"<<endl;
    cin>>One.hiz;


    cout<<"karakteriniz olusturuldu !!!"<<endl ;

    cout<<"karakter adi :"<<One.isim<<endl ;
     cout<<"karakter caný:"<<One.can<<endl ;
      cout<<"karakter gucu:"<<One.guc<<endl ;
       cout<<"karakter hýzý :"<<One.hiz<<endl ;
    return 0;
}
