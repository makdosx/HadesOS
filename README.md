# HadeOS
HadesOS is a mini operating system with microkernel. <br> <br> <br>

#1) Compile and create Hades Operating System <br> <br>

#assemble boot.s file <br>
as --32 boot.s -o boot.o <br> <br>

#compile kernel.c file <br>
gcc -m32 -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O1 -Wall -Wextra <br> <br>

gcc -m32 -c utilities.c -o utilities.o -std=gnu99 -ffreestanding -O1 -Wall -Wextra <br> <br>

#linking the kernel with kernel.o and bootloader.o files <br>
ld -m elf_i386 -T linker.ld kernel.o utilities.o boot.o -o HadesOS.bin -nostdlib <br> <br>
 
#check HadesOS.bin file is x86 multiboot file or not <br> 
grub-file --is-x86-multiboot HadesOS.bin <br> <br>

#building the HadesOS iso file <br>
mkdir -p isohades/boot/grub <br>
chmod -R 777 isohades <br>
cp HadesOS.bin isohades/boot/HadesOS.bin <br>
cp grub.cfg isohades/boot/grub/grub.cfg <br>
chmod -R 777 isohades <br>
grub-mkrescue -o HadesOS.iso isohades <br> <br>

#(if want) run it in qemu (virtualbox) for testing <br>
#qemu-system-x86_64 -cdrom HadesOS.iso <br> <br> <br>



#2) installation on usb <br> <br>

lsblk <br> <br>

#mkfs.vfat -I /dev/sdc <br> <br>

sudo umount /dev/sdc <br>
sudo dd if=HadesOS.iso of=/dev/sdc bs=4M && sync <br>
