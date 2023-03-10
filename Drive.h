#include <windows.h>
#include <string>
#ifndef DRIVE_H
#define DRIVE_H

using namespace std;
class Drive
{
    public:
        Drive();
        detect();
        void sync(char usb);
        void kCopy(string file, string name);
        time_t  convert_to_timestamp(string dt);
        string getFileExtension(string filePath);
        virtual ~Drive();

    protected:

    private:
        void wait();
        char getUsb();
};

#endif // DRIVE_H
