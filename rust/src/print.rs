pub fn run()
{
    // print to console
    println!("hello from print.rs");

    // basic formating
    println!("Number: {}",1);
    
    // formating
    println!("{} is from {}","brad","mass");

    // positional arguments
    println!("{0} is from {1} and {0} likes to {2}","brad","mass","code");

    // named arguments
    println!("{name} likes to play {activity}", name="john", activity="baseball");

    //placeholder traits
    println!("binary: {:b} Hex: {:x} octal: {:o}",10,10,10);

    //placeholder for debug trait
    println!("{:?}",(12, true, "hello"));

    //basic maths
    println!("10 +10 = {}",10+10);
}

