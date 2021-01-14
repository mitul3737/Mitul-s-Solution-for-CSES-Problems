#include<bits/stdc++.h>
using namespace std;

int main(){
    //making input and output faster
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m;
    cin>>n>>m;
    map<int,int> tickets;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        tickets[t]++;//ticket[t] =0 and ++ dea 1 hobe.. ex ticket[3]; mane by default er second value 0 . eivabe ticket[3]++ deya tai er value 1 hobe, temni ticket[5]++ er value 1etc. kintu ticket[5]++ 2bar ashay er value 2 hobe
    }
    //checking valuesof tickets
    //for(auto p:tickets){
    //    cout<<p.first<<" = "<<p.second<<endl;
    //}
    for(int i=0;i<m;i++){
        int price;
        cin>>price;
        auto it=tickets.upper_bound(price);
        //doing this to restrict if we get the beginnning value cz er theke pichano  r somvobna
        if(it==tickets.begin()){
            cout<<-1<<"\n";
            continue;}
        it--;
        cout<<(*it).first<<"\n";
        (*it).second--;
        //minus korar por 2nd vlaue 0 hole then oit erase kore dibo chirrokaler jnne
        if((*it).second==0){
            tickets.erase(it);
        }



    }
    return 0;
}
