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
