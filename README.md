PINGLIST
==
As being said in the title, this little snippet is used to ping several ip automatically,
format should be:
    \tIP\tIP\tIP\tq
note the last q is used to mark the end of the output. \t is the tab as you know.
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
