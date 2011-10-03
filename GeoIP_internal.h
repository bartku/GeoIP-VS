#ifndef GEOIP_INTERNAL_H
#define GEOIP_INTERNAL_H

#include "GeoIP.h"

GEOIP_API unsigned int _GeoIP_seek_record (GeoIP *gi, unsigned long ipnum);

GEOIP_API unsigned long _GeoIP_lookupaddress (const char *host);

GEOIP_API void _GeoIP_setup_dbfilename();
GEOIP_API char *_GeoIP_full_path_to(const char *file_name);

#endif
