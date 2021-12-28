#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{

  srand(time(0));
  int l=1,d,b=0,co=0,a[27];

  //initialised value 1 to 25
  for(int i=1;i<26;i++)
  {
    a[i-1]=i;
  }

  //randomizing array
  for(int i=24;i>0;i--)
  {
    int index=rand() % i;
    int temp=a[i];
    a[i]=a[index];
    a[index]=temp;
  }

  //printing table
  l=1;
  for(int i=0;i<25;i++)
  {
    cout<<a[i];
    if(a[i]>9){
    cout<<" | ";}
    else{
    cout<<"  | ";}
    if(l%5==0)
        cout<<"\n\n";
    l++;
  }


  while(1)
  {
    switch(b)
    {
      case 0:
        cout<<"\t\t\t\t";
        break;
      case 1:
        cout<<"\033[1;35mb\033[0m\n\t\t\t\t";
        break;
      case 2:
        cout<<"\033[1;35mbi\033[0m\n\t\t\t\t";
        break;
      case 3:
        cout<<"\033[1;35mbin\033[0m\n\t\t\t\t";
        break;
      case 4:
        cout<<"\033[1;35mbing\033[0m\n\t\t\t\t";
        break;
    }
    cout<<"\n\t\t\t\t";
    cin>>d;
    for(int i=0;i<25;i++)
    {
    if(d==a[i])
      a[i]=0;
  }

  l=1;
  cout<<"\t\t\t________________________\n\t\t\t|";
  for(int i=0;i<25;i++)
  {
    if(a[i]==0)
  {
    cout<<"\033[1;31m0\033[0m";
  }else
  {
    cout<<a[i];
  }
    if(a[i]>9){
    cout<<" | ";}
    else{
    cout<<"  | ";}
    if(l%5==0)
  {
      cout<<"\n\t\t\t-------------------------\n\t\t\t|";

  }
    l++;
  }
  int i=0;
  b=0;

  while(i<25)
  {
    if(a[i]==0&a[i+1]==0&a[i+2]==0&a[i+3]==0&a[i+4]==0)
  {
    b=b+1;
  }
    i=i+5;
  }
    i=0;
    while(i<25)
  {
    if(a[i]==0&a[i+5]==0&a[i+10]==0&a[i+15]==0&a[i+20]==0)
  {
    b=b+1;
  }
    i=i+1;
  }

  if(b>4)
  {
  cout<<"\033[1;35mbingo\033[0m\n\t\t\t\t";
  cout<<"\n\033[1;5;31m                 _     _                   \033[0m\n";
  cout<<"\033[1;5;31m                | |__ (_)_ __   __ _  ___  \033[0m\n";
  cout<<"\033[1;5;31m                | |_ \\| | |_ \\ / _| |/ _ \\ \033[0m\n";
  cout<<"\033[1;5;37m                | |_) | | | | | (_| | (_) |\033[0m\n";
  cout<<"\033[1;5;31m                |_.__/|_|_| |_|\\__, |\\___/ \033[0m\n";
  cout<<"\033[1;5;31m                               |___/       \033[0m\n";

  cout<<"\n\033[1;35m                 _     _                   \033[0m\n";
  cout<<"\033[1;35m                | |__ (_)_ __   __ _  ___  \033[0m\n";
  cout<<"\033[1;34m                | |_ \\| | |_ \\ / _| |/ _ \\ \033[0m\n";
  cout<<"\033[1;37m                | |_) | | | | | (_| | (_) |\033[0m\n";
  cout<<"\033[1;36m                |_.__/|_|_| |_|\\__, |\\___/ \033[0m\n";
  cout<<"\033[1;34m                               |___/       \033[0m\n";
  cout<<"\n\n\n\t\t\t\t\t\t\t\033[1;30m     © created by as_if\033[0m\n";
  break;
  }
  }
  cin>>noo;
}