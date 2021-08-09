#include<iostream>
using namespace std;
int count_Difference(int arr[], int size, int key)
{

  int  count =0;
     for(int i=0;i<size;i++)
     {
         for(int j=i+1;j<size;j++)
         {

             if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
                count++;
         }
     }
     return count;
}
int main()
{
    int T,i,j,key;
    int resultarr[T];
    cin>>T;
    for (i=0;i<T;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(j=0;j<size;j++)
        {
          cin>>arr[j];

        }
        cin>>key;
       resultarr[i]= count_Difference (arr,  size, key);
    }

    for(int m=0;m<T;m++)
    {
        cout<<resultarr[m];
        cout<<endl;
    }
}
