#include "iostream"
#include "main.h"

using namespace std;


inline void lineDown(int times=1){
    for(int line_down_times = 0; line_down_times < times; line_down_times++){
        cout << "\n";
    }
}

int main1();
int main2();
int main3();
int main4();



int main(){

    int problem;

    for ( int repeats = 0; repeats < 100; repeats++ ){
        cout << "Введите номер лабы: ";
        cin >> problem;

        switch (problem) {

            case 1:
                main1();

            case 2:
                main2();

            case 3:
                main3();

            case 4:
                main4();



        }



    }


    return 0;
}