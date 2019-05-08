#ifndef SYSINFOLINUXIMPL_H
#define SYSINFOLINUXIMPL_H

#include "sysinfo.h"

#include <QtGlobal>
#include <QVector>

class sysinfolinuximpl : public SysInfo
{
public:
    sysinfolinuximpl();

    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;
};

#endif // SYSINFOLINUXIMPL_H
