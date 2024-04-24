#include <iostream>

using namespace std;

int main()
{
    int Array_1[5]={10,20,30,40,50};
    int Array_2[8]={1,2,3,4,5,6,7,8};
    int Array_3[100];
    int i,j,sizeone,sizetwo,k;
    k=0;
    int m=0;
    sizeone=5;
    sizetwo=8;
    for(i=0;i<sizeone;i++)
    {
        Array_3[i]=Array_1[i];
        k++;
    }

    int newsize=k+sizetwo;
    for(int j=k;j<newsize;j++)
    {
        Array_3[j]=Array_2[m];
        m++;
    }

    for(int l=0;l<newsize;l++)
    {
        cout<< Array_3[l];
    }




}
