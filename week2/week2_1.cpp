#include<iostream>
using namespace std;
int modified_binary(int arr[], int size, int key, int first_occur)
{
    int l=0, r=size-1;
    int result=-1;
    while(l<=r)
    {
            int mid=l+(r-l)/2;
            if(arr[mid]==key)
            {
                    result=mid;
                    if(first_occur)
                    {
                        r=mid-1;
                    }
                    else
                    {
                        l=mid+1;
                    }
            }
            else if(arr[mid]<key)
                    {
                        l=mid+1;
                    }
                    else
                    {
                        r=mid-1;
                    }
    }
    return result;
}
int main()
{
    int T,key,i,j;
    cin>>T;
    string result[T];
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

    int first= modified_binary(arr,  size,  key, 1);
     int last= modified_binary(arr,  size,  key, 0);
     int count= last-first+1;
     if(first!=-1)
     {
         result[i]= to_string(key) + "-" + to_string(count);

     }
     else
     {
        result[i]= "Key not Present";
     }
    }

    for(int m=0;m<T;m++)
    {
        cout<<result[m];
        cout<<endl;
    }
     return 0;
}
