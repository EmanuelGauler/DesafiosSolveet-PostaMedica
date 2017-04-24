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
