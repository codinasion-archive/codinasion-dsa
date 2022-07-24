// Write a programme for Linear Search.

pub fn find<R: AsRef<[T]>, T: Ord>(space: R, key: T) -> Option<usize> {
    let space = space.as_ref();
    for i in 0..space.len() {
        if space[i] == key {
            return Some(i);
        }
    }
    return Some(0);
}

pub fn main() {
    let array = [10, 20, 80, 30, 60, 50];
    let target = 30;

    println!("Array  : {:?}", array);
    println!("Target : {}", target);
    println!("Index  : {}", find(array, target).unwrap());
}
