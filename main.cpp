#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>
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
