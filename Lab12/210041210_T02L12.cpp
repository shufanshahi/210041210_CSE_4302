#include<iostream>
using namespace std;

template <class atype>

atype* arrayMultiplication(atype* arr1, atype* arr2,atype* arr3,int n)
{
    for(int i=0; i<n; i++)
    {
        arr3[i] = arr1[i]*arr2[i];
    }

    return arr3;
}

int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {1,2,3,4};
    float arr3[2] = {1.5,1.5};
    float arr4[2] = {2.1,2.2};
    int *ans1 = new int[4];
    float *ans2 = new float[2];
    ans1 = arrayMultiplication(arr1,arr2,ans1,4);


    for(int i=0;i<4;i++)
    cout<<ans1[i]<<" ";

    cout<<endl;

    ans2 = arrayMultiplication(arr3,arr4,ans2,2);
    for(int i=0;i<2;i++)
    cout<<ans2[i]<<endl;
    // cout<<"ciw"<<endl;
}