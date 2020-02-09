/*This is the data structure for a lookup table that
be used for monitoring the button selection.*/

#define table_size 7

typedef struct {
  int button;
  int x_start;
  char* message;
  int multiplier;
} LUT;

static const LUT task_table[table_size] = {
  {button_1, 4, "Reading: x1", read_multiplier},
  {button_2, 5, "Coding: x2", code_multiplier},
  {button_3, 3, "Yard Work: x3", yard_multiplier},
  {button_4, 4, "Cooking: x1", cook_multiplier},
  {button_5, 4, "Mathing: x3", math_multiplier},
  {button_6, 4, "Cleaning: x3", clean_multiplier},
  {button_7, 5, "Other: x1", other_multiplier}
};
