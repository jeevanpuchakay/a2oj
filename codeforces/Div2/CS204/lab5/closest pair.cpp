#include<bits/stdc++.h>
using namespace std;
bool com(pair<double,double>p1,pair<double, double> p2)
{
    return p1.second < p2.second;
}
double f(vector<pair<double,double>> v, int l, int r)
{
    if(r-l+1<=3){
        double mnm = 10000000000.0;
        for(int i=l;i<=r;i++){
            for(int j=(i+1);j<=r;j++){
                double x = abs(v[i].first-v[j].first);
                double y = abs(v[i].second - v[j].second);
                mnm = min(mnm,sqrt(x*x + y*y));
            }
        }
        return mnm;
    }
    else{
        int mid = (r+l)/2;
        double x = v[mid].first;
        double y = v[mid].second;
        double left = f(v,l,mid);
        double right = f(v,mid+1,r);
        double dlr = min(left,right);
        vector<pair<double,double>>split;
        for(int i=l;i<=r;i++){
            double q1 = abs(x-v[i].first);
            if(q1<=dlr){
                split.push_back(make_pair(v[i].first,v[i].second));
            }
        }
        sort(split.begin(),split.end(),com);
        for(int i=0;i<split.size();i++){
            for(int j=i+1;j<i+8;j++){
                if(j<split.size()){
                    double q1 = abs(split[i].first - split[j].first);
                    double q2 = abs(split[i].second - split[j].second);
                    dlr = min(dlr, sqrt(q1*q1 + q2*q2));
                }
            }
        }

        return dlr;
    }
}

int main()
{
    int n;cin>>n;
    vector<pair<double,double>>v;
    for(int i=0;i<n;i++){
        double q1,q2;cin>>q1>>q2;
        v.push_back(make_pair(q1,q2));
    }
    sort(v.begin(),v.end());
    cout<<fixed<<setprecision(12)<<f(v,0,n-1);
}

/*
6
2 3
12 30
40 50
5 1
12 10
3 4
*/
