#include<iostream>
using namespace std;
string display(int arr[],int);
string insertion_sort(int arr[], int size)

{
        int i,j,temp,cmp=0,sft=0;
        for(i=1;i<size;i++)
        {
             temp=arr[i];
             j=i-1;
             while((j>=0)&&(arr[j]>temp))
             {
                 cmp++;

                     arr[j+1]=arr[j];
                     sft++;
                     j=j-1;

             }
             arr[j+1]=temp;
             sft++;
        }

        string s = display(arr,size);
         return s + "comparisons =" + to_string(cmp) + "\n" + "shifts =" + to_string(sft)+ "\n";
}
    string display(int arr[],int size)
    {
        string s ;
        for(int i=0;i<size;i++)
            {
                s+= to_string(arr[i]) + " ";
            }
        return s + "\n";


}
int main()
{

    int T,i,j;
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

       resultarr[i]= insertion_sort(arr,  size);
    }
     for(int m=0;m<T;m++)
    {
        cout<<resultarr[m];
        cout<<endl;
    }
}
