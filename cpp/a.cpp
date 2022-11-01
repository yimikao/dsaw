/*
The smallest unit of memory is a binary digit (also called a bit), which can hold a value of 0 or 1.
You can think of a bit as being like a traditional light switch -- either the light is off (0), or it is on (1).
There is no in-between. If you were to look at a random segment of memory, all you would see is …011010100101010… or some combination thereof.

Memory is organized into sequential units called memory addresses (or addresses for short).
Similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location.

Perhaps surprisingly, in modern computer architectures, each bit does not get its own unique memory address.
This is because the number of memory addresses are limited, and the need to access data bit-by-bit is rare. Instead, each memory address holds 1 byte of data.
A byte is a group of bits that are operated on as a unit. The modern standard is that a byte is comprised of 8 sequential bits.
*/