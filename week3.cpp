#include<iostream>
using namespace std;
class Tamil_nadu
{
    private:
    int house_no,no_of_rooms,length,breadth,height;
    string house_name,city,state;
    public:
    Tamil_nadu()
    {
        cout<<"enter house no";
        get line(cin,house number);
        cout<<"enter house no";
        cin>>"house_no";
        getline(cin,city);
        cout<<"enter state";
        getline(cin,state);
        cout<<"enter no of rooms";
        cin>>num_of_rooms;
        cout<<"enter length,breadth,height";
        cin>>length>>breadth>>height;
            }
        void display()
        {
            cout<<"house name:"<<house_name<<endl;
            cout<<"house  number:"<<house_no<<endl;
            cout<<"city:"<<city<<endl;
            cout<<"state:"<<state<<endl;
            cout<<"Number of room"<<no_of_rooms<<endl;
            cout<<"totall area"<<no_of_rooms*length*breadth<<endl;
        };
        int main()
        {
            int main()
            {
                Tamil_nadu T1;
                T1.display();
                return 0;
            }

        }
}

