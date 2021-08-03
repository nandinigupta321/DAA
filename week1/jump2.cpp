#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string jumpSearch(int arr[], int key, int size)
{
    int step = sqrt(size);
    int prev = 0;
    int cnt = 0;
    while (arr[min(step, size)-1] < key)
    {
        ++cnt;
        prev = step;
        step += sqrt(size);
        if (prev >= size)
            return "Not Present "+to_string(cnt);
    }

    while (arr[prev] < key)
    {
        prev++;
        ++cnt;

        if (prev == min(step, size))

            return "Not Present "+to_string(cnt);
    }
    if (arr[prev] == key)
        ++cnt;
        return  "Present "+to_string(cnt);
    return "Not Present "+to_string(cnt);
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
        resultArr[i] = jumpSearch(arr,key,size);

    }

    for(int m = 0; m < T; m++) {
        cout << resultArr[m];
        cout<<endl;
     }
}
