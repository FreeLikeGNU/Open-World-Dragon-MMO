/*
    Open World Dragon MMO, version 0.0.4

    Changelog:
      version 0.0.0: Original version by Andrew Ruben Ward
      version 0.0.1: Addition of error handling by Lars Müller
      version 0.0.2: Licensed under the GNU General Public License version 3
      version 0.0.3: Proper attribution for Andrew Ruben Ward
      version 0.0.4: Addition of this changelog

    © Andrew Ruben Ward, Lars Müller 2022

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <string.h>
int main() {
  char s[] = "Hello world, a dragon MMO\n";
  return printf(s) != strlen(s);
}
