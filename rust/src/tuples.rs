// tuples group together values of different types
// max 12 elements

pub fn run()
{
    let person: (&str, &str, i8) = ("brad", "mass", 37);

    println!("{} id from {} and is {}", person.0, person.1, person.2);
}
