Start the generating process with the following line:
doxygen build

In the "fixedDoxygen" folder are two xml files I fixed which Doxygen didn't generate correctly.
They are copied automatically into the build\doxyxml folder.

The "base" folder contains type wrappers and files that couldn't be generated. 
You have to copy the src folder in it into the \build\cpp2java folder.
