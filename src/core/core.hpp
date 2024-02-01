#pragma once

class Core
{
    public:
        // Infos
        void setUsername();
        const std::string getUsername();

        void setHostname();
        const std::string getHostname();

        void setCpu();
        const std::string getCpu();
        // Cpu
        void setCpuSize();
        int getCpuSize();

        void setCpuUsed();
        int getCpuUsed();
        // Ram
        void setRamSize();
        void setRamUsed();

        int getRamSize();
        int getRamUsed();
        // Disk
        void setDiskSize();
        void setDiskUsed();

        int getDiskSize();
        int getDiskUsed();
    private:
        // Infos
        const std::string username;
        const std::string hostname;
        const std::string cpu;
        // Cpu
        int cpuSize;
        int cpuUsed;
        // Ram
        int ramSize;
        int ramUsed;
        // Disk
        int diskSize;
        int diskUsed;
};
