// ejercicios c++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>


/*Ejercicio 1: Sumar puntos al jugador
Pedir al usuario los puntos iniciales y los puntos ganados.Mostrar el total.

void MostrarTotalDePuntos(int PtsINI, int PtsGan);

int main()
{
    int PuntosIniciales = 0;
    int PuntosGanados = 0;
    int PuntosTotales = 0;

   
    std::cout << "Ingrese puntos iniciales: ";
    std::cin >> PuntosIniciales;
    std::cout << "Ingrese puntos ganados: ";
    std::cin >> PuntosGanados;
    
    MostrarTotalDePuntos(PuntosIniciales, PuntosGanados);
   

    return 0;
}


void MostrarTotalDePuntos(int PtsINI, int PtsGan)
{
    int resultado = PtsINI + PtsGan;
    std::cout << "El puntaje total es: " <<resultado;
}
*/

/*Ejercicio 2: Calcular daño recibido
//Ingresar la vida actual del personaje y cuánto daño recibe.Restar el daño a la vida y mostrar la vida resultante.

void DanoAlPersonaje (int VidaIni, int RecibiDano);

int Vida = 95;
int Dano = 21;


int main()
{
    
    DanoAlPersonaje(Vida, Dano);

        return 0;
}

void DanoAlPersonaje(int VidaIni, int RecibiDano)
{
    Vida = VidaIni - RecibiDano;
    std::cout << "LaVida Actual es :" << Vida << std::endl;

   }
   */


/*Ejercicio 3: Curar al personaje
//Ingresar la vida actual y una cantidad de curación.Sumar la curación a la vida y mostrar la   nueva vida(aunque supere 100, ya que aún no usan condicionales).

void CurarAlPersonaje(int VidaIni, int RecibiCura);

int Vida = 50;
int Cura = 30;


int main()
{

     CurarAlPersonaje(Vida, Cura);

    return 0;
}

void CurarAlPersonaje(int VidaIni, int RecibiCura)
{
    Vida = VidaIni + RecibiCura;
    std::cout << "LaVida Actual es :" << Vida << std::endl;
}

*/



/*Ejercicio 4: Calcular experiencia necesaria para subir de nivel
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel.

void CuantaExperienciaFalta(int ExpActual, int ExpNiv2, int ExpFaltante);

int Experiencia = 50;
int ExperienciaNivel2 = 180;
int ExperienciaNeceariaParaSiguienteNivel = 0;

int main()
{ 
    CuantaExperienciaFalta(Experiencia, ExperienciaNivel2, ExperienciaNeceariaParaSiguienteNivel);

return 0;
}


void CuantaExperienciaFalta(int ExpActual, int ExpNiv2, int ExpFaltante)
{
    ExperienciaNeceariaParaSiguienteNivel = ExpNiv2 - ExpActual;
        std::cout << "Exp que falta para siguiente nivel: " << ExperienciaNeceariaParaSiguienteNivel;
}
*/

/*Ejercicio 5: Multiplicar monedas recogidas por un multiplicador
Pedir cantidad de monedas recogidas y un multiplicador.Mostrar el total de monedas multiplicadas.

void MultiplicarMonedas(int Monedas, int multiplicacion);

int main()
{
    int MonedasRecogidas = 0;
    int Multiplicador = 3;
   


    std::cout << "Ingrese Monedas recogidas: ";
    std::cin >> MonedasRecogidas;
    

    MultiplicarMonedas(MonedasRecogidas, Multiplicador);

    return 0;
}

void MultiplicarMonedas(int Monedas, int multiplicacion)
{
    int Resultado = Monedas * multiplicacion;
    std::cout << "Las monedas totales son: " << Resultado;
}
*/

/*Ejercicio 6: Sistema simple de compra
Ingresar la cantidad de monedas del jugador y el precio de un objeto.Restar el precio a las monedas y mostrar lo que le queda. (puede que se saque fiado : D)


void ComprarUnObjeto(int money , int Precio );

int Monedas = 70;
int PrecioDelObj = 27;

int main()
{
    
    ComprarUnObjeto(Monedas, PrecioDelObj);

    return 0;
}

  

void ComprarUnObjeto(int money, int Precio)
{
    int Resultado = money - Precio;
std::cout << "Las monedas que quedan son: " << Resultado;
}
*/

/*Ejercicio 7: Crear una función que sume dos números
Crear una función llamada Sumar que reciba dos números y devuelva el resultado.Usarla para sumar puntos, monedas u otro recurso.

void Sumar(int Num1, int Num2);

int Puntos = 0;
int PuntosObtenidos = 0;
int Resultado = 0;

int main()
{
    std::cout << "Ingrese Puntos: ";
    std::cin >> Puntos;
    std::cout << "Ingrese Puntos obtenidos: ";
    std::cin >> PuntosObtenidos;

    Sumar(Puntos, PuntosObtenidos);
    return 0;
}

void Sumar(int Num1, int Num2)
{
    Resultado = Num1 + Num2;
        std::cout << "El total de puntos es: " << Resultado;
}
*/

/*Ejercicio 8: Crear una función que calcule daño
La función CalcularDanio debe recibir ataque y defensa, y devolver el resultado de ataque menos defensa.No limitar el resultado.

void Calculardanio(int Vidaquetengo, int AtaqueRecibido, int Mecubro);

int Vida = 100; 
int Dano = 0;
int Defensa = 0;


int main()
{
    std::cout << "Ingrese Dano: ";
    std::cin >> Dano;
    std::cout << "Ingrese Defensa: ";
    std::cin >> Defensa;

    Calculardanio(Vida, Dano, Defensa);
    return 0;
}

void Calculardanio(int Vidaquetengo, int AtaqueRecibido, int Mecubro)
{
    int resultado = Vidaquetengo - (AtaqueRecibido - Mecubro);
    std::cout << "vida que me queda : "<<resultado ;
}
*/

/*Ejercicio 9: Ingresar los stats del jugador y mostrarlo en pantalla
Pedir al usuario que ingrese su nombre, ataque, defensa, velocidad de ataque, vida maxima, multiplicador de danio critico  y mostrar sus stats.

std::string Nombre = "";
int Ataque = 0;
int Defensa = 0;
int VelocidadDeAtaque = 0;
int VidaMaxima = 0;
int MultiplicadorDeDanio = 0;

int main()
{
    std::cout << "Ingrese Nombre: ";
    std::cin >> Nombre;
    std::cout << "Ingrese Ataque: ";
    std::cin >> Ataque;
    std::cout << "Ingrese Defensa: ";
    std::cin >> Defensa;
    std::cout << "Ingrese velocidad de ataque: ";
    std::cin >> VelocidadDeAtaque;
    std::cout << "Ingrese vida maxima: ";
    std::cin >> VidaMaxima;
    std::cout << "Ingrese multiplicador de dano: ";
    std::cin >> MultiplicadorDeDanio;

    std::cout << "El nombre del personaje es: " << Nombre << std::endl;
    std::cout << "El Ataque del personaje es: " << Ataque << std::endl;
    std::cout << "La Defensa del personaje es: " << Defensa << std::endl;
    std::cout << "la velocidad de ataque es : " << VelocidadDeAtaque << std::endl;
    std::cout << "La vida maxima del personaje es: " << VidaMaxima << std::endl;
    std::cout << "El multiplicador de dano es: " << MultiplicadorDeDanio << std::endl;

    return 0;
}
*/

/*Ejercicio 10: Calcular tiempo total de juego
Pedir cuántos minutos jugó el jugador en tres días distintos.Mostrar el total y el promedio por Día y mostrarlos en pantalla en formato hs : mm

void  TotalDeMinutos(int dia1, int dia2, int dia3);

int MinutosDia1 = 0;
int MinutosDia2 = 0;
int MinutosDia3 = 0;
int MinutosTotales = 0;
int PromedioPorDia = 0;


int main()
{
    std::cout << "Ingrese minutos del dia 1: ";
    std::cin >> MinutosDia1;
    std::cout << "Ingrese minutos del dia 2: ";
    std::cin >> MinutosDia2;
    std::cout << "Ingrese minutos del dia 3: ";
    std::cin >> MinutosDia3;
  
    TotalDeMinutos(MinutosDia1, MinutosDia2, MinutosDia3);

    return 0;
}

void TotalDeMinutos(int dia1, int dia2, int dia3)
{
    MinutosTotales = (dia1 + dia2 + dia3);

    int Hora = MinutosTotales / 60;
    int Minutorestante = MinutosTotales % 60;


    std::cout << "Minutos totales de juego: " << MinutosTotales << std::endl;
    
    std::cout << "Total en horas: " << Hora << ":" << Minutorestante << std::endl;

    PromedioPorDia = (MinutosTotales / 3);
    
    int Horas = PromedioPorDia / 60;
    int Minutosrestantes = PromedioPorDia % 60;

    std::cout << "Promedio de juego por dia es de: " << Horas <<":"<<Minutosrestantes;
}
*/

//Ejercicio 11: Simulación de combate simple.
//Crear un programa que pida el nombre, vida, ataque y defensa del jugador, y también los datos del enemigo.Usar una función para calcular el daño del jugador al enemigo y viceversa(ataque menos defensa).Restar los daños a las vidas de ambos personajes.Mostrar los resultados en pantalla : vida inicial y final del jugador y del enemigo.simplemente mostrar todos los valores resultantes después del intercambio de ataques.


void IntecambioAtaque(int vidapj, int DanoPj, int DefPj, int vidaene, int ataqueene, int defEne);

std::string NombreDelJugador = "";
int VidaDelJugador = 0;
int AtaqueDelJugador = 0;
int DefensaDelJugador = 0;

std::string NombreDelEnemigo = "";
int VidaDelEnemigo = 0;
int AtaqueDelEnemigo = 0;
int DefensaDelEnemigo = 0;

int main()
{
    std::cout << "Ingrese Nombre del jugador: ";
    std::cin >> NombreDelJugador;
    std::cout << "Ingrese vida del jugador: ";
    std::cin >> VidaDelJugador;
    std::cout << "Ingrese Ataque del jugador: ";
    std::cin >> AtaqueDelJugador;
    std::cout << "Ingrese Defensa del jugador: ";
    std::cin >> DefensaDelJugador;
    
    std::cout << "Ingrese Nombre del Enemigo: ";
    std::cin >> NombreDelEnemigo;
    std::cout << "Ingrese vida del Enemigo: ";
    std::cin >> VidaDelEnemigo;
    std::cout << "Ingrese Ataque del Enemigo: ";
    std::cin >> AtaqueDelEnemigo;
    std::cout << "Ingrese Defensa del Enemigo: ";
    std::cin >> DefensaDelEnemigo;

    IntecambioAtaque(VidaDelJugador, AtaqueDelJugador,DefensaDelJugador, VidaDelEnemigo, AtaqueDelEnemigo,DefensaDelEnemigo);
    
   

    return 0;
}

void IntecambioAtaque(int vidapj, int DanoPj, int DefPj, int vidaene, int ataqueene, int defEne)
{
    
    int VidaActualPJ = vidapj - (ataqueene - DefPj) ;

    int VidaActualEnemigo = vidaene - (DanoPj - defEne);

    std::cout << "El nombre del personaje es: " << NombreDelJugador << std::endl;
    std::cout << "La Vida inicial es: " << VidaDelJugador << std::endl;
    std::cout << "La Vida actual es: " << VidaActualPJ  << std::endl;
    std::cout << "El nombre del enemigo es: " << NombreDelEnemigo << std::endl;
    std::cout << "La vida inicial es: " << VidaDelEnemigo << std::endl;
    std::cout << "La Vida actual es: " << VidaActualEnemigo << std::endl;
}
