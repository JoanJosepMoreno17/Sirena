/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**  Joan Josep Moreno                                                            **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
  delay (2000);
  tone(xiulet, 1000, 3000);    // xiulet de durada valPot0
  delay (2000);
}
//********** Funcions *************************************************************
