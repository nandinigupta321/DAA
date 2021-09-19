#include<iostream>
using namespace std;
voidcommonElement(int arr1[], int arr2[], int m, int n)
{
 for(int i=0,j=0;i<m&&j<n;)
 {
       if(arr1[i]==arr2[j])
       {
            cout<<arr1[i]<<" ";
            i++;
            j++;
       }
       else
       {
           if(arr1[i]<arr2[j])
           i++;
           else
           j++;
       }
 }
}
int main()
{
 int m;
 cin>>m;
 int arr1[m];
 for(int i=0;i<m;i++)
 cin>>arr1[i];
 int n;
 cin>>n;
 int arr2[n];
 for(int j=0;j<n;j++)
 cin>>arr2[j];
 commonElement(arr1,arr2,m,n);
}
