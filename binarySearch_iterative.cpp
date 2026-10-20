#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target){
    int l = 0, r = n-1;
    
    while (l <= r){
        int mid = l + (r-l)/2;
        
        if (data[mid] == target) return mid;
        else if ((data[mid] < target)) l = mid + 1;
        else r = mid - 1;
    }
    return -1; 
}

int main(){
    int data[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int target = 6;

    int hasil = binarySearch(data, n, target);

    if (hasil != -1){
        cout << "Data ditemukan pada indeks: " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

}
