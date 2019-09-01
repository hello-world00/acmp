//
// Created by hewo on 7/17/19.
//
#include <bits/stdc++.h>

class BigInt {
    private:
        std::vector<int> number;
        bool sign = false;
    public:

        BigInt operator+ (BigInt bigInt);
        BigInt operator- (BigInt bigInt);
        BigInt operator* (BigInt bigInt);

        friend std::ostream & operator << (std::ostream &out, const BigInt &bigInt);
        friend std::istream & operator >> (std::istream &in, BigInt &bigInt);

        void setSize(int n);
        void setNumber(std::string source);

};


void BigInt::setSize(int n)
{
    number.resize(n);
}

void BigInt::setNumber(std::string source)
{
    int length = source.length();
    auto c = source.begin();
    if (source[0] == '-')
    {
        c++;
        sign = true;
        length--;
    }

    number.resize(length);
    for (; c != source.end(); ++c)
    {
        if ('0' <= *c && *c <= '9')
            number[--length] = *c - '0';
    }


}

BigInt BigInt::operator-(BigInt bigInt)
{
    BigInt newNumber;
    int maxLength = std::max(number.size(), bigInt.number.size());
    int c = 0;
    if (sign && bigInt.sign)
        newNumber.sign = true;

    for (int i = 0; i < maxLength; i++)
    {
        int d = (i < number.size()) ? number[i] : 0;
        int e = (i < bigInt.number.size()) ? bigInt.number[i] : 0;

        c += d - e;
        newNumber.number.push_back(c%10);
        c /= 10;
    }


    return newNumber;
}



BigInt BigInt::operator+(BigInt bigInt)
{
    // TODO if sign == true then apply - operator.
    BigInt newNumber;
    int maxLength = std::max(number.size(), bigInt.number.size());
    int c = 0;
    if (sign && bigInt.sign)
        newNumber.sign = true;

    for (int i = 0; i < maxLength; i++)
    {
        int d = (i < number.size()) ? number[i] : 0;
        int e = (i < bigInt.number.size()) ? bigInt.number[i] : 0;

        c += d + e;
        newNumber.number.push_back(c%10);
        c /= 10;
    }

    if (c)
        newNumber.number.push_back(c);

    return newNumber;

}

BigInt BigInt::operator*(BigInt bigInt)
{
    BigInt newNumber;
    newNumber.setSize(number.size() + bigInt.number.size());
    for (auto i = 0; i < number.size(); ++i)
    {
        for (auto j = 0, carry = 0; j < bigInt.number.size() || carry; ++j)
        {
            long long cur = newNumber.number[i+j] + number[i] * 1ll * (j < bigInt.number.size() ? bigInt.number[j] : 0) + carry;
            newNumber.number[i+j] = int (cur % 10);
            carry = int (cur / 10);
        }
    }

    while (newNumber.number.size() > 1 && newNumber.number.back() == 0)
        newNumber.number.pop_back();

    return newNumber;
}

std::ostream & operator << (std::ostream &out, const BigInt &bigInt)
{
    for (auto it = bigInt.number.rbegin(); it != bigInt.number.rend(); ++it)
        out << *it;
    return out;
}

std::istream & operator >> (std::istream &in, BigInt &bigInt)
{
    std::string source;
    in >> source;

    int length = source.length();
    auto c = source.begin();
    if (source[0] == '-')
    {
        c++;
        bigInt.sign = true;
        length--;
    }

    bigInt.number.resize(length);
    for (; c != source.end(); ++c)
    {
        if ('0' <= *c && *c <= '9')
            bigInt.number[--length] = *c - '0';
    }

    return in;
}

int main()
{
    int K = 0, N = 0, i, c, j;

    BigInt dp[301];
    for (auto& d : dp)
        d.setNumber("0");
    std::cin >> K >> N;

    dp[0].setNumber("1");
    dp[1].setNumber("1");

    for (i = 2; i <= N; i++)
    {
        BigInt s;
        s.setNumber("0");
        c = i;
        j = 1;
        while (c > 0 && j <= K)
        {
            s = s + dp[c - 1];
            c--; j++;
        }
        dp[i] = s;
    }

    std::cout << dp[N] << std::endl;
    return 0;
}