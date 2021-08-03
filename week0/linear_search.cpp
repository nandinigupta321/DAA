#include<iostream>
#include<string>
using namespace std;
int main()
{
     int T;

     cin>>T;
     string result[T];

     for(int i=0;i<T;i++)
     {
          int size,key,j;
          cin>>size;
          int arr[size];
          for(j=0;j<size;j++)
          {
           cin>>arr[j];
          }

           cin>>key;


           for(j=0;j<size;j++)
           {
                if(arr[j]==key)
                {
                 result[i] = "Present " + to_string(j+1);
                 break;
                 }
            }
            if(j==size)
            {
            result[i] = "Not Present " + to_string(size);
            }
     }

     for(int m = 0; m < T; m++) {
        cout << result[m];
        cout<<endl;
     }
     return 0;
}
