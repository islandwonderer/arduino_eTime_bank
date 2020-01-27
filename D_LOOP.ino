void loop() {
  int key_pad_input = checkKeyPadInput();
  int button_input = checkButtonInput();
  
  if(key_pad_input == 1 || button_input == 1){
    displayMessage(4, 1, "Reading: x1");
    addTime(read_multiplier);
  }
  else if(key_pad_input == 2 || button_input == 2){
    displayMessage(5, 1, "Coding: x2");
    addTime(code_multiplier);
  }
  else if(key_pad_input == 3 || button_input == 3){
    displayMessage(3, 1, "Yard Work: x3");
    addTime(yard_multiplier);
  }
  else if(key_pad_input == 4 || button_input == 4){
    displayMessage(4, 1, "Cooking: x1");
    addTime(cook_multiplier);
  }
  else if(key_pad_input == 5 || button_input == 5){
    displayMessage(4, 1, "Mathing: x3");
    addTime(math_multiplier);
  }
  else if(key_pad_input == 6 || button_input == 6){
    displayMessage(4, 1, "Cleaning: x3");
    addTime(clean_multiplier);
  }
  else if(key_pad_input == 7 || button_input == 7){
    displayMessage(5, 1, "Other: x1");
    addTime(other_multiplier);
  }
  else if(key_pad_input == 8 || button_input == 8){
    useTime();
  }
}
