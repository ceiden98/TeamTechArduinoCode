//constant variables
const int FPGAPinWithFlow = 7; //change this to whatever pin the FPGA is connected to
const int FPGAPinAgainstFlow = 8; //change this to whatever pin the FPGA is connected to
const double TWall=2; //change this to the correct value
const double L=2; //change this to the correct value
const double X=2; //change this to the correct value


void setup() {
  // I think I need this here but I'm not really sure
  Serial.begin(9600);

}

void loop() {
  // input the ping time from the FPGA
  double pingTimeWithFlow = digitalRead(FPGAPinWithFlow); // not sure if this is the right way to input data
  double pingTimeAgainstFlow = digitalRead(FPGAPinAgainstFlow);

  //convert ping time to velocity
  double Tup=pingTimeWithFlow-2*TWall;
  double Tdown=pingTimeAgainstFlow-2*TWall;
  double velocity=pow(L,2)*1/(2*X)*(Tup-Tdown)/(Tup*Tdown);

  //output velocity to wifi shield?
  
}
