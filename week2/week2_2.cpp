#include<iostream>
using namespace std;
string three_Indices(int arr[], int size)
{

    for(int i=0;i<size;i++)
    {


        for(int j=i+1;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {


                if(arr[i]+arr[j]==arr[k])
                {

                   return to_string(i + 1)  + "," + to_string(j + 1)  + "," + to_string(k + 1);
                }


            }

        }
    }

        return  "Not Found";

}
int main()
{

    int T,i,j,k;
    cin>>T;
    string resultarr[T];
    for (i=0;i<T;i++)
    {
        int size;
        cin>>size;
        int arr[size];
        for(j=0;j<size;j++)
        {
          cin>>arr[j];

        }
       resultarr[i]= three_Indices (arr,  size);
    }
     for(int m=0;m<T;m++)
    {
        cout<<resultarr[m];
        cout<<endl;
    }
}

