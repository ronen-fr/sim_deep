#include <chrono>
#include <iostream>
#include <array>
#include <vector>

using namespace std::chrono;
using namespace std::chrono_literals;
using namespace std::literals;

using namespace std;


class Pool {
  int num_pgs{4};
  int reps{3};
  seconds interval{7*24*3600s};
  seconds max_interval{interval * 2};
  seconds scrub_time{2*3600};  // for now
};

class Osd_conf {
};

class Conf {
  // [s, Primary], [s, Replica], [deep, Primary], [deep, Replica]
  array<int, 4> max_scrubs{2, 4, 1, 2};
  // ...
};

class Pg_runtime {
  time_point<steady_clock> last_scrub;
  time_point<steady_clock> last_deep_scrub;
};


int main()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
