#include<bits/stdc++.h>
using namespace std;

class price
{
    private:
        string n;
        float k[7];
        float sum;

    public:
        price() 
        {
            cin >> n;
            int s=0;
            for(int i=0;i<7;i++) 
            {
                float a;
                cin>>a;
                s+=a;
                k[i]=a;
            }
            sum=s;
        }
        string ret_n() 
        {
            return n;
        }
        float ssum() 
        {
            return sum;
        }
        float ret_day_amount(int day) 
        {
            return k[day];
        }
};

void solve(price k[],int papers, int limit){
    for(int i=0;i<papers-1;i++) 
    {
        for(int j=i+1;j<papers;j++) 
        {
            if (d[i].ssum()+k[j].ssum()<=limit) 
            {
                cout<<"{"<<k[i].ret_n()<<","<<k[j].ret_n()<<"}";
            }
        }
    }
    cout<<endl;
}


int main() 
{
   
    int total_price,total_cases;
    cin>>total_price;
    price k[total_price];
    float budget;
    cin>>budget;
    solve(k,total_price,budget);
    return 0;
}
