#include<iostream>
#include<string>
using namespace std;

class Result{
    private:
    string name;
    float sgpa;

    public:
    int rollno;
    //default constructor
    Result(){
        rollno = 0;
        name = "Anonymous";
        sgpa = 0;
    }
    //parameterized constructor, unusable in this case.
    Result(int rollno1,string name1, float sgpa1){
        rollno = rollno1;
        name = name1;
        sgpa = sgpa1;
    }

    void insert(){
        cout<<"\nEnter the Roll no:";
        cin>>rollno;
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter the Sgpa:";
        cin>>sgpa;
    }

    void display(){
        cout<<"\n";
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Sgpa:"<<sgpa<<endl;
    }
    ~Result(){};
};

int main(){
    int i=0,choice,roll;
    Result student[5];
    
    do{ 
        cout<<endl;
        cout<<"1:Input details\n";
        cout<<"2:Display details\n";
        cout<<"3:Exit\n";
        cout<<"Choice:";
        cin>>choice;
        switch(choice){
            
        case 1:
            student[i].insert();
            i++;
            break;

        case 2:
            cout<<"\nEnter the roll no:";
            cin>>roll;
            for(int j = 0;j<=5;j++){
                if(j==5){
                    cout<<"No details with "<<roll<<" Roll No\n";
                }
                if(roll == student[j].rollno){
                    student[j].display();
                    break;
                }
            }

        case 3:
            break;

        default:
            cout<<"\nInvalid Choice";
        }
    }while(choice != 3);
    return 0;
}

