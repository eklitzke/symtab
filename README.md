# The Curious Case Of PIEs

This demonstrates how to build a position independent executable (PIE) that can
also have symbols loaded using
[dlopen](http://man7.org/linux/man-pages/man3/dlopen.3.html). This will only
work with GNU ld.
