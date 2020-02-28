// program to compute additive of a number inverse in given modulo n.
//Code by Bipin Timalsina
#include<iostream>
using namespace std;
int main(){
	printf("\n ==== To compute Additive Inverse modulo n === \n");
	int a,n,addInv;
	cout<<"\n Enter value of module (n) \t: ";
	cin>>n;
	cout<<"\n Enter the number of which you want to find additive inverse in modulo " <<n <<" :\t";
	cin>>a;
	if(a==0)
		addInv=0;
	else
		addInv = n-a;
	cout<<"\n The  additive inverse of " <<a <<" in modulo " <<n <<" is :"<<"\t"<<addInv;
	return 0;
}
