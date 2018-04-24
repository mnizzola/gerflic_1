#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100



#include <string.h>



int main()
{
 int i,j;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];
    inicializarSeriesEstado(listaDeSeries, TAMSERIE);

    inicializarSeriesHardCode(listaDeSeries);
    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    /*

    1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.



    */

    for(i=0; i<5; i++){
       printf("Serie: %s\n",listaDeSeries[i].nombre);
    }

    for(i=0; i<5; i++){
       printf("usuario: %s\n",listaDeUsuarios[i].nombre);
    }

   for(i=0; i<5; i++)
    {

        printf("\n usuario: %s \n",listaDeUsuarios[i].nombre);

        for(j=0; j<5; j++)
        {
            if (listaDeSeries[j].idSerie == listaDeUsuarios[i].idSerie)
            {
                printf("Serie: %s\n",listaDeSeries[i].nombre);
            }
        }


    }

    for(i=0; i<5; i++)
    {

        printf("\n Serie: %s \n",listaDeSeries[i].nombre);

        for(j=0; j<5; j++)
        {
            if (listaDeUsuarios[j].idSerie == listaDeSeries[i].idSerie)
            {
                printf("usuario: %s\n",listaDeUsuarios[i].nombre);
            }
        }


    }








    return 0;
}
