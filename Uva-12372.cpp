//Check it out guys (why my ans is shown wrong
//UVa-12372 by shakib Limon
#include<iostream>
using namespace std;

main()
{
    int test;
    cin>>test;

    int cases =0;
    while(test)
    {
        int m,n,o;
        cin>>m>>n>>o;
        cout<<"Case"<<++cases<<endl;
        if(m<=20&&n<=20&&o<=20)
            cout<<"good"<<endl;
        else
            cout<<"bad"<<endl;
        cout<<"\n";
    }
}
