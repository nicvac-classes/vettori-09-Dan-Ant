#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i;
    float sommah, sommav, minh, minv;
    cout << "Quanti giri devono eseguire?" << endl;
    cin >> n;
vector<float> tempoh, tempov; 
i=0;
while (i<n)
{
    tempoh[i] =(150+rand()321-150) /100;
    i=i+1;

}
i=0;
while (i<n)
{
    tempov[i] =(150+rand()321-150) /100;
    i=i+1;

}
sommah=0;
i=0;
while (i<n)
{
   sommah=sommah+tempoh[i];
   i=i+1;
}
sommav=0;
i=0;
while (i<n)
{
   sommav=sommah+tempov[i];
   i=i+1;
}
if(sommah<sommav)
{
    cout<< "Ha vinto Hemilton";
}
else
{
    cout << "Ha vinto Verstappen";
}
i=0;
while (i<n)
{
   if(i=0)
   {
    minv=tempov[i];
   }
   else
   {
    if(tempov[i]<minv)
    {
        minv=tempov[i];
    }
   }
  i=i+1; 
}
i=0;
while (i<n)
{
   if(i=0)
   {
    minh=tempoh[i];
   }
   else
   {
    if(tempoh[i]<minh)
    {
        minh=tempoh[i];
    }
   }
  i=i+1; 
}
if(minh<minv)
{
    cout << "Hemilton ha il giro più veloce ";

}
else
{
    cout << "Verstappen ha il giro più veloce";
}

}


