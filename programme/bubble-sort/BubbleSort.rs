// Write a programme for bubble sort

fn bubble_sort(mut arr: Vec<i32>) {
    let n = arr.len() - 1;
    let mut sorted: bool = false;

    while sorted == false {
        sorted = true;
        for i in 0..n {
            if arr[i + 1] < arr[i] {
                sorted = false;
                (arr[i], arr[i + 1]) = (arr[i + 1], arr[i]);
            }
        }
    }

    // this prints out the value of arr after bubble_sort 🤯
    println!("After  Sort : {:?}", arr)
}

// change this to pub main if used in a module
fn main() {
    let arr: Vec<i32> = vec![21, 4, 1, 3, 9, 8, 25, 0, 6, 2];

    // this prints out the value of arr before bubble_sort
    println!("Before Sort : {:?}", arr);
    bubble_sort(arr);
}
