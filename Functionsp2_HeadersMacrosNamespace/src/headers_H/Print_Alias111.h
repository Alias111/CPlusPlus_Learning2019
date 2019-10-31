#ifndef FUNCTIONSP2_HEADERSMACROSNAMESPACE_PRINT_ALIAS111_H
// ! Definition of our macros
#define FUNCTIONSP2_HEADERSMACROSNAMESPACE_PRINT_ALIAS111_H

/* ! - Namespaces  provides scope to identifiers
 *   - Namespaces prevent compiler errors from multiple,
 * ?   same-name functions, classes, etc... */
namespace macros {
// ! Prefer Enums vs Macros but i do what i want
#define Log(x) std::cout << x;

	void printAlias();
}

#endif //FUNCTIONSP2_HEADERSMACROSNAMESPACE_PRINT_ALIAS111_H
