#include <iostream>
using namespace std;
class Cola{
	public:
		int i;
		Cola *n;
		Cola *s;
	Cola(){
		i=0;
		s=NULL;
	}
	void armarCola();
	void mostrarCola(Cola*);
	void eliminarCola(Cola*);
	void cicloCola(Cola*);		
};
void Cola::armarCola(){
	cout<<"****COLA****"<<endl;
	Cola *a;
	int b;
	cout<<"Ingresa el tamaño"<<endl;
	cin>>b;
	int max=0;
	Cola *aux=NULL;
	a=new Cola();
	aux=a;
	cout<<"Nodos : "<<endl;
	while(b>max){
		cin>>aux->i;
		aux->s=new Cola();
		aux=aux->s;
		max++;
	}
	mostrarCola(a);
	eliminarCola(a);
}
void Cola::mostrarCola(Cola* a){
	Cola *aux=a;
	cout<<"***METODO COLA*** : "<<endl;
	while(aux->s!=NULL){
		cout<<aux->i<<"\t";
		aux=aux->s;
	}
	cout<<endl;	
}
void Cola::eliminarCola(Cola* a){
	int r;
	Cola *aux;
	do{
		
		aux=a;
		aux=aux->s;
	    a->s=NULL;
		a=aux;
		mostrarCola(a);
		cout<<"1.- Eliminar Nodo  2.-Salir"<<endl;
		cin>>r;
	}
	while(r==1);
}
int main(){
	Cola *j;
	j->armarCola();
		return 0;
}
