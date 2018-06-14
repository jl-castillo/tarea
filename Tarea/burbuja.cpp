#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void f_entrada(int a[],int n);
void f_mostrar(int a[],int n);
void f_burbuja(int a[],int n);

int main(int argc, char const *argv[])
{

	int a[10], lim;

	cout<<"cuantos numeros desea ingresar? ";
	cin>>lim;
	f_entrada(a,lim);
	f_mostrar(a,lim);
	f_burbuja(a,lim);
	cout<<"elementos ordenados"<<endl;
	f_mostrar(a,lim);
	

	return 0;
}

void f_entrada(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"ingresa la contidad numero "<<i+1<<": "<<endl;
		cin>>a[i];
	}
}
void f_mostrar(int a[],int n){
	int i;
	for (i=0;i<n;i++){
    	cout << a[i]<< endl;;
	}
}

void f_burbuja(int a[], int n){
	int i, j, k;
	for (int i = 0; i<n-1 ; i++){
    	for (int j = 0; j<n-1 ; j++){
    		if(a[j] < a[j+1]){
	      		k=a[j+1]; 
				a[j+1]=a[j]; 
				a[j]=k;
			}
    	}	
	}
}

void f_insercion(int a[], int n){

}