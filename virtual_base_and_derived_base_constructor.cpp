#include<iostream>
using namespace std;
class member{
    protected:
        int Admisson_No,Roll_No;
    
    public:
        member(){}
        member(int a, int b){
            cout<<"WELCOME to our school .Now you are a member of our school"<<endl;
            Admisson_No=a;
            Roll_No=b;
        }
        
        void display_data(){
            cout<<"The Admisson no is:"<<Admisson_No<<" and Roll number is: "<<Roll_No<<endl;
        }
};
class student:virtual public member{
    protected:
        int english,hindi,science,maths,result;
    public:
        student(int a, int b){
            cout<<"Your admisson has been aproved . You will be getting admisson no and roll no"<<endl;
            Admisson_No=a;
            Roll_No=b;
        }
        void get_marks(int a,int b, int c,int d){
            english=a;
            hindi=b;
            science=c;
            maths=d;
        }
        void get_result(){
            result=(english+hindi+science+maths)/4;
            cout<<"The percentage is:"<<result<<endl; 
        }
        void display_result(){
            if (result>=33){
                cout<<"The student has passed"<<endl;
            }
            else{
                cout<<"The student has failed . Please wait for supplymentary exam"<<endl;
            }
        }
};

class teacher:virtual public member{
    protected:
        int evaluetion, percentage_passed,overall;
    public:
        teacher(int a,int b){
            cout<<"CONGO your recruitment has been aproved "<<endl;
            Admisson_No=a;
            Roll_No=b;
        }
        void get_score(int a,int b){
            evaluetion=a;
            percentage_passed=b;
        }
        void get_overall(){
            overall=evaluetion+percentage_passed;
            cout<<"Your overall score is:"<<overall<<endl;
        }
        void display_score(){
            if (overall>=40){
                cout<<"Your grade has been upgraded"<<endl;
            }
            else{
                cout<<"No change in grade. Please work hard next time"<<endl;
            }
        }
};



int main(){
    teacher Nandita(001,56),Madhu(001,57),Sushil(003,58);
    student Karan(84,10),Geeta(85,11),Aray(86,12),Kajal(87,13),Gray(88,14);
    Nandita.display_data();
    Nandita.get_score(76,84);
    Nandita.get_overall();
    Nandita.display_score();
    Karan.display_data();
    Karan.get_marks(66,86,74,44);
    Karan.get_result();
    Karan.display_result();
    
    
    
    return 0;
}