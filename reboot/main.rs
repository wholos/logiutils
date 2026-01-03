use libc::{sync, reboot, LINUX_REBOOT_CMD_RESTART};
fn main(){
    unsafe{
        sync();
        reboot(LINUX_REBOOT_CMD_RESTART);
    }
}