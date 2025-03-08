typedef struct Stack_ stack;

Stack* create_stack(int lenght);

int push(Stack* stack, int value);
int pop(Stack* stack, int* value);
int top(Stack* stack, int* value);
void free_stack(Stack* stack);