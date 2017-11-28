//указатель массива
#include <iostream>

using namespace std;



 int arr(int x, int y, int z){
    int* p = new int[x];
    p[0] = 0;
    while(y <= x){
        p[y] = p[y-1] + z;
        cout << p[y] << endl;
        y++;
    }
    int i;
    int sum = 0;
    for(i = 0; i <= x; i++){
        sum = sum + p[i];
    } cout << "sum = " << sum << endl;

}
 int main(){
     arr(100, 1, 1);

 }
