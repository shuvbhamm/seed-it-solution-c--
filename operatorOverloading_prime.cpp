#include <iostream>
using namespace std;
class prime{
    private:
        int n;
    public:
        void input();
        void operator++();
        void display();
};
void prime::input(){
    cout<<"enter any prime number : ";
    cin>>n;
}
void prime::operator++(){
    int count=0;
    while(1){
        n++;
        count=0;
        for(int i=1;i<=(n/2);i++){
            if(n%i==0){
                count++;
            }
        }
        if(count==1){
            break;
        }
    }
}
void prime::display(){
    cout<<"\n---------Prime---------\n";
    cout<<n;
}
main(){
    prime p;
    p.input();

    p.display();
    ++p;
    p.display();
    ++p;
    p.display();
    ++p;
    p.display();
    ++p;
    p.display();

}