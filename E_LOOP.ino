void loop() {
  if(digitalRead(button_1) == HIGH){
    displayMessage(4, 1, "Reading: x1");
    addTime(read_multiplier);
  }
  else if(digitalRead(button_2) == HIGH){
    displayMessage(5, 1, "Coding: x2");
    addTime(code_multiplier);
  }
  else if(digitalRead(button_3) == HIGH){
    displayMessage(3, 1, "Yard Work: x3");
    addTime(yard_multiplier);
  }
  else if(digitalRead(button_4) == HIGH){
    displayMessage(4, 1, "Cooking: x1");
    addTime(cook_multiplier);
  }
  else if(digitalRead(button_5) == HIGH){
    displayMessage(4, 1, "Mathing: x3");
    addTime(math_multiplier);
  }
  else if(digitalRead(button_6) == HIGH){
    displayMessage(4, 1, "Cleaning: x3");
    addTime(clean_multiplier);
  }
  else if(digitalRead(button_7) == HIGH){
    displayMessage(5, 1, "Other: x1");
    addTime(other_multiplier);
  }
  else if(digitalRead(button_8) == HIGH){
    useTime();
  }
}
