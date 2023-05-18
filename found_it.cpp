#include<iostream>
using namespace std;

bool found_it( int sax[], int size, int num ){

    for(int i = 0; i < size; i++) {
        
        if(sax[i] == num ){
            return 1;
        }
    
    }
    return 0;
}

int main(){
    
    int num;

    int arr[10] = { 1, -5, -10, 15, 45, -26, 36, 85, -100, 89 };

    cout << "\n Enter the number to be searched for : ";
    cin >> num;

    bool found = found_it( arr, 10, num );

    if( found ) {
        cout << "\n The number has been found !!! " << endl;
    }
    else
    cout << "\n Number not found !!! "<< endl;

    return 0;
}