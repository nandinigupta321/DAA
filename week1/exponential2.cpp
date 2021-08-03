#include <iostream>
#include<string>
using namespace std;

int binarySearch(int &cnt, int arr[], int, int, int);
string exponentialSearch(int arr[], int size, int key)
{
    int cnt = 0;
    if (arr[0] == key)
        return 0;
    int i = 1;
    while (i < size && arr[i] <= key) {
        i = i*2;
        ++cnt;
    }

    int result= binarySearch(cnt, arr, i/2, min(i, size-1), key);

     if(result == -1) {
        return "Not Present "+to_string(cnt);
        }
        else
            return "Present "+to_string(cnt);
     }


int binarySearch(int &cnt, int arr[], int l, int r, int key)
{
    if (r >= l)
    {
        ++cnt;
        int mid = l + (r - l)/2;
        if (arr[mid] == key) {
           ++cnt;
            return mid;
        }

        if (arr[mid] > key)
            return binarySearch(cnt, arr, l, mid-1, key);


        return binarySearch(cnt, arr, mid+1, r, key);
    }
    ++cnt;

    return -1;
}
int main()
{
    int T,key,i,j;
    cin>>T;
    string resultArr[T];
    for(i=0;i<T;i++)
    {

        int size;
        cin>>size;
        int arr[size];
        for(j=0;j<size;j++)
        {
          cin>>arr[j];
        }
        cin>>key;
        resultArr[i] = exponentialSearch(arr,size,key);

    }

    for(int m = 0; m < T; m++) {
        cout << resultArr[m];
        cout<<endl;
     }
}
