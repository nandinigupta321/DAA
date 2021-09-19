#include<iostream>
using namespace std;
string check(int arr[],int size, int key)
{
    for(int i=0;i<(size-1);i++)
        {
              for(int j=(i+1);j<size;j++)
              {
                 if(arr[i]+arr[j]==key)
                 {
                    return to_string(arr[i])+" "+to_string(arr[j]);
                 }
              }

        }
         return "No Such Pair Exist ";
}
int main()
{
    int i,j,T,size,key;
    cin>>T;
    string resultarr[T];
    for(i=0;i<T;i++)
    {
        cin>>size;
        int arr[size];
        cout<<"ELEMENTS:";
        for(j=0;j<size;j++)
        {
          cin>>arr[j];
        }
        cin>>key;
         resultarr[i]=check(arr,size,key);

    }
    for(int m = 0; m < T; m++) {
        cout << resultarr[m];
        cout<<endl;
     }
 return 0;

}
