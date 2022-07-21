// Write a programme for binary search
use std::cmp::Ordering;

pub fn find<R: AsRef<[T]>, T: Ord>(space: R, key: T) -> Option<usize> {
    let space = space.as_ref();
    let mid = space.len() / 2;
    match key.cmp(space.get(mid)?) {
        Ordering::Equal => Some(mid),
        Ordering::Less => find(&space[..mid], key),
        Ordering::Greater => find(&space[mid + 1..], key).map(|i| i + mid + 1),
    }
}

pub fn main() {
    let array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let target = 5;
    println!("Array  : {:?}", array);
    println!("Target : {}", target);
    println!("Index  : {}", find(&array, target).unwrap());
}
