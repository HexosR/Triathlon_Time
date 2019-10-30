//Arrays Strings
String names[] = {"Swim", "Bike", "Run", "Total"}; 
String disciplines[] = { "SWIM", "BIKE", "RUN" };

//Array
long total[4];

//Const
const int Minutes = 60;
const int Hours = 3600;

//Functions
void AskHours() {
  Serial.print("Please enter the number of hours for the: ");
}

void AskMinuts() {
  Serial.print("Please enter the number of minutes for the: ");
}

void AskSeconds() {
  Serial.print("Please enter the number of seconds for the: ");
}

int MyFunction(){
  int x;
  while (!Serial.available());
  x = Serial.parseInt();
  return x;
}

void setup() {
  Serial.begin(9600);
  	for (int a = 0; a <= 2; a++) {
  		AskHours();
  		Serial.println(disciplines[a]);
     	total[a] = MyFunction() * Hours;
       
  		AskMinutes();
  		Serial.println(disciplines[a]);		
  		total[a] += MyFunction() * Minutes;
     
  		AskSeconds();
  		Serial.println(disciplines[a]);		
  		total[a] += MyFunction();
  	}
   
  total[3] = total[0] + total[1] + total[2];

  	for(int b=0; b <= 3; b++){
  		Serial.println(names[b]);
  		Serial.print(total[b] / Hours);
  		Serial.print("hr ");
  		Serial.print(total[b] % Hours / Minutes);
  		Serial.print("min ");
  		Serial.print(total[b] % Hours % Minutes);
  		Serial.println("sec ");
  	}
}

void loop() {

}
