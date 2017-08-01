#include <string>

class GoodHours
{
public:
	int howMany(std::string beforeTime, std::string afterTime);
};

bool isGood(std::string time)
{
	int h1 = time[0] - '0';
	int h2 = time[1] - '0';
	int m1 = time[3] - '0';
	int m2 = time[4] - '0';

	if (h2 * m1 * m2 == h1) return true; else
	if (h1 * h2 == m1 * m2) return true; else
	if (h1 * h2 * m1 == m2) return true;
	return false;
}

int GoodHours::howMany(std::string beforeTime, std::string afterTime)
{
	int count = 0;

	while (beforeTime != afterTime) {
		if (isGood(beforeTime)) {
			count++;
		}

		// Increment Time
		beforeTime[4]++;
		if (beforeTime[4] - '0' > 9) {
			beforeTime[4] = '0';
			beforeTime[3]++;
		}

		if (beforeTime[3] - '0' > 5) {
			beforeTime[3] = '0';
			beforeTime[1]++;
		}

		if (beforeTime[0] - '0' < 2) {
			if (beforeTime[1] - '0' > 9) {
				beforeTime[1] = '0';
				beforeTime[0]++;
			}
		} else {
			if (beforeTime[1] - '0' > 3) {
				beforeTime[1] = '0';
				beforeTime[0] = '0';
			}
		}
	};

	if (beforeTime == afterTime) {
		if (isGood(beforeTime)) {
			count++;
		};
	}

	return count;
}
