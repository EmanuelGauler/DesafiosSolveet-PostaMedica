/*
 * diagnosis-treated.cpp es la implementación de la interfás DiagnosisTreated. 
 * Registra las cantidades de pacientes para cada diagnóstico,
 * y cuando se le solicita realiza el cálculo de las estadísticas para cada diagnóstico.
 * Copyright (C) 2017 Emanuel Gauler
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
#include "DiagnosisTreated"
using namespace std;

void DiagnosisTreated::log_diagnosis_quantity( Diagnostics const&diagnosis, int const&quantity ) {
  diagnosed[diagnosis] = quantity;
}
int DiagnosisTreated::patients_quantity() const {
    int sum = 0;
    for( auto const&diagnosis: diagnosed ) 
      sum += diagnosis.second;
    return sum;
}
float DiagnosisTreated::statistics_for_diagnosis( Diagnostics const&diagnosis ) const {
  return this->diagnosed.at(diagnosis)/float( this->patients_quantity() );
}

DiagnosisTreated::DiagnosisTreated() {
  for( auto &diagnosis: diagnostics )
    diagnosed[diagnosis] = 0;
}
