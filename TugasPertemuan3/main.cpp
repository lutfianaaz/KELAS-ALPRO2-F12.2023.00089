#include <iostream>

using namespace std;

int min(int x, int y){
    if(x < y){
        cout<<"x kurang dari y"<<endl;
        return x;
    }else {
        cout<<"y kurang dari x"<<endl;
        return y;
    }
}
int main()
{
    int x,y;;

    cout << "Nilai x : ";
    cin >> x;

    cout << "Nilai y : ";
    cin >> y;


    min(x,y);

    return 0;
}
