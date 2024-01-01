# My First raylib app

## C lang

I need to clone raylib git [repo](https://github.com/raysan5/raylib).

```
cd raylib
mkdir build
cd build && cmake ..
cmake --build .
```

OK, now it should be built. I need some files to make it working. See *Makefile*.
Alternative path is to do something like this:

```
vim raylib-app.c
mkdir raylib # can be a different name
cp $(PATH_TO_RAYLIB_BUILD)/build/{libraylib.a,include/*} ./raylib/
# edit Makefile
```
and it should work.
