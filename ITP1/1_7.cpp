#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    vector<int> va,vb;
    bool flag = true;

    while(true){
        cin >> a;
        cin >> b;
        if(a==0&&b==0){
            break;
        }
        va.push_back(a);
        vb.push_back(b);
    }

    vector<int> result(va.size(),0);
    
    for(int i=0;i<va.size();i++){
        int n = va[i];
        int x = vb[i];
        for(int k=1;k<=n;k++){
            for(int l=1;l<=n;l++){
                for(int m=1;m<=n;m++){
                    if(k==l || l==m || k==m){ continue; }
                    if(k+l+m==x){
                        result[i]++;
                    }
                }
            }
        }
    }

    for(int i=0;i<result.size();i++){
        cout << result[i]/6 << endl;
    }
}