/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**  Joan Josep Moreno                                                            **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
int tempo = 500;
int durada = 2000;
//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}
//********** Loop *****************************************************************
void loop()
{
  delay(tempo);
  tone(xiulet,1200,durada);   
  delay(tempo);
  tone(xiulet,1000,durada);
  delay(tempo);
  tone(xiulet,750,durada);
  delay(tempo);
  tone(xiulet,500,durada);
  delay(tempo);
}
//********** Funcions *************************************************************
