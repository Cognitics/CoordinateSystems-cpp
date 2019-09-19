
#include "EGM2008.h"
#include "SphereTangentPlane.h"
#include "EllipsoidTangentPlane.h"
#include "GeoidTangentPlane.h"

#include <cstdlib>
#include <iostream>

int main(int argc, char** argv)
{
    std::string name = "N47W121";
    double origin_lat = 47.5;
    double origin_lon = -120.5;

    std::string egm_filename = "D:/EGM/EGM2008_Interpolation_Grid/Und_min2.5x2.5_egm2008_isw=82_WGS84_TideFree_SE";
    auto egm = Cognitics::CoordinateSystems::EGM2008::CreateFromNGA(egm_filename.c_str());

    auto ltp_sphere = new Cognitics::CoordinateSystems::SphereTangentPlane(origin_lat, origin_lon);
    auto ltp_ellipsoid = new Cognitics::CoordinateSystems::EllipsoidTangentPlane(origin_lat, origin_lon);
    auto ltp_geoid = new Cognitics::CoordinateSystems::GeoidTangentPlane(egm, origin_lat, origin_lon);


    std::cout << std::endl;
    // TODO: EGM84
    // TODO: EGM96
    // TODO: tests


    return EXIT_SUCCESS;
}