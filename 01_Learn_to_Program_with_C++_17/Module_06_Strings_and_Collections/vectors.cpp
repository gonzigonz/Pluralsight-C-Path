#include <algorithm>
using std::count;
using std::sort;

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
    vector<int> nums;
    for (int i = 0; i < 10; i++)
    {
        nums.push_back(i);
    }
    nums[5] = 3;
    nums[6] = -1;
    nums[1] = 99;
    // nums[10] = 11; You can't do this!

    cout << "The vector 'nums' has " << nums.size() << " elements...\n";

    for (auto n : nums)
    {
        cout << n << ' ';
    }
    cout << '\n';

    for (unsigned int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    cout << '\n';

    for (auto i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ' ';
    }
    cout << '\n';

    for (auto iter = begin(nums); iter != end(nums); iter++)
    {
        cout << *iter << ' ';
    }
    cout << '\n';

    vector<string> words;
    cout << "Enter three words: ";
    for (int i; i < 3; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    cout << "The vector 'words' has " << words.size() << " elements...\n";

    for (auto w : words)
    {
        cout << " - " << w << '\n';
    }

    cout << "Sorted..." << '\n';
    // The range of elements, given the first and last as iterators.
    sort(begin(words), end(words));
    for (auto item : words)
    {
        cout << " - " << item << '\n';
    }

    cout << "\nCounting matching elements in a range\n";

    int threes = count(begin(nums), end(nums), 3);
    cout << "The vector 'nums' has " << threes << " elements with the value 3.\n";

    int tees = count(begin(words[0]), end(words[0]), 't');
    cout << "The first word in the vector 'words' has " << tees << " letter 't''s.\n";

    return 0;
}
