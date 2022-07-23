
struct Data<T> {
  array: Vec<T>
}

impl<T> Data<T> where T: PartialEq + std::fmt::Display {
  fn new(arr: Vec<T>) -> Self {
    Data {array:arr}
  }

  fn linear_search(&self, target: T) -> Option<usize> {

    for indx in 0..self.array.len() {
      println!("current element: {}", self.array[indx]);
      if self.array[indx] == target {
        return Some(indx)
      }
    }
    None
  }
}

// test code
 fn main() {
  let sample_array = Data::new(vec![5, 8, 9, 15 ,18, 19]);

  if let Some(res) = sample_array.linear_search(15) {
    println!("found at index: {}", res);
  } else {
    println!("not found!");
  }
}
