#include <iostream>
using namespace std;

int main() {

    int arry[][3]{1,2,3,4,5,6,7,8,9};

    for (int i = 0;i<(sizeof(arry)/sizeof(arry[0]));i++){
        for(int j = 0;j<(sizeof(arry[0])/sizeof(arry[0][0]));j++){
            cout<<arry[i][j]<<" ";
        }
    }

        return 0;
}