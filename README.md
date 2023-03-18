## IP Trigger
Hello, You can use this library for get ip adresses from in the string!

## How Can I Use?
```cpp
#include "ipparser.h"

if (isIp("my ip is 192.168.1.1"))
{
  std::cout << "this is a ipv4" << endl;
}

std::cout << getIp("my ip is 192.168.1.1", "My expression message is this!") << endl;
std::cout << getIp("my ip is 192.168.1.1") << endl;
```

## How Is It Working?
This library works with Regular Expression (RegEx), You can find expression from here;
```
([0-9]{1,3}[\.]){3}[0-9]{1,3}
```

## What's the main point for this kind of simple project.
The main point was learning the RegEx in C++.
