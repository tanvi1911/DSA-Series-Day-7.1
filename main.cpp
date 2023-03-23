// #include <iostream>
// using namespace std;

// int power(int a, int b) {
//   int ans = 1;
//   for(int i=1; i <= b; i++) {
//     ans = ans*a;
//   }
//   return ans;
// }

// int main() {

//   int a , b;
//   cin >> a >> b;

//   int answer = power(a,b);
//   cout << answer;

//   int c , d;
//   cin >> a >> b;

//   int answer = power(a,b);
//   cout << answer;
  
//   return 0;
// }

/********************************2nd METHOD***************************************/

// #include <iostream>
// using namespace std;

// int power() {
//   int a, b;
//   cin >> a >> b;

//   int ans = 1;
//   for(int i = 1; i <= b; i++) {
//     ans = ans * a;
//   }
//   return ans;
// }

// int main() {
//   int ans = power();
//   cout << "The answer is : " << ans << endl;
//   return 0;
// }


/********************************EVEN ODD***************************************/

// #include <iostream>
// using namespace std;

// bool isEven(int a){
//   if(a&1) {
//     return 0;
//   }
//   return 1;
// }

// int main() {

//   int num;
//   cin >> num;

//   if(isEven(num)) {
//     cout << "Is even";
//   }
//   else{
//   cout << "Is odd";
//   }
  
//   return 0;
// }


/********************************NCR***************************************/

// #include <iostream>
// using namespace std;

// int factorial(int no) {
//   int fact = 1;
//   for (int i = 1; i<=no; i++){
//     fact = fact * i;
//   }
//   return fact;
// }

// int nCr(int n, int r){
//   int num = factorial(n);
//   int denom = factorial(r) * factorial(n-r);
//   int ans = num/denom;
//   return ans;
// }

// int main() {
//   int n, r;
//   cin >> n >> r;
//   cout << "The answer is : " << nCr(n, r);
//   return 0;
// }


/************************PRIME NO.***************************************/

#include <iostream>
using namespace std;

bool isPrime(int n){
  for(int i = 2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

void update(int a) {
  a = a/2;
}

int update2(int a) {
  a -= 5;
  return a;
}

int main() {
  // int no; 
  // cout << "Enter a number: ";
  // cin >> no;

  // if(isPrime(no)){
  //   cout << "Is a prime no";
  // }
  // else{
  // cout << "Is not a Prime no.";
  // }

  int a = 10;
  int b = 15;
  // update(a);
  update2(a);  //OUTPUT: 10
  // cout << a << endl;   //OUTPUT: 10
  cout << a << endl;   //OUTPUT: 10
  
  return 0;
}