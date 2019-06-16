//conditionals - used to check the condition of something and act on the result

pub fn run()
{
    let age = 18;
    let check_id: bool=false;
    let knows_person_age = true;

    // if/else
    if age >= 21 && check_id || knows_person_age
    {
        println!("bartemder: what would you like to drink?");
    }
    else if age <21 && check_id
    {
        println!("bartender: sorry, you have to leave");
    }
    else
    {
        println!("bartender: I'll need to see your ID");
    }

    // shorthand if
    let is_of_age = if age >=21 {true} else {false};
    println!("is of age: {}", is_of_age)

}
