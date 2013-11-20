libxmind
========

Portable ANSI C library for working with [XMind][1] documents. Aimed at allowing the creation of higher level language bindings without major code duplication. 

Design goals
============

* Written in pure ANSI C;
* Compilable by CMake;
* Portable to anywhere one can have a ZIP and an XML library;
* Abstracts the file I/O and the ADT for major XMind features;
* Interface and rendering system agnostic;
* Lua bindings out of the box.

Dependencies
============

* zlib $VER
* libzip $VER
* libxml2 $VER
* Something else, huh?

[1]: http://www.xmind.net