#include<iostream>
#include<string>
using namespace std;
string binarySearch(int arr[],int key, int l,int r)
{
    int cmp =0;
    while(l<=r)
    {
        ++cmp;
        int mid=l+(r-l)/2;
        if(arr[mid]==key) {

        return "Present " + to_string(cmp);
        }
        else if(arr[mid]<=key)
        l=mid+1;
        else
        r=mid-1;
    }


    return "Not Present " + to_string(cmp);
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
        resultArr[i] = binarySearch(arr, key,0,size-1);

    }

    for(int m = 0; m < T; m++) {
        cout << resultArr[m];
        cout<<endl;
     }
}
