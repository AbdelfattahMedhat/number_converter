#ifndef KEYPAD_INTERFACE_H_
#define KEYPAD_INTERFACE_H_

#define COLUMNS 4
#define ROWS 4
#define NO_KEY 'R'
void keypad_init(void);
u8 keypad_getnumber(void);



#endif /* KEYPAD_INTERFACE_H_ */