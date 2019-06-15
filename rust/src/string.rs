// primitive str = immutable fixed-lenght string somewhere in the memory
// string = growable, heap-allocated data structure - use when you need to modify or own string
// data

pub fn run()
{
    // primitive str
    let hello="hello";

    println!("{}",hello);

    // string
    let mut s = String::from("hello ");
    println!("{}",s);

    s.push('w');
    println!("{}",s);

    s.push_str("orld");
    println!("{}",s);

    println!("Lenght {}",s.len());
    println!("Capacity {}",s.capacity());

    // contains
    println!("contains 'world': {}",s.contains("world"));

    // create string with capacity
    let mut mystring = String::with_capacity(10);
    mystring.push('a');
    mystring.push('b');

    //assertion testing
    assert_eq!(2, mystring.len());
    assert_eq!(3, mystring.len());

    println!("{}",mystring);
}

