[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

# Detective

Don't waste your time detecting compatibility in your c++. Detective makes it easy for you!

## Table of Contents

* [About the Project](#about-the-project)
	* [Features](#features)
* [Getting Started](#getting-started)
	* [Prerequisites](#prerequisites)
	* [Installation](#installation)
	* [Usage](#usage)
	* [Usage Example](#usage-example)
* [Contributing](#contributing)
* [License](#license)
* [Acknowledgements](#acknowledgments)

## About the Project

Detective is a utility c++ library that tries to help you in the tedious process of detecting platform specific stuff. It also provide you facilities to maintain your code consistent.

### Features

* Compiler detection - [Compiler.h]() (useful to isolate compiler specific code)
* Function name and signature detection - [FunctionIdentification.h]() (useful to trace out function calls)
* C++ version and STL detection - [LanguageVersion.h]() (useful to check for language compatibility)
* OS detection - [OS.h]() (useful to isolate OS specific code)
* Primitive type management system - [Types.h]() (useful to use consistent types across your entire codebase)
* Many other utilities - [Utility.h]()

## Getting Started

These instructions will help you to seamlessly integrate this library in your current project.

### Prerequisites

This library is not build upon any framework nor any other library. The only prerequisite is having a compiler to compile your code!

### Installation

To install this library just clone it in you project directory using the following command

```
git clone https://github.com/dSyncro/Detective
```

It simplify the include process it is suggested to include "[path-where-you-cloned]/Detective/Projects/Detective/" to your include directories.

### Usage

Just include in your code the main header file "Detective.h" (it might be different if you didn't set the include directory) like you are used to do with other libraries.

```cpp
...

#include "Detective.h"

...
```
Have fun writing your awesome code!

### Usage Example

```cpp
#include <iostream>

#include "Detective.h"

int main(int argc, char** argv) {
	std::cout << DETECTIVE_GET_LINE() << std::endl; // Should print 6
	return 0;
}
```

## Contributing

Please read [CONTRIBUTING.md]() for details on our code of conduct, and the process for submitting pull requests to us.

## Authors

* **Domenico Mancini** - *Main developer* - [dSyncro](https://github.com/dSyncro)

See also the list of [contributors](https://github.com/Detective/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE][license-url] file for details

## Acknowledgments

* This project is not tested on all the platform it supports. It is currently tested on:
	* Windows 10, MSVC
	* Ubuntu 20.04, GCC

[contributors-shield]: https://img.shields.io/github/contributors/dSyncro/Detective?style=for-the-badge
[contributors-url]: https://github.com/dSyncro/Detective/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/dSyncro/Detective?style=for-the-badge
[forks-url]: https://github.com/dSyncro/Detective/network/members
[stars-shield]: https://img.shields.io/github/stars/dSyncro/Detective?style=for-the-badge
[stars-url]: https://github.com/dSyncro/Detective/stargazers
[issues-shield]: https://img.shields.io/github/issues/dSyncro/Detective?style=for-the-badge
[issues-url]: https://github.com/dSyncro/Detective/issues
[license-shield]: https://img.shields.io/github/license/dSyncro/Detective?style=for-the-badge
[license-url]: https://github.com/dSyncro/Detective/blob/master/LICENSE
