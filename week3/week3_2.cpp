#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int);
string selection_sort(int arr[], int);
int swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void display(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}
string selection_sort(int arr[], int size)
{
int cmp = 0;
int swapCount = 0;
int chk = 0;
int small, index;
for(int i=0; i< size -1; i++)
    {
        chk=0;
        small = arr[i];
        for(int j=(i+1); j<size; j++)
        {
            cmp++;
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            swap(arr[i], arr[index]);

            ++swapCount;
        }
    }

    return "comparison = " +to_string(cmp) + "\n" + "swap = " + to_string(swapCount);
}
int main()
{
    int T;
       string res[T];
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
          cin>>arr[j];
        }
       string  res= selection_sort(arr,size);
       display(arr,size);
        cout<<res;
    }

return 0;

}
