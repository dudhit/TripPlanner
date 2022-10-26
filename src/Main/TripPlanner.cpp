#include <iostream>
#include <unistd.h>
#include "GPS.hpp"

#define TRUE 1
#define FALSE 0



#if (_POSIX_C_SOURCE >= 2 || _XOPEN_SOURCE)
// brute force shortest path between points
int main(int argc, char *argv[])
{
    int opt;
    char options[] = ":h:";
    //  opterr = 1; /* turn on getopt() error messages */

    while ((opt = getopt(argc, argv, options)) != -1)
    {

        switch (opt)
        {
        case 'h': /* is a switch (no arg) */
          std::cout << "help  flagged\n";
            break;
        case '?':
            std::cout << "tripplanner: invalid option --\n";
            break;
        case ':':
            std::cout << "Missing required argument\n";
            break;
        default:
            std::cout << "?? getopt returned character code 0%o ??\n"
                 << opt;
            break;
        }
    }

    if (optind < argc)
    {
        std::cout << "non-option ARGV-elements: ";
        for (; optind < argc; optind++)
        {
            std::cout << "%s " << argv[optind];
            std::cout << "\n";
        }
    }
 net_dudhit_cpp::GPS loc; 
 loc.displayGPS();
    return 0;

    // find_first_of()   find()  substr()
    // open gps file
    // convert strings to gps objects
    // add to list/array
    // compare each gps to list and fing shorest
    // add to new list
}

#endif
