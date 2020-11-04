#include<iostream>
using namespace std;
class BubbleSort
{
    public:
    int a[5];
    void getArr()
    {
        cout<<"Enter 5 elements:\n";
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    void qsort()
    {
        int t;
        for(int i=0;i<5;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
    }
    void printArr()
    {
        for(int i=0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
    }
}obj;
int main()
{
    obj.getArr();
    cout<<"Array before sorting: ";
    obj.printArr();
    obj.qsort();
    cout<<"\nArray after sorting: ";
    obj.printArr();
    return 0;
}