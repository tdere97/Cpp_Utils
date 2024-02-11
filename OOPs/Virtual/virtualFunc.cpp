#include<iostream>
using namespace std;
class Instrument{
    public:
    virtual void playing(){
        cout<<"Instrument is Playing ..."<<endl;
    }
};
class Guitar: public Instrument{
    public:
    void playing(){
        cout<<"Guitar is Playing ..."<<endl;
    }
};

int main(){
    Instrument* i;
    Instrument i1;
    Guitar g;
    i=&g;
    i->playing();
    i1.playing();
}