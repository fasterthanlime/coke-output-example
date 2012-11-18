## coke example output

An example of what coke would produce given a project

## Wait, what?

coke will generate a folder with a Makefile that has targets such as 'setup',
'all' (build), and 'package'.

The 'setup' target is in charge of testing all the underlying stuff: installing
OS-specific packages (apt, brew, mingw-get, mingw-archive), compiling + running
test files to see if it was installed properly, etc.

The reason we generate a Makefile for all this is that we don't necessarily
have a 'coke' executable handy on the platform we want to compile, but we 
have basic stuff like 'make' and 'pkg-config', which is enough for the Makefile
to run properly.

This repo right here is an example of what coke *should* generate, with all
the GNU make shit we need to make it work properly. It's hand-written, but
hopefully soon coke will generate all that for us. I'm applying the same
process I did with rock here: write the input and the output, then write
the code to get from one to ther other.

