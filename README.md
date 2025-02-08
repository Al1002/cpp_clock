# CPP CLOCK (V1.3)

A C++ class for tracking real time. Includes Unix and MinGW implementation.

Includes class `Clock`. It tracks real time (not thread time).

Use with:
`#include <clock/clock.hpp>`

Sample usage provided in src/test.cpp.

Includes CMake files for compiling and running the test file, and CMake installation.

The CMake package name is titled `clock` and contains the library `clock`. Use in CMake with `find_package(clock)`. 

A .deb package is included. Install with `dpkg -i cpp_clock-x.y-Linux.deb` where `x.y` is the version. 
Created by Bicepsa (github.com/Al1002)

This code is licensed under the GNU General Public License V3 by the Free Software Foundation.
License can be found in the file titled "GPL_V3_LICENSE.md". If not, see <https://www.gnu.org/licenses/>.
