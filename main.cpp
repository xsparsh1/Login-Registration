#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void registration(){
string username ,password;
cout<<"Enter Username: \n";
cin>>username;
cout<<"Enter password: \n";
cin>>password;

ofstream file("user/"+username+".txt");
    if(file.is_open()){
        file<<username<<endl;
        file<<password<<endl;
        file.close();
        cout<<"Registration is successful!\n";
    }
    else{
        cout<<"Error while registration!\n";
    }
}

void login(){
string username,password,u,p;
cout<<"Enter your username: \n";
cin>>username;
cout<<"Enter your Password: \n";
cin>>password;
ifstream file("user/"+username+".txt");
if(file.is_open()){
    getline(file,u);
    getline(file,p);
      if(u==username && p==password){
        cout<<"Welcome "<<username<<" you Logged in Successfully!\n";
    }
    else{
        cout<<"please check your username or password, error while logging in!\n";
    }
    file.close();
}
else{
    cout<<"Login unsuccessful!\n";
}
}

int main()
{
    int choice=0;
    while(true){
        cout<<"-----Login & Registration Menu-----\n";
        cout<<"1. Register\n";
        cout<<"2. Login\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
         switch(choice){
            case 1:
                registration();
                break;
            case 2:
                login();
                break;
            case 3:
                cout<<"Exiting...\n";
                return 0;
            default:
                cout<<"Invalid choice! Try again.\n";
        }
    }
    return 0;
}

