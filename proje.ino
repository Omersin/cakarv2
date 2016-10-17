/* Çakar Devresi */ 

int led1 = 12; // Kırmızı Led (veya transistör)
int led2 = 13; // Mavi Led (veya transistör)
int time = 100; // Süre ms cinsinden

void setup() {
  // Dijital pinleri çıkış olarak belirliyoruz. 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
  // Loop tan önce tüm ledleri söndürüyoruz. 
  digitalWrite(led1, LOW);   
  digitalWrite(led2, LOW);  
}

//
void loop() {
  digitalWrite(led1, HIGH);   
  digitalWrite(led2, LOW);    
  delay(time);                
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);  
  delay(time);               
}
