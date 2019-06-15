// arrays - fixed list where elements are the same data types

pub fn run()
{
    let mut numbers: [i32; 5] = [1,2,3,4,5];

    println!("{:?}", numbers);

    println!("{}", numbers[0]);

    println!("array occupies {} bytes", std::mem::size_of_val(&numbers));

    //get slice
    let slice: &[i32] = &numbers;
    println!("slice: {:?}", slice);
}
