Google Drive Video: https://drive.google.com/file/d/1ych9YV4fpQm6p7TCT3o8Y3dO1ahlYkSG/view?usp=sharing 

Code:
#include <iostream>
#include <iomanip>
using namespace std;

// Pass by pointer (array) - read only
int calculateSum(const int scores[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) total += scores[i];
    return total;
}

// Pass by reference - avoids copying, read only
double calculateAverage(const int& sum, const int& size) {
    return 1.0 * sum / size;
}

// Pass by pointer (array) - modifies original array
void addBonus(int scores[], int size, int bonus) {
    for (int i = 0; i < size; i++) scores[i] += bonus;
}

// Pass by pointer
int findMinimum(const int* scores, int size) {
    int minVal = scores[0];
    for (int i = 1; i < size; i++) {
        if (scores[i] < minVal) minVal = scores[i];
    }
    return minVal;
}

// Pass by pointer (array)
int countHighPerformers(const int scores[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] >= 80) count++;
    }
    return count;
}

int main() {
    const int SIZE = 10;
    int ary[SIZE] = { 75, 88, 62, 95, 50, 82, 70, 91, 45, 78 };

    cout << "Original scores: ";
    for (int i = 0; i < SIZE; i++) cout << ary[i] << " ";
    cout << endl;

    int sum = calculateSum(ary, SIZE);
    double avg = calculateAverage(sum, SIZE);

    cout << "Sum: " << sum << endl;
    cout << "Average: " << fixed << setprecision(2) << avg << endl;

    addBonus(ary, SIZE, 10);

    cout << "Scores after +10 bonus: ";
    for (int i = 0; i < SIZE; i++) cout << ary[i] << " ";
    cout << endl;

    cout << "Minimum score: " << findMinimum(ary, SIZE) << endl;
    cout << "High performers (>=80): " << countHighPerformers(ary, SIZE) << endl;

    return 0;
}

