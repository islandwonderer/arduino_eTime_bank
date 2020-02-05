void setup() {
  // Initialize Serial for Debug
  Serial.begin(9600);
   
  // Initializes the buttons
  for(int i=0; i<array_list_size; ++i){
    pinMode(button_list[i], INPUT_PULLUP);
  }

  // Initializes the LCD Screen
  lcd.begin(20,4);
  displayOptions();
}
