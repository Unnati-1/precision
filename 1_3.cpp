#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

    float n1,n2;
    cout<<"Enter the number 1:";
    cin>>n1;
    cout<<"enter the number 2:";
    cin>>n2;
    cout<<"Fixed :"<<fixed<<n1+n2<<endl;
    cout<<"scientific:"<<scientific<<n1+n2<<endl;
    cout<<"setprecision:"<<setprecision(2)<<n1+n2<<endl;
    cout<<"  This program is preparaed by 22CE082_Unnati";
    return 0;
}
