#include <bits/stdc++.h>
using namespace std;

long long minProblemsToSolve(vector<long long> questions)
{
    long long i;
    vector<long long> v;
    
    for(i = 0; i < questions.size() ; i++)
    {
        if(v.size() == 7)
           break;
        
        if(questions[i] >= 1 and questions[i] <= 7)
           v.push_back(questions[i]);
    }
    
    return (i);
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,x;
	    vector<long long> q;
	    cin>>n;
	    for(long long i = 0; i < n ; i++)
	    {
	        cin>>x;
	        q.push_back(x);
	    }
	    cout<<minProblemsToSolve(q)<<endl;
	}
	return 0;
}
