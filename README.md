## What's this?

- A practice in dynamic library implementation in C
- Basic caculator library

## To create the object file

`gcc -WALL -fPIC -c caculator.c`

## To generate a shared object

`gcc -shared -wl,-soname,libcalc.so -o libcalc.so *.o`

## License

Do whatever you want.

