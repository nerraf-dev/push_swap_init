typedef struct s_node {
    int value;
    struct s_node *next;
} t_node;

typedef struct s_stack {
    t_node *top;
} t_stack;

t_stack *create_stack();
int is_empty(t_stack *stack);
void push(t_stack *stack, int value);
int pop(t_stack *stack);
void free_stack(t_stack *stack);