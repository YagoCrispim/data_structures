use std::io;

use super::queue::Queue;

pub fn start_queue() {
    let mut queue: Queue = Queue::new();

    fn load_argument() -> i32 {
        let mut option: String = String::new();

        io::stdin()
            .read_line(&mut option)
            .expect("Failed to read line");
        option.trim().parse().expect("Please type a number!")
    }

    println!("Queue generator");

    loop {
        println!("1 - Enqueue element");
        println!("2 - Dequeue element");
        println!("3 - Print queue");
        println!("0 - Stop program");

        let option: i32 = load_argument();

        match option {
            1 => {
                println!("Element to enqueue: ");
                let element: i32 = load_argument();
                queue.enqueue(element);
                continue;
            }
            2 => {
                println!("Dequeued element: {}", queue.dequeue());
                continue;
            }
            3 => {
                queue.print();
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
