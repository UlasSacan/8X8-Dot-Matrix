#include <LedControl.h>

int DIN = 11;
int CS = 7;
int CLK = 13;
LedControl lc = LedControl(DIN, CLK, CS, 0); // sondaki 0 projede kullanilacak matrix sayisini ifade eder.

byte uchar [] = {
  B00000000,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B1100110,
  B00111110

};
void setup()
{
  lc.shutdown(0, false); // matrix i aktif eder.
  lc.setIntensity(0, 5); //parlaklik ayari
  lc.clearDisplay(0); // ekran temizler.
}

void loop()
{
  for (int i = 0; i < 8; i++)
    lc.setRow(0, i, uchar[i]);
  delay(100);


}
