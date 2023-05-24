void action1() {
    // action 1
}
void action2() {
    // action 2
}
void action3() {
    // action 3
}

// Define an array of function pointers
void (*actions[])() = { action1, action2, action3 };

// Now you can execute the appropriate action with a single line of code:
if (input >= 1 && input <= 3) {
    (*actions[input - 1])();
}
