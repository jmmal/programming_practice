#include <vector>
#include <string>
#include <sstream>

class AzimuthMonitoring
{
public:
    int getAzimuth(std::vector<std::string> instructions);
};

int AzimuthMonitoring::getAzimuth(std::vector<std::string> instructions)
{
    int degrees = 0;
    std::string instruction;

    for (int i = 0; i < instructions.size(); i++) {
        instruction = instructions.at(i);
        if (instruction == "LEFT") {
            degrees -= 90;
            if (degrees < 0) degrees += 360;
        } else if (instruction == "RIGHT") {
            degrees += 90;
            if (degrees >= 360) degrees -= 360;
        } else if (instruction == "TURN AROUND") {
            degrees +=180;
            if (degrees >= 360) degrees -= 360;
        } else if (instruction == "HALT") {
            return degrees;
        } else if (instruction.find("LEFT") != std::string::npos) {
            std::stringstream ss(instruction);
            int tempDegrees = 0;
            ss >> instruction;
            ss >> tempDegrees;
            degrees -= tempDegrees;
            if (degrees < 0) degrees += 360;
        } else if (instruction.find("RIGHT") != std::string::npos) {
            std::stringstream ss(instruction);
            int tempDegrees = 0;
            ss >> instruction;
            ss >> tempDegrees;
            degrees += tempDegrees;
            if (degrees >= 360) degrees -= 360;
        }
    }


    return degrees;
}
