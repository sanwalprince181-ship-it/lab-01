// TASK 01

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//void printArray(T arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//
//template <typename T>
//void selectionSort(T arr[], int size)
//{
//    for (int i = 0; i < size - 1; i++)
//    {
//        int smallSub = i;
//
//        for (int j = i + 1; j < size; j++)
//        {
//            if (arr[j] < arr[smallSub])
//            {
//                smallSub = j;
//            }
//        }
//
//        T temp = arr[i];
//        arr[i] = arr[smallSub];
//        arr[smallSub] = temp;
//    }
//}
//
//int main()
//{
//    int intArray[5] = { 64, 25, 12, 22, 11 };
//
//    cout << "Original integer array: ";
//    printArray(intArray, 5);
//
//    selectionSort(intArray, 5);
//
//    cout << "Sorted integer array: ";
//    printArray(intArray, 5);
//
//    string stringArray[4] = {
//        "apple",
//        "orange",
//        "banana",
//        "grape"
//    };
//
//    cout << "\nOriginal string array: ";
//    printArray(stringArray, 4);
//
//    selectionSort(stringArray, 4);
//
//    cout << "Sorted string array: ";
//    printArray(stringArray, 4);
//
//    return 0;
//}



                   // task 02



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//int linearSearch(T arr[], int size, T key)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == key)
//        {
//            return i;
//        }
//    }
//
//    return -1;
//}
//
//template <typename T>
//void printSearchResult(int index, T key)
//{
//    if (index != -1)
//    {
//        cout << key << " found at index " << index << endl;
//    }
//    else
//    {
//        cout << key << " not found." << endl;
//    }
//}
//
//int main()
//{
//    int intArray[5] = { 64, 25, 12, 22, 11 };
//    int intKey = 12;
//
//    int intIndex = linearSearch(intArray, 5, intKey);
//
//    printSearchResult(intIndex, intKey);
//
//    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
//    float floatKey = 1.62;
//
//    int floatIndex = linearSearch(floatArray, 4, floatKey);
//
//    printSearchResult(floatIndex, floatKey);
//
//    string stringArray[4] = {
//        "apple",
//        "orange",
//        "banana",
//        "grape"
//    };
//
//    string stringKey = "banana";
//
//    int stringIndex = linearSearch(stringArray, 4, stringKey);
//
//    printSearchResult(stringIndex, stringKey);
//
//    return 0;
//}


             // task 03

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//int binarySearch(T arr[], int size, T key)
//{
//    int low = 0;
//    int high = size - 1;
//
//    while (low <= high)
//    {
//        int mid = (low + high) / 2;
//
//        if (arr[mid] == key)
//        {
//            return mid;
//        }
//        else if (arr[mid] < key)
//        {
//            low = mid + 1;
//        }
//        else
//        {
//            high = mid - 1;
//        }
//    }
//
//    return -1;
//}
//
//template <typename T>
//void printSearchResult(int index, T key)
//{
//    if (index != -1)
//    {
//        cout << key << " found at index " << index << endl;
//    }
//    else
//    {
//        cout << key << " not found." << endl;
//    }
//}
//
//int main()
//{
//    int intArray[5] = { 11, 12, 22, 25, 64 };
//    int intKey = 22;
//
//    int intIndex = binarySearch(intArray, 5, intKey);
//
//    printSearchResult(intIndex, intKey);
//
//    float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
//    float floatKey = 2.71;
//
//    int floatIndex = binarySearch(floatArray, 4, floatKey);
//
//    printSearchResult(floatIndex, floatKey);
//
//    string stringArray[4] = {
//        "apple",
//        "banana",
//        "grape",
//        "orange"
//    };
//
//    string stringKey = "grape";
//
//    int stringIndex = binarySearch(stringArray, 4, stringKey);
//
//    printSearchResult(stringIndex, stringKey);
//
//    return 0;
//}
