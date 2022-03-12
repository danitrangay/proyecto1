#include<iostream>
#include<cstdio>
using namespace std;

float promedio(int valores[], int cantidad) {
    int i;
    float suma = 0.0;

    for (i = 0; i < cantidad; ++i)
        suma += valores[i];

    return suma / (float) cantidad;
}


int main (){
	string productos [100];

	
	int o=0;
	int i =0;
	while(o !=4){
		//system("cls");
		cout<<"1. ingresar datos del estudiante: "<<endl;
		cout<<"2. modificar nombre del estudiante:"<<endl;
		cout<<"3. mostrar estudiantes: "<<endl;
		cout<<"4. ingresar datos de la materia: "<<endl;
		cout<<"5. salir"<<endl;
		cin>>o;
		string nombre;
		string nuevo;
	 
		switch(o){
			case 1:
			cout<<"ingrese el nombre del estudiante";
			cin>>nombre;
			productos[i]=nombre;
			i++;
			break;
			
			
			case 2: 
			cout<<"ingrese el nombre a modificar";
			cin>>nombre;
			
			cout<<"ingrese nuevo nombre";
			cin>>nuevo;
			for(int j=0;j<i;j++){
				if(productos[j]==nombre){
					productos[j]=nuevo;
					cout<<"nombre modificado correctamente";
					break;
				}
			}
			break;
			case 3: 
			for(int j=0;j<i;j++){
				cout<<"-> "<<(j+1)<<productos[j]<<endl;
			}
			break;
			case 4:
				int notas[10];
    			char nombre[20];
    			char opcion[3];
   				 int n, i;

		    do {
		        printf("Ingrese nombre del alumno: ");
		        scanf("%s", nombre);
		
		        printf("Cuantas notas tiene %s? ", nombre);
		        scanf("%d", &n);
		
		        for (i = 0; i < n; ++i) {
		            printf("  Nota %d: ", i + 1);
		            scanf("%d", &notas[i]);
		        }
		
		        printf("El promedio de %s es %.1f\n", nombre, promedio(notas, n));
		
		        printf("Desea calcular mas promedios (si/no)? ");
		        scanf("%s", opcion);
		
		    } while (opcion[0] == 's' || opcion[0] == 'S');
		
		    return 0;
					break;
					
			}

}
}
