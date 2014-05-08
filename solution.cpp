// you can also use includes, for example:
#include <algorithm>

bool Greater(int a, int b)
{
    return abs(a) < abs(b);
}

int solution(vector<int> &A) {
    // write your code in C++98
  std::make_heap (A.begin(),A.end(),Greater);
  //This sorting algorithm has o(Nlog(N)) time complexity and o(1) space complexity
  std::sort_heap (A.begin(),A.end(),Greater);

  unsigned long min = abs(A[0] + A[0]);
  for(int i=0; i<A.size()-1;++i) {
      if(abs(A[i]+A[i+1])<min)
        min = abs(A[i]+A[i+1]);
  }
  return min;
}
