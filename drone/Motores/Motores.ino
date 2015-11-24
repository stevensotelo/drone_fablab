
#define pinEnable 13  // Activation du driver/pilote
#define pinStep    9  // Signal de PAS (avancement)
#define pinDir     8  // Direction 

int velocity;          // Velocity


void setup(){
  Serial.begin(9600);
  pinMode( pinEnable, OUTPUT );
  pinMode( pinDir   , OUTPUT );
  pinMode( pinStep  , OUTPUT );
}

void loop(){
  velocity = 10;
  digitalWrite( pinDir   , HIGH); // Direction avant
  digitalWrite( pinStep  , LOW);  // Initialisation de la broche step
  Serial.println( velocity );
  while(true){
    digitalWrite( pinStep, HIGH );
    delay( velocity );
    digitalWrite( pinStep, LOW );
  } 
}
