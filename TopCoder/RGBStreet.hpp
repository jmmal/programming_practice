#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>

class RGBStreet
{
public:
    int estimateCost(std::vector<std::string> houses);
};

int **results;

int minCost(std::vector<std::string> houses, std::string prevColour, int results[3][20], int index)
{
    if (houses.size() == 0) return 0;
    int min = 1001;
    int red = 0;
    int blue = 0;
    int green = 0;

    int redCost;
    int greenCost;
    int blueCost;
    std::string colours = houses.at(0);
    std::stringstream ss;
    ss << colours;
    ss >> redCost;
    ss >> greenCost;
    ss >> blueCost;
    houses.erase(houses.begin());

    // IF we had red this time, need to find min of green and blue
    if (prevColour == "RED") {
        if (results[1][index] == -1) {
            green = greenCost + minCost(houses, "GREEN", results, index + 1);
            results[1][index] = green;
        } else {
            green = results[1][index];
        }

        if (results[2][index] == -1) {
            blue = blueCost + minCost(houses, "BLUE", results, index + 1);
            results[2][index] = blue;
        } else {
            blue = results[2][index];
        }

        return std::min(green, blue);
    }

    // IF we had green this time, need to find min of red and blue
    else if (prevColour == "GREEN") {
        if (results[0][index] == -1) {
            red = redCost + minCost(houses, "RED", results, index + 1);
            results[0][index] = red;
        } else {
            red = results[0][index];
        }

        if (results[2][index] == -1) {
            blue = blueCost + minCost(houses, "BLUE", results, index + 1);
            results[2][index] = blue;
        } else {
            blue = results[2][index];
        }

        return std::min(red, blue);
    }

    // IF we had blue this time, need to find min of red and green
    else if (prevColour == "BLUE") {
        if (results[1][index] == -1) {
            green = greenCost + minCost(houses, "GREEN", results, index + 1);
            results[1][index] = green;
        } else {
            green = results[1][index];
        }

        if (results[0][index] == -1) {
            red = redCost + minCost(houses, "RED", results, index + 1);
            results[0][index] = red;
        } else {
            red = results[0][index];
        }
        return std::min(green, red);
    } else {
        return 0;
    }
}

int RGBStreet::estimateCost(std::vector<std::string> houses)
{
    if (houses.size() == 0) return 0;

    // storage for the results
    int arr[3][20];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 20; j++) {
            arr[i][j] = -1;
        }
    }
    int red = minCost(houses, "RED", arr, 0);
    int green = minCost(houses, "GREEN", arr, 0);
    int blue = minCost(houses, "BLUE", arr, 0);

    int minimum = std::min(red, green);
    return std::min(blue, minimum);
}
