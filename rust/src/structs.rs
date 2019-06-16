// structs - used to create custom data types


//traditional struct
struct color
{
    red: u8,
    green: u8,
    blue: u8,
}

// tuple struct
struct Color(u8,u8,u8);

struct person
{
    first_name: String,
    last_name: String
}

impl person
{
    //construct person
    fn new(first: &str, last: &str) -> person
    {
        person
        {
            first_name: first.to_string(),
            last_name: last.to_string()
        }
    }

    //get full name
    fn full_name(&self) -> String
    {
        format!("{} {}", self.first_name, self.last_name)
    }

    //set last_name
    fn set_last_name(&mut self, last: &str)
    {
        self.last_name = last.to_string();
    }

    // name to tuple
    fn to_tuple(self) -> (String, String)
    {
        (self.first_name, self.last_name)
    }
}

pub fn run()
{
    let mut c = color
    {
        red:225,
        green:0,
        blue:0
    };

    println!("color: {} {} {}", c.red, c.green, c.blue);

    c.red = 200;

    println!("color: {} {} {}", c.red, c.green, c.blue);

    let mut c = Color(255,0,0);
    println!(" color: {} {} {}", c.0,c.1,c.2);
    c.0 = 200;
    println!(" color: {} {} {}", c.0,c.1,c.2);

    let mut p = person::new("john", "wick");
    println!("person {} {}", p.first_name, p.last_name);

    println!("person {}", p.full_name());

    p.set_last_name("doe");
    println!("person {}", p.full_name());

    println!("person tuple {:?}", p.to_tuple());

}
