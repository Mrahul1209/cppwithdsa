#include <iostream>
#include <vector>
using namespace std;

class Sorting
{
public:
    void selectionsort(vector<int> &a)
    {
        int size = a.size();
        for (int i = 0; i < size - 1; i++)
        {
            int min_index = i;
            for (int j = i + 1; j < size; j++)
            {
                if (a[j] < a[min_index])
                    min_index = j;
            }
            int temp = a[min_index];
            a[min_index] = a[i];
            a[i] = temp;
        }
    }

    void merge(vector<int> &a, int start, int mid, int end)
    {
        int i = start, j = mid + 1;
        vector<int> temp;

        while (i <= mid && j <= end)
        {
            if (a[i] <= a[j])
            {
                temp.push_back(a[i++]);
            }
            else
            {
                temp.push_back(a[j++]);
            }
        }

        while (i <= mid)
        {
            temp.push_back(a[i++]);
        }
        while (j <= end)
        {
            temp.push_back(a[j++]);
        }

        for (int k = 0; k < temp.size(); k++)
        {
            a[start + k] = temp[k];
        }
    }

    void mergeSort(vector<int> &a, int start, int end)
    {
        if (start < end)
        {
            int mid = (start + end) / 2;
            mergeSort(a, start, mid);
            mergeSort(a, mid + 1, end);
            merge(a, start, mid, end);
        }
    }

    int binarySearch(vector<int> &a, int start, int end, int target)
    {
        if (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (target < a[mid])
            {
                return binarySearch(a, start, mid - 1, target);
            }
            else if (target > a[mid])
            {
                return binarySearch(a, mid + 1, end, target);
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

    void display(const vector<int> &a)
    {
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};