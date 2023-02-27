#include <iostream>
 
using namespace std;
 
float patient(int days, float rate, float medcharges, float HScharges);
float patient(float medcharges, float HScharges);
 
int main(int argc, char *argv[])
{
                char ans;
                cout<<"Enter I for in-patient or O for out-patient: ";
                cin>>ans;
                cout<<endl;
                if(ans == 'I' || ans == 'i')
                {
                                int days;
                                float rate, medcharges, HScharges;
                                float total;
                                cout<<"Number of days spent in the hospital: ";
                    cin>>days;
                    cout<<endl;
                cout<<"Daily rate: ";
                    cin>>rate;
                    cout<<endl;
                    cout<<"Hospital  medication charges: ";
                    cin>>medcharges;
                    cout<<endl;
                    cout<<"Charges for hospital services: ";
                    cin>>HScharges;
                    cout<<endl;
                total = patient(days, rate, medcharges, HScharges);
                cout<<"Patient total charges $"<<total;
    cout<<endl;
                }
                else if(ans == 'O' || ans == 'o')
                {
                                float medcharges, HScharges;
                                float total;
                    cout<<"Hospital  medication charges: ";
                    cin>>medcharges;
                    cout<<endl;
                    cout<<"Charges for hospital services: ";
                    cin>>HScharges;
                    cout<<endl;
                total = patient(medcharges, HScharges);
                cout<<"Patient total charges $"<<total;
    cout<<endl;  
                }
                return 0;
}
 
float patient(int days, float rate, float medcharges, float HScharges)
{
                float totalcharges;
                float temp;
 
                if(medcharges < 0 || HScharges < 0 || rate < 0 || days < 0)
                {
                    cout<<"Only Positive Number Allowed";
                    cout<<endl;
                    exit(0);
                }
                temp = medcharges + HScharges;
                totalcharges = days  * rate;
                totalcharges += temp;
                return totalcharges;       
}
 
float patient(float medcharges, float HScharges)
{
                float totalcharges;
 
                if(medcharges < 0 || HScharges < 0)
                {
                   cout<<"Only Positive Number Allowed";
                    cout<<endl;
                    exit(0);
                }
                totalcharges = medcharges + HScharges;
                return totalcharges;       
}