#include <iostream>
// #include "exercise1.h"
/*using namespace std;
main(){
    cout <<"The value of pi : 3.1416  ";
    cout<<"\nThe value of pi 4 decimal place of total width 8:| 3.1416|";
    cout <<"\nThe value of pi 4 decimal place of total width 8 : |--3.1416|";
    cout <<"\nThe value of pi 4 decimal place of total width 10 : |----3.1416|";
    cout <<"\nThe value of pi in scientific format is : 3.1416e+00";
    cout <<"\nStatus in number : 0";
    cout <<"\nStatus in alphabet : false";

}

//q2
#include<math.h>
using namespace std;
int main(){
    double s1,s2,s3;
    float a,s;
    cout<<"Input the length of 1st side of the triangle :";
    cin>>s1;
    cout<<"\nInput the length of 2nd side of the triangle :";
    cin>>s2;
    cout<<"\nInput the length of 3rd side of the triangle :";

    cin>>s3;
    s=(s1+s2+s3)/2;
    a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"\nThe area of the triangle is:"<< a;
    return 0;

}
q4
int main(){
    int n,num;
    using namespace std;
    cout << "Print the multiplication table of a number upto :";
    cin >> n;
    cout << "Input a number :";
    cin >> num;
    for(int i=1;i<=n;i++){
        cout << num <<" x " << i << " = " << num*i << "\n";
    }

    return 0;
}
#include <iostream>
#include <math.h>
#define R 6371.01
using namespace std;
int main()
{
double d, la1, la2, lo1, lo2,r;
cout << "\n\n Print the distance between two points on the surface of earth:\n";
cout << "-----------------------------------------------------------------------\n";
cout << " Input the latitude of coordinate 1: ";
cin >> la1;
cout << " Input the longitude of coordinate 1: ";
cin >> lo1;
cout << " Input the latitude of coordinate 2: ";
cin >> la2;
cout << " Input the longitude of coordinate 2: ";
cin >> lo2;
r = 0.01745327;
la1 = la1 * r;
la2 = la2 * r;
lo1 = lo1 * r;
lo2 = lo2 * r;
d = R * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));
cout << " The distance between those points is: " << d << "\n";
return 0;
}
q6
#include<iostream>
using namespace std;
int main(){
    int a,b,sum,count,c;
    count=0;
    cout<<"enter digit1";
    cin>>a;
    cout<<"enter digit2";
    cin>>b;
    sum=a+b;
    while(c!=0){
        sum/10;
        count+=1;
    }
    cout<<"the no of digit is"<< count;
    return 0;
}
q7
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
int a;
long b;
char c;
float d;
double e;
cin >> a >> b >> c >> d >> e ;
cout << a <<" "<< b <<" "<< c <<" ";
cout << std::fixed << std::setprecision(3) << d <<" ";
cout << std::fixed << std::setprecision(9) << e ;
return 0;
}
*/
#include <iostream>
using namespace std;
int main() {
float c ;
cout<<"Enter the Temperature in celsius:";
cin >> c;
cout<<"Temperature in degree fahrenheit is: "<< (9*c/5)+32;
}


#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
char slash = '/';
int a, b, c, d,result1,result2;
cout << "Enter The 1st Fraction = ";
cin >> a >> slash >> b;
cout << "Enter The 2nd Fraction = ";
cin >> c >> slash >> d;
result1 = (a*d) + (b*c);
result2 = b*d;
cout << "Result = " << result1 << "/" << result2<<endl;
}
  
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double number1 = 0.123456;
double number2 = 23.987;
double number3 = -123.456;
cout << left << setw(15) << "a. " << number1 << endl;
cout << right << setw(12) << "b. " << fixed << setprecision(2) <<
number2 << endl;
cout << setw(10) << "c. " << scientific << setprecision(4) << number3 <<
endl;
return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
cout << "\n\n Formatting the output :\n";
cout << "----------------------------\n";
double pi = 3.14159265;
cout << fixed << setprecision(4);
cout <<" The value of pi : " << pi << endl;
cout << " The value of pi 4 decimal place of total width 8 : |" << setw(8)
<< pi << "|" << endl;
cout << " The value of pi 4 decimal place of total width 10 : |" <<
setw(10) << pi << "|"<< endl;
cout << setfill('-');
cout << " The value of pi 4 decimal place of total width 8 : |" << setw(8)
<< pi << "|" << endl;
cout << " The value of pi 4 decimal place of total width 10 : |" <<
setw(10) << pi << "|"<< endl;
cout << scientific;
cout <<" The value of pi in scientific format is : " << pi << endl;
bool done = false;
cout <<" Status in number : " << done << endl;
cout << boolalpha;
cout <<" Status in alphabet : " << done << endl;
cout << endl;
return 0;
}



    

#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter the number:";
cin >> x;
cout << " " << x << x << x << x << endl;
cout << " " << x << " " << " " << x << endl;
cout << " " << x << " " << " " << x << endl;
cout << " " << x << " " << " " << x << endl;
cout << " " << x << " " << " " << x << endl;
cout << " " << x << x << x << x << endl;
cout << endl;
return 0;
}