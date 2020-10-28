#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;		// mutual exclusion: 상호 배제

int main()
{
	//cout << std::this_thread::get_id() << endl;

	//const int num_pro = std::thread::hardware_concurrency();
	//
	//cout << std::this_thread::get_id() << endl;

	//vector<std::thread> my_threads;
	//my_threads.resize(num_pro - 2);

	//for(auto& e: my_threads)
	//	e =	std::thread([]() {	
	//				cout << std::this_thread::get_id() << endl;
	//				while (true){}});

	//for (auto& e : my_threads)
	//	e.join();

	/*----------------------------------------------------------------*/

	auto work_func = [](const string& name)
	{
		for (int i = 0; i < 5; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(100));

			mtx.lock();
			cout << name << " " << std::this_thread::get_id() << " is working " << i << endl;
			mtx.unlock();
		}
	};

	//work_func("JackJack");
	//work_func("Dash");

	std::thread t1 = std::thread(work_func, "JackJack");
	std::thread t2 = std::thread(work_func, "Dash");

	t1.join();
	t2.join();

	return 0;
}