#pragma once

#include <string>

/** \addtogroup ServerProvider
 *  @{
 */

namespace ServerProvider
{

///
/// \brief Gives address basing of build system configuration
/// \return Address of used server
///
std::string getHostName();

}// namespace ServerProvider

/** }@ */