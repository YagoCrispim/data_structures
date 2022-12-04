pub struct Queue {
    pub first: i32,
    pub last: i32,
    pub queue: Vec<i32>,
    pub max_queue_size: i32,
}

impl Queue {
    pub fn new() -> Self {
        Queue {
            first: 0,
            last: 0,
            queue: vec![0, 0, 0, 0, 0],
            max_queue_size: 5,
        }
    }

    pub fn enqueue(&mut self, element: i32) {
        if self.is_full() {
            println!("{}", "The queue is full.");
            return;
        }

        let index = self.last % self.max_queue_size;

        self.queue[index as usize] = element;
        self.last += 1;
    }

    pub fn dequeue(&mut self) -> i32 {
        if self.is_empty() {
            println!("{}", "Queue is empty.");
            return 0;
        }

        self.first += 1;

        let index: i32 = self.first - 1 & self.max_queue_size;

        self.queue[index as usize]
    }

    pub fn is_full(&self) -> bool {
        (self.last - self.first) == self.max_queue_size
    }

    pub fn is_empty(&self) -> bool {
        self.last == self.first
    }

    pub fn print(&self) {
        println!("Queue [");

        for item in self.queue.iter() {
            println!("  {}", item);
        }

        println!("]");
    }
}
