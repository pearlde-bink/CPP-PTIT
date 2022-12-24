#include <bits/stdc++.h>
using namespace std;

 struct Employ{
    char code[20];
    char name[20];
    int hs;
    float lcb;
    float pc, salary;
};

//Employ myEmploy[3];

void in(Employ myEmploy[3]){
    for(int i=0; i<3; i++){
        cin >> myEmploy[i].name >> myEmploy[i].lcb >> myEmploy[i].hs >> myEmploy[i].pc;
    }
}

void out(Employ myEmploy[3]){
    for(int i=0; i<3; i++){
        cout << myEmploy[i].name << endl;
        myEmploy[i].salary=myEmploy[i].lcb * myEmploy[i].hs + myEmploy[i].pc;
        cout << myEmploy[i].salary << endl;
    }
}

void min(Employ myEmploy[3]){
    Employ employ1=myEmploy[0];
    for(int i=0; i<3; i++){
        if(myEmploy[i].salary<=employ1.salary) employ1=myEmploy[i];
    }
    cout << employ1.name << employ1.salary << endl;
}

void max(Employ myEmploy[3]){
    Employ employ2=myEmploy[0];
    for(int i=0; i<3; i++){
        if(myEmploy[i].salary>=employ2.salary) employ2=myEmploy[i];
    }
    cout << employ2.name << employ2.salary;
}

int main()
{
    /*int n;
    cin >> n;*/
    Employ myEmploy[3];  
    
    for(int i=0; i<3; i++){
        cin >> myEmploy[i].name >> myEmploy[i].lcb >> myEmploy[i].hs >> myEmploy[i].pc;
    }
    
    for(int i=0; i<3; i++){
        cout << myEmploy[i].name << endl;
        myEmploy[i].salary=myEmploy[i].lcb * myEmploy[i].hs + myEmploy[i].pc;
        cout << myEmploy[i].salary << endl;
    }
    
    Employ employ1=myEmploy[0];
    for(int i=0; i<3; i++){
        if(myEmploy[i].salary<=employ1.salary) employ1=myEmploy[i];
    }
    cout << employ1.name << employ1.salary << endl;
    
    Employ employ2=myEmploy[0];
    for(int i=0; i<3; i++){
        if(myEmploy[i].salary>=employ2.salary) employ2=myEmploy[i];
    }
    cout << employ2.name << employ2.salary;
    /* in( myEmploy);
    out( myEmploy);
    min( myEmploy);
    max( myEmploy);*/
}
