v8 for Marmalade
================

v8 is google javascript engine:

  http://code.google.com/p/v8/

This is an initial attempt to package it for
Marmalde.  Work on this port has just begun and so far only the gcc x86 version
of v8 is running on Marmalade.

Since v8 don't produce source archives of releases a full copy of the v8 source
has been added to git in the "upstream" folder.  The "upstream" branch contains
the prestine version of v8 while the "main" branch contains the Marmalade
specific modification.  Currently the only modifiation of the upstream source is
to the platform-linux.cc file.

