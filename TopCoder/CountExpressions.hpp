class CountExpressions
{
public:
    int calcExpressions(int x, int y, int val);
};

int numCorrect(int a, int b, int c, int d, int val)
{
    int num = 0;
    if ( a + b + c + d == val) num++;
    if ( a + b + c - d == val) num++;
    if ( (a + b + c) * d == val) num++;
    if ( a + b - c + d == val) num++;
    if ( (a + b) * c + d == val) num++;
    if ( a + b - c - d == val) num++;
    if ( (a + b - c) * d == val) num++;
    if ( (a + b) * c * d == val) num++;
    if ( (a + b) * c - d == val) num++;

    if ( a - b + c + d == val) num++;
    if ( a - b + c - d == val) num++;
    if ( (a - b + c) * d == val) num++;
    if ( a - b - c + d == val) num++;
    if ( (a - b) * c + d == val) num++;
    if ( a - b - c - d == val) num++;
    if ( (a - b - c) * d == val) num++;
    if ( (a - b) * c * d == val) num++;
    if ( (a - b) * c - d == val) num++;

    if ( a * b + c + d == val) num++;
    if ( a * b + c - d == val) num++;
    if ( (a * b + c) * d == val) num++;
    if ( a * b - c + d == val) num++;
    if ( a * b * c + d == val) num++;
    if ( a * b - c - d == val) num++;
    if ( (a * b - c) * d == val) num++;
    if ( a * b * c * d == val) num++;
    if ( a * b * c - d == val) num++;
    return num;
}

int CountExpressions::calcExpressions(int x, int y, int val)
{
    int number = 0;
    number += numCorrect(x, x, y, y, val);
    number += numCorrect(x, y, x, y, val);
    number += numCorrect(x, y, y, x, val);
    number += numCorrect(y, y, x, x, val);
    number += numCorrect(y, x, y, x, val);
    number += numCorrect(y, x, x, y, val);
    return number;
}
