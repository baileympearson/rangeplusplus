# rangeplusplus

A simple header-only file to allow range-based-for loops in a manner similar to
python.

## goals
I wanted an easy way to generate ranges, similar to how it is done in Python. I
know this probably existed, but I wanted the experience.

In python, a range-based for loop is written in the following manner:
```python
for value in range(begin,end,step):
	# do whatever
```

c++ now supports range-based for loops, but they rely on iterators.  this
library attemps to rectify that.  see usage below for examples.

## Installation
Clone the repo and place range.h in your include directory.

## Usage
There are three constructors that can be used.

```c++
range(int end);
range(int begin,end);
range(int begin,end,step);
```
