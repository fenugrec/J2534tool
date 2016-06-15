J2534 Tool

Cross-platform (C++, wxWidgets) rewrite / clone of Drew Technologies "J2534 Bus analysis tool", originally available from

http://drewtech.com/downloads/index.html

The GUI is based on the 1.07 release source code (published under GPL2).
The original software was written in VisualBasic; this project is a C++ rewrite using wxWidgets.

While the J2534 API was designed for Windows only, the exposed API is standard C with no Windows-specific elements.
The only part of the J2534 standard that is tied to Windows is the driver discovery mechanism which uses the registry.

The solution to make this cross-platform is to simply use an alternate mechanism for discovering available J2534 drivers.
One such method would be to parse a $HOME/.j2534rc for the same key-value pairs as would be found in the registry.

