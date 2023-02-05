<!-- Homepage -->
# Libft

> Your very first own library

This project is about coding a C library.   
It will contain a lot of general purpose functions your programs will rely upon.

Version: `15`

---

Go back to [Homepage][home]

---

<!-- Requirements -->
## Requirements

* C compile tool (gcc/cc/clang/etc...)
* Make/CMake
* Tar or (un)zip tool

---

<!-- Use Tutor -->
## Using

This is a _C programming language_ **library**.   
To use this library, compile it using `make` command.   

follow this steps:   

1. Download libft `tar or zip`;
	* zip
		```Bash
		curl -L https://github.com/Thfirmin/Libft/archive/refs/tags/v2.0.zip -o libft.zip

		or

		wget https://github.com/Thfirmin/Libft/archive/refs/tags/v2.0.zip && mv v2.0.zip libft.zip
		```
	* tar
		```Bash
		curl -L https://github.com/Thfirmin/Libft/archive/refs/tags/v2.0.tar.gz -o libft.tar.gz

		or

		wget https://github.com/Thfirmin/Libft/archive/refs/tags/v2.0.tar.gz && mv v2.0.tar.gz libft.tar.gz
		```
2. Extract libft project;
	* zip
		```bash
		{
			unzip libft.zip
			mv Libft-2.0/libft/ .
			rm -rf Libft-2.0/
		}
		```
	* tar
		```Bash
		{
			tar -xf libft.tar.gz
			mv Libft-2.0/libft/ .
			rm -rf Libft-2.0/
		}
		```
3. Use `Make` command to compile the library;
	```Bash
	cd libft
	make

	or 

	make -C libft
	```

4. Include the library and the header file in your project.
	>	To include libft header file in your files you can use `#include "libft.h"` and compile with `-I libft` flag   
	or you can use `#include "libft/libft.h"`

	>	To compile the library file you can compile `<objects> libft/libft.a` or use the flag `-L libft -l ft` 

	>	spaces optional, you'll see `-Ilibft -Llibft -lft` or `-I libft -L libft -l ft`

---

<!-- Sources -->
## Used Sources

### **Languages**
-	C
-	Shell
-	Make lang

### **Tools**
-	GCC
-	CMake
-	Git
-	Vim
-	Bash

---

<!-- TODO -->
## TODO

| Step                 | Description                                         |
|:---------------------|:----------------------------------------------------|
| Multi-libft Platform | Set environment to easy portable multi-library repo |
| Init Ft              | Implement initial libft library to multi-libft      |
| Init ftprintf        | Implement ftprintf project to multi-libft           |
| Init ftmath          | Implement Math library to multi-libft               |

---

<!-- Footer -->
More explains of project check in the Wiki page.   
Go to Libft [Wiki page][wiki].

**Author**: _Thiago Firmino dos S. (Thfirmin)_   
**Institution**: _42 | Rio_   
**Source**: _Markdown_   

<img height="100" width="200" src="https://github.com/Thfirmin/Thfirmin/blob/main/srcs/42_badges/42rio_logo.svg">

> **_Keep Swimming!_**

##### _Libft 42|Rio (2022) - Thiago Firmino dos S. (Thfirmin)_

<!-- Links -->
[wiki]:<https://github.com/Thfirmin/Libft/wiki>
[home]:<https://github.com/Thfirmin/Libft>