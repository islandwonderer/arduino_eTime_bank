void setup() {
  // Initialize Serial for Debug
  Serial.begin(9600);
   
  // Initializes the buttons
  for(int i=0; i<sizeof(button_list); ++i){
    pinMode(button_list[i], INPUT);
  }

  // Initializes the LCD Screen
  lcd.begin(20,4);
  displayOptions();

  TTP16Button.Configure(SCLPin, SDAPin);
}
