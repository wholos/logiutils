use std::fs::File;
use std::io::Read;
fn main() -> std::io::Result<()> {
    let mut fp=File::open("/etc/hostname")?;
    let mut rs=String::new();
    fp.read_to_string(&mut rs)?;
    println!("{}",rs.trim_end());
    Ok(())
}