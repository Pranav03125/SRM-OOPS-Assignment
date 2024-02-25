/*#include<iostream>
using namespace std;
const int acceleration =32.0;
int main(){
    double time_in_sec;
    cout<<"enter time_in_sec";
    cin>>time_in_sec;
    double distance=0.5*acceleration*time_in_sec*time_in_sec;
    cout<<"distance in free fall in "<<time_in_sec<<" is "<<distance;
    return 0;

}*/

/*
#include<iostream>
using namespace std;
const int pi=3.14;
int main(){
    double radius;
    cout<<"enter the radius of the globe";
    cin>>radius;
    cout<<"the volume is"<<(4.0/3.0)*pi*radius*radius*radius;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int previous_anual_salary;
    int compensation;
    int new_anual_salary;
    int new_monthly_salary;
    cout<<"the previous anual salary is";
    cin>>previous_anual_salary;
    compensation=(11.5*previous_anual_salary)/100;
    cout<<"the  compensationis<<"<<compensation<<endl;
    new_anual_salary=(compensation)+(previous_anual_salary);
    cout<<"the new anual salary is"<< new_anual_salary<<endl;
    cout<<"the new monthly salary is "<<(new_anual_salary)/12.0;
    return 0;
    }

// #include<iostram>


