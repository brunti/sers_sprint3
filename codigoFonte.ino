const int botao1 = 12;
const int botao2 = 8;
const int rele1 = 4;
const int rele2 = 2;
const int rele3 = 7;

void setup() {
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(rele3, OUTPUT);
}

void loop() {
  int estadoBotao1 = digitalRead(botao1);
  int estadoBotao2 = digitalRead(botao2);
  
  if(estadoBotao1 == 1){
    if(estadoBotao2 ==1){
    	digitalWrite( rele1, 0);
   		digitalWrite( rele2, 1);
    	digitalWrite( rele3, 1); 
    }
      else{
        digitalWrite( rele1, 0);
   		digitalWrite( rele2, 0);
    	digitalWrite( rele3, 1); 
        
  }
  }
  else{
    digitalWrite( rele1, 1);
    digitalWrite( rele2, 0);
    digitalWrite( rele3, 0); 
  }
}