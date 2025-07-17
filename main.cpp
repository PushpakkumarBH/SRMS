#include <iostream>
using namespace std;
void add_record(){
    cout<<"Write code"<<endl;
}
void modify_record(){
    cout<<"Write Code"<<endl;
}
void delete_record(){
    cout<<"Write code"<<endl;
}
void print_record(){
    cout<<"Write Code"<<endl;
}
int main() {
    int x;
    while (true)
    {  
        cout<<"Welcome to Student Record Management System "<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"Choose your Choice :"<<endl;
        cout<<"1. Add to the record"<<endl;
        cout<<"2. Modify the record"<<endl;
        cout<<"3. Delete from the record"<<endl;
        cout<<"4. Print Student details"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cin>>x;
        cout<<x<<endl;
        switch(x){
            case 1:
                cout<<"You have chosen to Add to the record"<<endl;
                add_record();
                break;
            case 2:
                cout<<"You have chosen to Modify the record"<<endl;
                modify_record();
                break;
            case 3:
                cout<<"You have chosen to Add to the record"<<endl;
                delete_record();
                break;
            case 4:
                cout<<"You have chosen to Modify the record"<<endl;
                print_record();
                break;
        }
    }
    return 0;
}