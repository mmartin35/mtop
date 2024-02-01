#include "core.hpp"

// Infos
const std::string& Core::getUsername()
{
    return username;
}

void Core::setUsername()
{
    char tUsername[256];
    tUsername = getlogin();
    username = tUsername.c_str();
}

const std::string& Core::getHostname()
{
    return hostname;
}

void Core::setHostname()
{
    char tHostname[256];
    gethostname(tHostname, sizeof(tHostname));
    hostname = tHostname.c_str();
}

const std::string& Core::getCpu()
{
    return cpu;
}

void Core::setCpu()
{

}

// Cpu
int Core::getCpuSize()
{

}

void Core::setCpuSize()
{

}

int Core::getCpuUsed()
{

}

void Core::setCpuUsed()
{

}

// Ram
int Core::getRamSize()
{

}

void Core::setRamSize()
{

}

int Core::getRamUsed()
{

}

void Core::setRamUsed()
{

}

// Disk
int Core::getDiskSize()
{

}

void Core::setDiskSize()
{

}

int Core::getDiskUsed()
{

}

void Core::setDiskUsed()
{

}
