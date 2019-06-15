//variables hold primitive data or references to data
//variables are immutable by default
//rust is a block-scoped language

pub fn run()
{
    let name="brad";
    println!("my name is {}",name);

    // to make variable mutable
    let mut age = 20;
    println!("my age is {}",age);

    age =21;
    println!("now my age is {}",age);

    // define constant
    const ID:i32 =001;
    println!("ID: {}", ID);

    // multiple variables
    let(myname, myage) = ("brad", 20);
    println!("{} is {}", myname, myage);
}
