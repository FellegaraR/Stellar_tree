/*
    This file is part of the Stellar library.

    Author(s): Riccardo Fellegara (riccardo.fellegara@gmail.com)

    This project has been supported by the Italian Ministry of Education and
    Research under the PRIN 2009 program, and by the National Science Foundation
    under grant number IIS-1116747.

    The Stellar library is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The Stellar library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with the Stellar library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef STRING_MANAGEMENT_H
#define STRING_MANAGEMENT_H

#include <string>
#include <vector>
#include <fstream>
using namespace std;

namespace string_management
{

/**
 * @brief A procedure that returns the name of a file from its extension
 *
 * @param path
 * @return string
 */
extern string get_file_name(string path);
/**
 * @brief A procedure that returns the file extension
 *
 * @param path
 * @return string
 */
extern string get_file_extension(string path);
/**
 * @brief A procedure that returns the file path without file extension extension
 *
 * @param path
 * @return string
 */
extern string get_path_without_file_extension(string path);
/**
 * @brief A procedure that removes the path from a string
 *
 * @param string
 * @return string
 */
extern string strip_path(string);
/**
 * @brief A procedure that tokenizes a string, following a user-defined delimiter
 *        NOTA: if none delimiter is specified, the procedure uses " " as default
 * @param str
 * @param tokens
 * @param delimiters
 */
extern void tokenize(const string& str, vector<string>& tokens, const string& delimiter);

/**
 * @brief A procedure that go to a specific line of an input stream
 *
 * @param file
 * @param num
 */
extern void go_to_line(ifstream& input, unsigned num);

}

#endif // STRING_MANAGEMENT_H
