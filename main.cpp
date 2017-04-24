/*
 * Este el fichero fuente principal del programa. 
 * Solicita al usuario que ingrese las cantidades de pacientes para cada paciente, 
 * luego muestra los cálculos realizados por el objeto DiagnosisTreated
 * Copyright (C) 2017  Emanuel Gauler
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact: emanuelgauler@gmail.com
 */
#include <iostream>
#include <iomanip>
#include "DiagnosisTreated"
using namespace std;

int main() {
  DiagnosisTreated diagnosed;
  for( auto &diagnosis: diagnosed.diagnostics ) {
    cout << "ingrese la cantidad de pacientes diagnósticados con " << diagnosis << ": ";
    int quantity; cin >> quantity;
    diagnosed.log_diagnosis_quantity( diagnosis, quantity );
  }

  cout << "Cantidad de pacientes tratados: " << diagnosed.patients_quantity() << endl;
  for( auto const&diagnosis: diagnosed.diagnostics )
    cout << "Porcentaje de pacientes para " << diagnosis << ": " << setprecision( 4 ) << diagnosed.statistics_for_diagnosis( diagnosis )*100 << "%" << endl;
  cout << endl;
  return 0;
}
