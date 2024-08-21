// Palindrom.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int no;
        int b = 0, j = 0;
        for (int i = 0; i < n; i++) {
            no = a[i];
            while (no > 0)
            {
                no = no / 10;
                b++;
            }
            
            int N[b], c;
            for (int j = 0; j < b; j++) {
                //445
                //44
                //4
                c = a[i] % 10;//5 4

                N[j] = c;
                //  cout<<N[j]<<"\n";

                c = (a[i] - c) / 10;
                a[i] = c;
            }

            b = 0;
        }
        int N[b];
        while (a[j] != 0) {
            for (int i = 0; i < b; i++) {
                if (N[i] != N[b - i]) {
                    return 0;
                }
                j++;
                return 1;
            }
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            Solution obj;
            cout << obj.PalinArray(a, n) << endl;
        }
    }
   
}

/*
   {
    int x,t=0,b,c=0;
    for(int i=0;i<n;i++){
    b=a[i];
    while(a[i]>0){
    x=a[i]%10;
    t=(t*10)+x;
    a[i]=a[i]-x;
    a[i]=a[i]/10;
    }
    if(t!=b){
    c++;
    }
    t=0;
    }
    if(c==0)
    return 1;
    else
    return 0;
  }















*/