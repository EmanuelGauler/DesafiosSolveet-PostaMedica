# DesafiosSolveet-PostaMedica
Posible solución al desafío propuesto en [Solveet](http://www.solveet.com/exercises/Ejercicio-Posta-Medica/660)

La solución debería:
 - Solicitar que ingrese los diagnósticos.
 - Calcular las proporciones de pacientes diagnosticados en el día.


## Compilando
git clone git@github:EmanuelGauler/DesafiosSolveet-PostaMedica PostaMedica && cd PostaMedica;
g++ main.cpp diagnosis-treated.cpp -I. -std=gnu++11 -Wall -pedantic -O3 -oposta-medica && ./posta-medica
