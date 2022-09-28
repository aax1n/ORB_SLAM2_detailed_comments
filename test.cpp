//
// Created by sunshine on 22-7-25.
//
#include<iostream>

using namespace std;


void test01(int& a, int& b)
{
    if (a>0)
        cout << "step1 通过并继续"<< endl;
        if (a>1)
            cout<<"step2 通过并继续"<< endl;
            if (a>b)
                cout<<"step3 通过并继续"<< endl;
                 a=b;



}

void test02()
{
    int a = 10;
    int b = 2 ;
    test01(a,b);
    cout << "a = " << a << "b = " << b << endl;
}
int main()
{

    test02();
    system("pause");
    return 0;

}
