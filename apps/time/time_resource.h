/**
 * \addgroup Time related functions
 *
 * Resource definitions for time module
 *
 * @{
 */

/**
 * \file
 *         Resource definitions for the time module
 *      
 * \author
 *         Ralf Schlatterbeck <rsc@tux.runtux.com>
 */

#ifndef time_resource_h
#define time_resource_h
#include "contiki.h"
#include "rest-engine.h"

extern resource_t resource_timestamp;
extern resource_t resource_localtime;
extern resource_t resource_utc;

#endif // time_resource_h
/** @} */
