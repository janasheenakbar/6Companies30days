string decodedString(string s){

stack<string> st; for (auto &ch : s)

{

if(ch != '1')

string str: str.

st.push(str);

push_back(ch);

} else

{

vector<string> v:

while (!st.empty() and

{

v.push_back(st.top

st.pop():

st.top() != "[")

());

} reverse(v.begin(),v.end

());

st.pop();

string number = "";

while (!st.empty() and

st.top() >="0" and st.top()<="9")

number += st.top():

st.pop():

} reverse(number.begin

(), number.end());

&ch v) comb

// cout<<number<<" ";

int val=stoi(number); // cout<<val<<"\n";

string comb = ""; for (auto

+= ch;

string y = for (int i=0;i<val; i+

+) y += comb;

}

}

st.push(y):

return st.top(); }
