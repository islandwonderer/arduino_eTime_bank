void loop() {
  for(int i = 0; i < table_size; i++) {
    LUT curr_task = task_table[i];
    if(debounceCheck(curr_task.button)){
      displayMessage(curr_task.x_start,0,
                     curr_task.message);
      addTime(curr_task.multiplier);
    }
  }
  if(debounceCheck(button_8)){
    useTime();
  }
}
