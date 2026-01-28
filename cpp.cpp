#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void getRandomArray(int array[], int size) {
    int min = 0, max = 1000000;
    for(int i = 0; i < size; i++) {
        array[i] = rand() % (max + 1 - min) + min;
    }
}

int main() {
    srand(time(NULL)); // Seed for random number generation

    const int size = 20;
    int ins_list[size];

    getRandomArray(ins_list, size);

    clock_t start, end;

    start = clock();
    insertion_sort(ins_list, size);
    end = clock();

    cout << fixed << setprecision(2) << "Insertion Sort CPU time used: " << 1000.0 * (end - start) / CLOCKS_PER_SEC << "ms\n";

    return 0;
}
