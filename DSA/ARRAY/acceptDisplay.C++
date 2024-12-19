#include<iostream>
using namespace std;
int mini(int a[],int size){
    int min_ele=a[0];
    for(int i=1;i<size;i++)
    {
        if(min_ele>a[i]){
            min_ele=a[i];
        }
        
    }
    
    return min_ele;
}

int maxi(int a[],int size){
    int max_ele=a[0];
    for(int i=0;i<size;i++){
        
        if(a[i]>max_ele){
            
            max_ele=a[i];
        }
    }
    return max_ele;
}



int main(){
  int a[5];
  int i;
  int size=sizeof(a)/sizeof(a[0]);
cout<<"Enter a array elements :";
for ( i = 0; i < 5; i++)
{
  cin>>a[i];
}

for ( i = 0; i < 5; i++)
{
  cout<<a[i]<<" ";
}
cout<<endl<<"size of a is:"<<sizeof(a)<<endl;

int min_ele=mini(a,size);
cout<<"min element:"<<min_ele<<endl;
int max_ele=maxi(a,size);
cout<<"max element:"<<max_ele;
  return 0;
}