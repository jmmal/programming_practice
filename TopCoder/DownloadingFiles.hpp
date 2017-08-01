// DownloadingFiles.hpp
#include <vector>
#include <sstream>

class DownloadingFiles
{
public:
    // This method takes a string vector as a parameter and returns a double
    // Indicating the total download for a number of files, (passed in the vector)
    double actualTime(std::vector<std::string> tasks);
};

// Returns a double inticating the total download time
double DownloadingFiles::actualTime(std::vector<std::string> tasks)
{

    double totalSize = 0;
    double bandwidth = 0;
    int tempSize = 0;
    int tempBand = 0;

    for (size_t i = 0; i < tasks.size(); i++) {
        // Use stringstream to convert the string values to integers
        std::stringstream ss(tasks[i]);
        ss >> tempBand;
        ss >> tempSize;
        totalSize += tempSize * tempBand;
        bandwidth += tempBand;
    }

    // Returns the total download time = Size of File (KB) / bandwidth (S)
    return totalSize / bandwidth;
}
