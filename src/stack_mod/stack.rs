pub struct Stack {
    pub length: i32,
    pub max_stack_length: i32,
    pub stack: Vec<i32>,
}

impl Stack {
    pub fn new() -> Self {
        Stack {
            length: 0,
            max_stack_length: 5,
            stack: vec![],
        }
    }

    pub fn push(&mut self, item: i32) {
        if self.is_full() {
            println!("{}", "The stack is full");
            return;
        }

        self.stack.push(item);
        self.length += 1;
    }

    pub fn pop(&mut self) -> i32 {
        if self.is_empty() {
            println!("{}", "The stack is empty. Nothing to remove.");
            return 0;
        }

        self.length -= 1;
        self.stack[self.length as usize] //? why usize?
    }

    pub fn is_full(&self) -> bool {
        self.length == self.max_stack_length
    }

    pub fn is_empty(&self) -> bool {
        self.length == 0
    }

    pub fn get_stack_size(&self) -> i32 {
        self.length
    }

    pub fn print(&self) {
        println!("Stack [");

        for item in self.stack.iter() {
            println!("{}", item);
        }

        println!("]");
    }
}
