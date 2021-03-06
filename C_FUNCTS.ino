//Displays Menu Options for Main Screen
void displayOptions() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("1.ReadX" + String(read_multiplier));
  lcd.setCursor(0,1);
  lcd.print("2.CodeX" + String(code_multiplier));
  lcd.setCursor(0,2);
  lcd.print("3.YardX" + String(yard_multiplier));
  lcd.setCursor(0,3);
  lcd.print("4.CookX" + String(cook_multiplier));
  lcd.setCursor(9,0);
  lcd.print("5.MathX" + String(math_multiplier));
  lcd.setCursor(9,1);
  lcd.print("6.CleanX" + String(clean_multiplier));
  lcd.setCursor(9,2);
  lcd.print("7.OtherX" + String(other_multiplier));
  lcd.setCursor(9,3);
  lcd.print("8.eTime ");
  lcd.print(avail_time);
  return;
}

//Used with useTime() to display the time
void displayTime(int curr_time){
  lcd.clear();
  lcd.setCursor(5,1);
  lcd.print("Earned Time:");
  lcd.setCursor(8,2);
  lcd.print(curr_time);
  return;
}

// Adds eTime by acumulating time according to the multiplier
void addTime(int multiplier) {
  unsigned long start_time = millis();
  while(digitalRead(button_9) != HIGH){
  }
  unsigned long end_time = millis();
  unsigned long earned_time = (end_time - start_time)/min_interval;
  avail_time += int(earned_time);
  displayOptions();
  return;
 }

//Uses eTime from accumulated time and notifies user via alarm when time 
//has been depleated
 void useTime() {
  displayTime(avail_time);
  unsigned int last_check = millis();
  while(digitalRead(button_9)==LOW&&avail_time>0){
    unsigned int new_check = millis();
    if(new_check-last_check>=min_interval){
      avail_time--;
      displayTime(avail_time);
      last_check = new_check;
    }
  }
  if(avail_time>0){
    displayOptions();
    return;
  }
  while(digitalRead(button_9)==LOW){
    tone(buzzer,2093);
    }
  noTone(buzzer);
  displayOptions();
  return;
 }

void displayMessage(int cursor_1a, int cursor_1b, String message){
   lcd.clear();
   lcd.setCursor(cursor_1a,cursor_1b);
   lcd.print(message);
   lcd.setCursor(0, 2);
   lcd.print("press STOP when done"); 
 }

bool debounceCheck(int pin){
   unsigned long last_check = millis();
   bool check_one;
   bool check_two;
   check_one = digitalRead(pin);
   while((millis()-last_check) < bounce_interval){
   }
   check_two = digitalRead(pin);
   if(check_one == true && check_two == true){
    return true;
   }
   else{
    return false;
   }
}
