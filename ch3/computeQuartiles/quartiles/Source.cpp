// Compute quartiles of given set of integers

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> vec;
	int x;
	std::cout << " Enter integers for computing quartiles: ";
	while (std::cin >> x)
	{
		std::cout << " Enter next integer for computing quartiles: ";
		vec.push_back(x);
	}
	std::sort(vec.begin(), vec.end());

	// compute mid, mid of lower vec and mid of upper vec
	auto size = vec.size();
	auto mid = size / 2;
	auto lower = mid / 2;
	auto upper = (size + mid) / 2;

	auto median = size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
	auto lower_qtr = mid % 2 == 0 ? (vec[lower] + vec[lower - 1]) / 2 : vec[lower];
	auto upper_qtr = mid % 2 == 0 ? (vec[upper] + vec[upper - 1]) / 2 : vec[upper];

	std::cout << "25th Quartile is " << lower_qtr << std::endl;
	std::cout << "50th Quartile is " << median << std::endl;
	std::cout << "75th Quartile is " << upper_qtr << std::endl;

	return 0;

}