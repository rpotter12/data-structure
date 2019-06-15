// vectors are recyclable arrays

pub fn run()
{
    let mut numbers: Vec<i32> = vec![1,2,3,4,5];

    println!("{:?}", numbers);

    println!("{}", numbers[0]);

    println!("vector occupies {} bytes", std::mem::size_of_val(&numbers));

    //get slice
    let slice: &[i32] = &numbers;
    println!("slice: {:?}", slice);

    // add on to vector
    numbers.push(6);
    numbers.push(7);
    println!("{:?}", numbers);
    numbers.pop();
    println!("{:?}", numbers);
    
    // loop through vector values
    for x in numbers.iter()
    {
        println!("numbers: {}", x);
    }

    // loop & mutate values
    for x in numbers.iter_mut()
    {
        *x *=2;
    }

    println!("numbers mut: {:?}", numbers);
}

