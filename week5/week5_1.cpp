#include<iostream>
using namespace std;
string countmax(string str, int size)
{
     int count[26]={};
     for(int i=0;i<size;i++)
     {
       count[str[i]-'a']++;

     }
     int maxelement=0;
     char maxchar;
     for(int i=0;i<26;i++)
     {
           if(count[i]>maxelement)
           {
             maxelement=count[i];
             maxchar='a'+i;
           }

     if(maxelement>1)
        {
           to_string(maxchar)+"-"+to_string(maxelement);
        }
      else
      {
          return "No duplicates Present";
      }
     }
}
int main()
{
    int i,T,size;
    cout<<"TEST CASES:";
    cin>>T;
    string resultarr[T];
    for(i=0;i<T;i++)
    {
        cout<<"SIZE:";
        cin>>size;
        string str;
        cout<<"ELEMENTS:";
        cin>>str;
         resultarr[i]=countmax(str,size);

    }
    for(int m = 0; m < T; m++) {
        cout << resultarr[m];
        cout<<endl;
     }
 return 0;

}
