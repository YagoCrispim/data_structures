use std::io;

use super::stack::Stack;

pub fn start_stack() {
    let mut stack: Stack = Stack::new();

    fn load_argument() -> i32 {
        let mut option: String = String::new();

        io::stdin()
            .read_line(&mut option)
            .expect("Failed to read line");
        option.trim().parse().expect("Please type a number!")
    }

    println!("Stack generator");

    loop {
        println!("1 - Insert element");
        println!("2 - Remove element");
        println!("3 - Print stack");
        println!("4 - Print stack length");
        println!("0 - Stop program");

        let option: i32 = load_argument();

        match option {
            1 => {
                println!("Write element to insert: ");
                let element: i32 = load_argument();
                stack.push(element);
                continue;
            }
            2 => {
                let removed_element: i32 = stack.pop();
                println!("Removed element: {}", removed_element);
                continue;
            }
            3 => {
                println!("Print stack");
                stack.print();
            }
            4 => {
                println!("Print stack length");
                let stack_size: i32 = stack.get_stack_size();
                println!("Stack size: {}", stack_size);
                continue;
            }
            0 => {
                println!("Program stopped!");
                return;
            }
            _ => {
                println!("Invalid option!");
                continue;
            }
        }
    }
}
