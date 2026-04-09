#include <iostream>
#include <string>
using namespace std;

template <class T>
class ArrayHelper {
public:
    ArrayHelper() {}
    ~ArrayHelper() {}

    void Display(T* array, int size, int numberOfElementsInOneLine, int oneElementLength) {
        cout << "displaying the container:\n";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
            int spaceCount = oneElementLength - to_string(array[i]).length();
            for (int j = 0; j < spaceCount; j++) cout << " ";
            if ((i + 1) % numberOfElementsInOneLine == 0) {
                cout << endl;
            }
        }
        cout << endl;
    }

    int MaxIndex(T* array, int size) {
        int maxIndex = 0;
        for (int i = 1; i < size; i++) {
            if (array[i] > array[maxIndex]) {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    int MinIndex(T* array, int size) {
        int minIndex = 0;
        for (int i = 1; i < size; i++) {
            if (array[i] < array[minIndex]) {
                minIndex = i;
            }
        }
        return minIndex;
    }

    T* Merge(T* firstArray, int firstArraySize, T* secondArray, int secondArraySize) {
        T* mergedArray = new T[firstArraySize + secondArraySize];
        for (int i = 0; i < firstArraySize; i++) {
            mergedArray[i] = firstArray[i];
        }
        for (int i = 0; i < secondArraySize; i++) {
            mergedArray[firstArraySize + i] = secondArray[i];
        }
        return mergedArray;
    }

    void Sort(T* array, int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    Swap(array[j], array[j + 1]);
                }
            }
        }
    }

    void Swap(T& operand1, T& operand2) {
        T temp = operand1;
        operand1 = operand2;
        operand2 = temp;
    }
};
