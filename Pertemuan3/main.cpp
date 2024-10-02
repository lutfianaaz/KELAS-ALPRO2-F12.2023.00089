#include <iostream>

using namespace std;

//tipe data fungsi, nama fungsi (parameters)
int max(int a, int b){ //max = nama fungsi. Parameter
    if(a > b){
        cout<< a <<endl; //output bisa diganti
        return a;
    }else {
        cout<< b <<endl;
        return b;
    }
}
int main()
{
    int jumlah;

    cout <<"Masukkan Jumlah : ";
    cin>> jumlah;

    for(int i = 0; i < jumlah; i++){
        cout<< "Hello World!" <<endl;
    }
    int i=0;
    while(i<jumlah){
        cout<<"Hello World!"<<endl;
        i++;


    int y;
    y = 5;

    if(jumlah>y){
        cout<< "X lebih dari Y"<<endl;
    }else if (jumlah<y){
        cout<< "X kurang dari Y"<<endl;
    }else{ //bisa juga else if (x==y)
        cout<< "X sama dengan Y"<<endl;
    }
    */

    int x= 5;
    int y= 20;

    if(x > y){
        cout<<x<< " lebih dari "<<y<<endl;
    }else if (x < y){
        cout<<x<< " kurang dari "<<y<<endl;
    }else{
        cout<<x<< " sama dengan "<<y<<endl;
    }

    for(int i = 0; i <10; i++){
        x++;
        y++;
        max(x,y);
    }
    return 0;
}
