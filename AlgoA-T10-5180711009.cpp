#include<iostream>//5180711009
using namespace std;

double input(string text){
double nilai;
cout<<"input nilai "<<text<<" : ";cin>>nilai;
return nilai;

}

void grade(double nilai)
{
if (nilai >80)
    cout<<"A";
else
if (nilai >60)
    cout<<"B";
else
if (nilai >40)
    cout<<"C";
else
if (nilai >20)
    cout<<"D";
else
    cout<<"E";
}
main (){
double uts,uas,tugas,absen,nilai;
string nhuruf;
cout<<"Renanda Setia Pratama : 5180711009\n";
uts   =input("  UTS");
uas   =input("  UAS");
tugas =input("TUGAS");
absen =input("ABSEN");
nilai =(uts*20/100)+(uas*30/100)+(tugas*35/100)+(absen*15/100);
cout<<"Nilai Akhir Anda  : "<<nilai<<endl;
cout<<"Nilai Anda        : ";grade(nilai);

}
