#define NOTE_A5 885
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784

int duration=200;
int pin = 12;

//カエルの音の音階を記録
int melody[]={
  NOTE_C5, 0, NOTE_D5, 0, NOTE_E5, 0, NOTE_F5, 0 , NOTE_E5, 0, NOTE_D5, 0, NOTE_C5, 0 , 0, 0,
  NOTE_E5, 0, NOTE_F5, 0, NOTE_G5, 0, NOTE_A5, 0 , NOTE_G5, 0, NOTE_F5, 0, NOTE_E5, 0 , 0, 0,
  NOTE_C5, 0, 0, 0, NOTE_C5, 0, 0, 0, NOTE_C5, 0, 0, 0, NOTE_C5, 0, 0, 0,
  NOTE_C5, NOTE_C5, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_F5, NOTE_E5, 0 , NOTE_D5, 0 , NOTE_C5, 0 , 0 , 0 };
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<64; i++){
    tone(pin, melody[i], duration);
    delay(duration);
    }
  
}
