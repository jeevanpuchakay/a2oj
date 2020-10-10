#include<bits/stdc++.h>
#define vec vector<vector<int>>

using namespace std;
using namespace std::chrono;
int ccc = 0;
void print(vec a, int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
vec add(vec a, vec b, int n)
{
    vec c(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j]+  b[i][j];
        }
    }
    return c;
}
vec sub (vec a, vec b, int n)
{
    vec c(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j] = a[i][j]-b[i][j];
        }
    }
    return c;
}

vec f(vec x, vec y, int n)
{
    ccc++;
    vec z(n, vector<int>(n,0));
        z[0][0] = x[0][0]*y[0][0];
    if(n == 1){
        return z;
    }
    else{
        int m = n/2;
        vec a (m,vector<int>(m,0));
        vec b (m,vector<int>(m,0));
        vec c (m,vector<int>(m,0));
        vec d (m,vector<int>(m,0));
        vec a1 (m,vector<int>(m,0));
        vec b1 (m,vector<int>(m,0));
        vec c1 (m,vector<int>(m,0));
        vec d1 (m,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<n/2){
                    if(j<n/2){
                        a[i][j] = x[i][j];
                    }
                    else{
                        b[i][j-(n/2)] = x[i][j];
                    }
                }
                else{
                    if(j<n/2){
                        c[i-(n/2)][j] = x[i][j];
                    }
                    else d[i-(n/2)][j-(n/2)] = x[i][j];
                }
            }
        }
        //print(a,m);print(b,m);print(c,m);print(d,m);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<n/2){
                    if(j<n/2){
                        a1[i][j] = y[i][j];
                    }
                    else{
                        b1[i][j-(n/2)] = y[i][j];
                    }
                }
                else{
                    if(j<n/2){
                        c1[i-(n/2)][j] = y[i][j];
                    }
                    else d1[i-(n/2)][j-(n/2)] = y[i][j];
                }
            }
        }
        //print(a1,m);print(b1,m);print(c1,m);print(d1,m);
        vec x1 = f(a,sub(b1,d1,m),m);//print(x1,m);
        vec x2 = f(add(a,b,m),d1,m);
        vec x3 = f(add(c,d,m),a1,m);
        vec x4 = f(d,sub(c1,a1,m),m);
        vec x5 = f(add(a,d,m),add(a1,d1,m),m);
        vec x6 = f(sub(b,d,m),add(c1,d1,m),m);
        vec x7 = f(sub(a,c,m),add(a1,b1,m),m);
        vec C11 = add(sub(add(x4,x5,m),x2,m),x6,m);
        vec C12 = add(x1,x2,m);
        vec C21 = add(x3,x4,m);
        vec C22 = sub(sub(add(x1,x5,m),x3,m),x7,m);
        vec C(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<n/2){
                    if(j<n/2){
                        C[i][j] = C11[i][j];
                    }
                    else C[i][j] = C12[i][j-m];
                }
                else{
                    if(j<n/2){
                        C[i][j] = C21[i-m][j];
                    }
                    else
                        C[i][j] = C22[i-m][j-m];
                }
            }
        }
        return C;
    }
}
int main()
{
    int n;cin>>n;
    vec a(n,vector<int>(n,0));
    vec b(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>b[i][j];
    }
    auto start = high_resolution_clock::now();
    vec c = f(a,b,n);
    auto stop = high_resolution_clock::now();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<duration.count()<<endl;
    cout<<"number of times function have been called : "<<ccc<<endl;
}
