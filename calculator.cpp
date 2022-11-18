#include <iostream>
#include <string>
using namespace std;
double rad(double r){
     int mu = 1;
    if(r < 0){
        mu = -1;
        r = r*(-1);
    }
    int k = 0;
    
    while(r >3.141592653589793238)
    {
        r = r-3.141592653589793238;
        k++;
    }
   
    if(k%2 != 0)
    {
      mu =mu *-1;
    }

    return r*mu;
}
double radcos(double r)
{int mu = 1;
    int k = 0;
    if(r < 0){
        r = r*(-1);
    }
    while(r>3.141592653589793238)
    {
        r = r-3.141592653589793238;
        k++;
    }
    if(k%2 != 0){
        mu = mu*-1;

    }
    return r*mu;
    }
double expo(double w, double r) // w^r
{
    double q = 1;
    for (int i = 1; i <= r; i++)
    {
        q = q * w;
    }
    return q;
}
double factorial(double r) // r!
{
    double q = 1;
    for (int i = 1; i <= r; i++)
    {
        q = q * i;
    }
    return q;
}
double sinx(double e)
{
    double num1 = 0;
    double y = 1;
    double ev = 3;
    double od = 1;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            num1 = num1 - (expo(e, ev) / factorial(ev));
            ev = ev + 4;
        }
        else
        {
            num1 = num1 + (expo(e, od) / factorial(od));
            od = od + 4;
        }
    }
    return num1;
}
double cosx(double e)
{
    double num1 = 0;
    double ev = 2;
    double od = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            num1 = num1 - (expo(e, ev) / factorial(ev));
            ev = ev + 4;
        }
        else
        {
            num1 = num1 + (expo(e, od) / factorial(od));
            od = od + 4;
        }
    }
    return -num1;
}

int main()
{
    int a;
    cout << "to add press 1" << endl;
    cout << "to subtract p(radian)ress 2" << endl;
    cout << "to multiply press 3" << endl;
    cout << "to divide press 4" << endl;
    cout << "to get exponent press 5" << endl;
    cout << "to perform calculations on trignometric functions press 6" << endl;
    cin >> a;
    if (a == 1)
    {
        double num1, num2;
        cout << "enter the two numbers" << endl;
        cin >> num1 >> num2;
        cout << num1 + num2;
    }
    else if (a == 2)
    {
        double num1, num2;
        cout << "enter the two numbers" << endl;
        cin >> num1 >> num2;
        cout << num1 - num2;
    }
    else if (a == 3)
    {
        double num1, num2;
        cout << "enter the two numbers" << endl;
        cin >> num1 >> num2;
        cout << num1 * num2;
    }
    else if (a == 4)
    {
        double num1, num2;
        cout << "enter the two numbers" << endl;
        cin >> num1 >> num2;
        cout << num1 / num2;
    }

    else if (a == 5)
    {
        double num1, num2;
        cout << "enter the two numbers" << endl;
        cin >> num1 >> num2;
        cout << expo(num1, num2);
    }
    else if (a == 6)
    {
        string x;

        cout << "enter s to use sin function" << endl;
        cout << "enter c to use cos function" << endl;
        cout << "enter t to use tan function" << endl;
        cout << "enter cs to use cosine function" << endl;
        cout << "enter sec to use sec function" << endl;
        cout << "enter cot to use cot function" << endl;
        cin >> x;

        if (x == "s")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;

            double u = rad(e);

            cout << sinx(u);
        }
        else if (x == "c")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;
            double u = radcos(e);
            cout << cosx(u);
        }
        else if (x == "t")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;
            double u = rad(e);
            cout << sinx(u) / cosx(u);
        }
        else if (x == "cs")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;
            double u = rad(e);
            cout << 1 / sinx(u);
        }
        else if (x == "sec")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;
            double u = rad(e);
            cout << 1 / cosx(u);
        }

        else if (x == "cot")
        {
            double e;
            cout << "enter the angle(radian)" << endl;
            cin >> e;
            double u = rad(e);
            cout << cosx(u) / sinx(u);
        }

        else
        {
            cout << "wrong choice" << endl;
        }
    }

    else
    {
        cout << "Wrong choice" << endl;
    }

    return 0;
}