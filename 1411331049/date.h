// DateInterface.h
#ifndef DATEINTERFACE_H
#define DATEINTERFACE_H

class DateInterface {
public:
    virtual void printGregorian() const = 0;
    virtual void printMinguo() const = 0;
    virtual ~DateInterface() {}
};

#endif
#pragma once
