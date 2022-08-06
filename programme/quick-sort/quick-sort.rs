fn main() {
    let x = &mut [5, 4, 1, 6, 2];
    quicksort(x);
    assert_eq!(&mut [1, 2, 4, 5, 6], x);

    let mut x: Vec<i32> = vec![];
    quicksort(&mut x);
    let empty: Vec<i32> = vec![];
    assert_eq!(empty , x);

    let x = &mut['p', 'c', 'a', 'b'];
    quicksort(x);
    assert_eq!(&mut['a', 'b', 'c', 'p'] , x);

    let x = &mut["pablo", "fraile", "alonso"];
    quicksort(x);
    assert_eq!(&mut["alonso", "fraile", "pablo"] , x);
}

fn quicksort<T>(array: &mut [T]) where T: PartialEq + Eq + PartialOrd + Clone { 
    let len = array.len();
    if len <= 1 {
        return;
    }
    let initial_pivot_position = choose_pivot_position(0, len);
    let pivot_value = array[initial_pivot_position].clone();
    array.swap(initial_pivot_position, len - 1);
    let final_pivot_position = partition(&mut array[.. len - 1], &pivot_value);
    array.swap(final_pivot_position, len - 1);
    quicksort(&mut array[..final_pivot_position]);
    quicksort(&mut array[final_pivot_position + 1..]);
}

fn choose_pivot_position(initial: usize, end: usize) -> usize {
    initial + (end - initial) / 2
}

fn partition<T>(array: &mut[T], pivot_value: &T) -> usize where T: PartialEq + Eq + PartialOrd {
    let mut smaller_number_index = 0;
    for i in 0..array.len() { 
        if pivot_value > &array[i] {
            array.swap(i, smaller_number_index);
            smaller_number_index += 1;
        }
    }
    smaller_number_index
}
