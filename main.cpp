#include <iostream>
#include<string>
using namespace std;
struct data{
    string st_name;
    string st_roll;
    string branch;
} datas[100];
int ind=0;
void add_record(){
    string st_name,st_roll,branch;
    cout<<"Enter Name of Student :"<<endl;
    cin>>datas[ind].st_name;
    cout<<"Enter Universal Serial Number (USN)"<<endl;
    cin>>datas[ind].st_roll;
    cout<<"Enter Branch"<<endl;
    cin>>datas[ind].branch;
    cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    ind++;
}
void modify_record(){
    string usn;
    cout<<"Please Enter the USN of the student you want to Modify."<<endl;
    cin>>usn;
    bool flag=false;
    for(int i=0;i<ind;i++){
        if(usn == datas[i].st_roll){
            cout<<"Record Found"<<endl;
            cout<<"Enter Name of the student"<<endl;
            cin>>datas[i].st_name;
            cout<<"Enter Branch"<<endl;
            cin>>datas[i].branch;
            flag=true;
        }
    }
    if(flag){
        cout<<"Thanks for the details your data has been Updated."<<endl;
    }
    else{
        cout<<"Record Not Found"<<endl;
    }
    cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
}
void delete_record(){
    string usn;
    cout<<"Please Enter the USN of the student you want to Delete."<<endl;
    cin>>usn;
    bool flag=false;
    for(int i=0;i<ind;i++){
        if(usn == datas[i].st_roll){
            cout<<"Record Found"<<endl;
            flag=true;
            for(int j=i;j<ind;j++){
                datas[j]=datas[j+1];
            }
            ind--;
        }
    }
    if(flag){
        cout<<"Record Deleted Sucessfully."<<endl;
    }
    else{
        cout<<"Record Not Found"<<endl;
    }
    cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
}
void print_record(){
    if(ind>0){
        for(int i=0;i<ind;i++){
            cout<<"Student "<<i+1<<" details"<<endl;
            cout<<"Name of Student "<<datas[i].st_name<<endl;
            cout<<"Student Universal Serial Number (USN) "<<datas[i].st_roll<<endl;
            cout<<"Branch "<<datas[i].branch<<endl;
            cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
        }
    }
    else{
        cout<<"There are no Records to print"<<endl;
    }

}
int main() {
    int x;
    bool flag=true;
    while (flag)
    {  
        cout<<"Welcome to Student Record Management System "<<endl;
        cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
        cout<<"Choose your Choice :"<<endl;
        cout<<"1. Add to the record"<<endl;
        cout<<"2. Modify the record"<<endl;
        cout<<"3. Delete from the record"<<endl;
        cout<<"4. Print Student details"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
        cin>>x;
        cout<<x<<endl;
        switch(x){
            case 1:
                cout<<"You have chosen to Add to the record."<<endl;
                add_record();
                break;
            case 2:
                cout<<"You have chosen to Modify the record."<<endl;
                modify_record();
                break;
            case 3:
                cout<<"You have chosen to Delete the record."<<endl;
                delete_record();
                break;
            case 4:
                cout<<"You have chosen to print all record."<<endl;
                print_record();
                break;
            case 5:
                flag=false;
                cout<<"Adios Amigo's Bye..!!";
                break;
        }
    }
    return 0;
}