#include<bits/stdc++.h> 

using namespace std; 

//cach Tuanbink lam
/*
int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        long long n;
        cin >> n;
        int le=0, chan=0;
        int suml=0, sumc=0;
        for(int i=1; i<=n; i++){
            int k=n%10;
            if(k%2==0){
                //chan++;
                sumc+=k;
            }
            else{
                //le++;
                suml+=k;
            }
            n/=10;
        }
        if((suml-sumc)%11==0) cout << "1" << endl;
        else cout << "0" << endl;
    } 
}
*/

//cach nay lay tren codeptit ^^

bool check(string str){ 
    int dodai = str.length(); 
    int sumchan = 0,sumle = 0; 
    for(int i = 0; i < dodai ; i++){ 
        if(i%2==0) sumchan+=(str[i]-'0'); 
        else sumle += (str[i]-'0'); 
    } 
    int hieu = sumle - sumchan; 
    if(hieu%11==0) return true; 
    else return false; 
} 

int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        string str; 
        cin>>str; 
        if(check(str)) cout<<1<<endl;
        else cout<<0<<endl;
    } 
    return 0;
}

