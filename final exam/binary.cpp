#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &data, int left, int mid, int right)
{
    int p = left;
    int q = mid + 1;
    vector<int> temp;

    while (p <= mid && q <= right)
    {
        if (data[p] <= data[q])
        {
            temp.push_back(data[p]);
            p++;
        }
        else
        {
            temp.push_back(data[q]);
            q++;
        }
    }

    while (p <= mid)
    {
        temp.push_back(data[p]);
        p++;
    }
    while (q <= right)
    {
        temp.push_back(data[q]);
        q++;
    }

    for (int z = 0; z < temp.size(); z++)
    {
        data[left + z] = temp[z];
    }
}

void mergeSort(vector<int> &data, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(data, left, mid);
        mergeSort(data, mid + 1, right);
        merge(data, left, mid, right);
    }
}

int binarySearch(vector<int> &data, int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key < data[mid])
        {
            high = mid - 1;
        }
        else if (key > data[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int num, key, ch;

    cout << "Enter number of elements: ";
    cin >> num;

    vector<int> arr(num);

    for (int i = 0; i < num; i++)
    {
        cout << "Enter element [" << i << "]: ";
        cin >> arr[i];
    }

    do
    {
        cout << "----- MENU -----" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Sort Array Merge Sort" << endl;
        cout << "3. Search Element (Binary Search)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Array Elements: ";
            for (int x : arr)
                cout << x << " ";
            cout << endl;
            break;

        case 2:
            mergeSort(arr, 0, num - 1);
            cout << "Array Sorted Successfully." << endl;
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> key;

            int index;
            index = binarySearch(arr, num, key);

            if (index == -1)
                cout << "Element NOT found." << endl;
            else
                cout << "Element found at index: " << index << endl;
            break;

        case 4:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choic please Try again." << endl;
        }

    } while (ch != 4);
}
