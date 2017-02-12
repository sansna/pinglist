PINGLIST
==
As being said in the title, this snippet is used to ping several ip automatically.

Note the last q is used to mark the end of the output.
Compile
-
On windows: 

    g++ p-windows.cpp -o pinglist.exe

On Linux:

    g++ p.cpp -o pinglist
Run
-
    pinglist

input data format:re!(\d+:\d+:\d+:\d+ )+q


Enjoy!!
