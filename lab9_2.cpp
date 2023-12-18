#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void printO(double n, double m){
   if(n>0&&m>0){
   for(int i=0; i<n; i++){
   for(int a=0; a<m; a++){
   cout <<"O";
   }
   cout << "\n";
   }}else {
   cout << "Invalid input";
   }}
   

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
