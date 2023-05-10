#include<iostream>
#include<string>
#include<vector>

using namespace std;

void add(string a, string b){
    vector<char> result;
    int i = a.length()-1;
    int j = b.length()-1;
    int carry = 0;
    while(i>=0 || j>=0){
        int aval = (int)a[i];
        int bval = (int)b[j];
        if(i<0){
            aval =0;
        }
        if(j<0){
            bval =0;
        }

        int sum = aval + bval + carry;
        int num = sum%2;
        carry = num/2; 
        result.push_back((char)num);
        i--; j--;
    }
    if(carry>0){
        result.push_back((char)1);
    }
    for(int i=result.size()-1; i>=0; i--){
        cout<<result[i]<<" ";
    }
    
}


int main()
{   cout<<"started"<<endl;
    string a = "111011";
    string b = "101010";
    cout<<"5415ended"<<endl;
    add(a,b);
    cout<<"ended"<<endl;


return 0;
}