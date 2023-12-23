#include "iostream"
#include "main.h"

using namespace std;

inline void lineDown(int times=1){
    for(int line_down_times = 0; line_down_times < times; line_down_times++){
        cout << "\n";
    }
}

int main(){

    int problem;

    for ( int repeats = 0; repeats < 100; repeats++ ){
        cout << "Введите номер лабы: ";
        cin >> problem;

        switch (problem) {

            case 1:
                main1();
                break;

            case 2:
                main2();
                break;

            case 3:
                main3();
                break;

            case 4:
                main4();
                break;
//


        }


    }


    return 0;
}