#ifndef METADATA_H
#define METADATA_H
#include <string.h>
#include "PlaylistMap.h"
#include "Location.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "QtCore/qstring.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>
class Metadata
{
    public:
        Metadata();
        virtual ~Metadata();
        std::vector<PlaylistMap> buildData(std::string fname);
        bool writeData(std::vector<PlaylistMap>, std::string);
        bool appendData(std::vector<PlaylistMap>, std::string);
        std::vector<location::Location> buildDataLocation(std::string fname);
        bool writeDataLocation(std::vector<location::Location>, std::string);


    protected:

    private:
};

#endif // METADATA_H
