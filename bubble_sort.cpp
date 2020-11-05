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
    void bsort()
    {
        int t;
        bool swap=false;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                    swap = true;
                }
            }
            if(swap==false)
                break;
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
    obj.bsort();
    cout<<"\nArray after sorting: ";
    obj.printArr();
    return 0;
}