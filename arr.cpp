 //обычный массив
#include <iostream>

using namespace std;

int arr(int x, int y, int z){
    int a[x];
    a[0] = 0;
    while(y <= x){
        a[y] = a[y-1] + z;
        cout << a[y] << endl;
        y++;
    }
    int i;
    int sum = 0;
    for(i = 0; i <= x; i++){
        sum = sum + a[i];


    } cout << "summ = " << sum << endl;

}


int main(){
 arr(100, 1 ,1);
    return 0;

}
