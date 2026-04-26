#include<iostream>
using namespace std;

// -------- Program 1 --------
// Hello World Program
void program1() {
    cout << "Hello World" << endl;
}

// -------- Program 2 --------
// Addition of two numbers
void program2() {
    int a = 5;
    int b = 3;
    int sum = a + b;

    cout << "Sum = " << sum << endl;
}

// -------- Program 3 --------
// Subtraction of two numbers
void program3() {
    int a = 10;
    int b = 4;
    int diff = a - b;

    cout << "Difference = " << diff << endl;
}

// -------- Program 4 --------
// Multiplication
void program4() {
    int a = 6;
    int b = 2;
    int product = a * b;

    cout << "Product = " << product << endl;
}

// -------- Program 5 --------
// Division
void program5() {
    int a = 10;
    int b = 2;
    int result = a / b;

    cout << "Quotient = " << result << endl;
}

// -------- Program 6 --------
// Check even or odd
void program6() {
    int number = 7;

    if(number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

// -------- Program 7 --------
// Largest of two numbers
void program7() {
    int a = 8;
    int b = 5;

    if(a > b) {
        cout << a << " is largest" << endl;
    } else {
        cout << b << " is largest" << endl;
    }
}

// -------- Program 8 --------
// Swap two numbers
void program8() {
    int a = 5;
    int b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;
}

// -------- Program 9 --------
// Factorial of a number
void program9() {
    int n = 5;
    int factorial = 1;

    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial = " << factorial << endl;
}

// -------- Program 10 --------
// Print numbers from 1 to 10
void program10() {
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// -------- Program 11 --------
// Sum of first 10 numbers
void program11() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl;
}

// -------- Program 12 --------
// Reverse a number
void program12() {
    int number = 123;
    int reverse = 0;

    while(number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    cout << "Reverse = " << reverse << endl;
}

// -------- Program 13 --------
// Check palindrome
void program13() {
    int number = 121;
    int temp = number;
    int reverse = 0;

    while(number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if(temp == reverse) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
}

// -------- Program 14 --------
// Prime number check
void program14() {
    int number = 7;
    bool isPrime = true;

    for(int i = 2; i <= number / 2; i++) {
        if(number % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
}

// -------- Program 15 --------
// Fibonacci series
void program15() {
    int a = 0;
    int b = 1;
    int next;

    for(int i = 1; i <= 5; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

// -------- Program 16 --------
// Square of numbers
void program16() {
    for(int i = 1; i <= 5; i++) {
        cout << i * i << " ";
    }
    cout << endl;
}

// -------- Program 17 --------
// Cube of numbers
void program17() {
    for(int i = 1; i <= 5; i++) {
        cout << i * i * i << " ";
    }
    cout << endl;
}

// -------- Program 18 --------
// Sum of digits
void program18() {
    int number = 123;
    int sum = 0;

    while(number > 0) {
        sum = sum + (number % 10);
        number = number / 10;
    }

    cout << "Sum of digits = " << sum << endl;
}

// -------- Program 19 --------
// Count digits
void program19() {
    int number = 12345;
    int count = 0;

    while(number > 0) {
        count++;
        number = number / 10;
    }

    cout << "Total digits = " << count << endl;
}

// -------- Program 20 --------
// Simple Interest
void program20() {
    int principal = 1000;
    int rate = 5;
    int time = 2;

    float SI = (principal * rate * time) / 100.0;

    cout << "Simple Interest = " << SI << endl;
}


// -------- Program 21 --------
// Area of Circle
void program21() {
    float radius = 5;
    float area = 3.14 * radius * radius;

    cout << "Area of Circle = " << area << endl;
}

// -------- Program 22 --------
// Perimeter of Rectangle
void program22() {
    int length = 10;
    int breadth = 5;

    int perimeter = 2 * (length + breadth);

    cout << "Perimeter = " << perimeter << endl;
}

// -------- Program 23 --------
// Check Positive or Negative
void program23() {
    int number = -5;

    if(number >= 0) {
        cout << "Positive Number" << endl;
    } else {
        cout << "Negative Number" << endl;
    }
}

// -------- Program 24 --------
// Largest of three numbers
void program24() {
    int a = 5, b = 9, c = 7;

    if(a > b && a > c) {
        cout << "Largest = " << a << endl;
    } else if(b > c) {
        cout << "Largest = " << b << endl;
    } else {
        cout << "Largest = " << c << endl;
    }
}

// -------- Program 25 --------
// Multiplication Table
void program25() {
    int num = 5;

    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

// -------- Program 26 --------
// Sum of Even Numbers
void program26() {
    int sum = 0;

    for(int i = 2; i <= 10; i += 2) {
        sum += i;
    }

    cout << "Sum of even numbers = " << sum << endl;
}

// -------- Program 27 --------
// Sum of Odd Numbers
void program27() {
    int sum = 0;

    for(int i = 1; i <= 10; i += 2) {
        sum += i;
    }

    cout << "Sum of odd numbers = " << sum << endl;
}

// -------- Program 28 --------
// Power of a number
void program28() {
    int base = 2;
    int exponent = 3;
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << "Power = " << result << endl;
}

// -------- Program 29 --------
// Armstrong Number
void program29() {
    int number = 153;
    int temp = number;
    int sum = 0;

    while(number > 0) {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if(sum == temp) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong" << endl;
    }
}

// -------- Program 30 --------
// Print ASCII values
void program30() {
    for(int i = 65; i <= 70; i++) {
        cout << char(i) << " = " << i << endl;
    }
}

// -------- Program 31 --------
// Maximum in array
void program31() {
    int arr[5] = {2, 8, 1, 9, 4};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Maximum = " << max << endl;
}

// -------- Program 32 --------
// Minimum in array
void program32() {
    int arr[5] = {2, 8, 1, 9, 4};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum = " << min << endl;
}

// -------- Program 33 --------
// Sum of array elements
void program33() {
    int arr[5] = {1,2,3,4,5};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
}

// -------- Program 34 --------
// Reverse array
void program34() {
    int arr[5] = {1,2,3,4,5};

    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// -------- Program 35 --------
// Linear search
void program35() {
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    bool found = false;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Element Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}

// -------- Program 36 --------
// Count vowels in string
void program36() {
    char str[] = "hello";
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
            count++;
        }
    }

    cout << "Vowels = " << count << endl;
}

// -------- Program 37 --------
// String length
void program37() {
    char str[] = "hello";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    cout << "Length = " << length << endl;
}

// -------- Program 38 --------
// Reverse string
void program38() {
    char str[] = "hello";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    for(int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << endl;
}

// -------- Program 39 --------
// Leap Year Check
void program39() {
    int year = 2024;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not Leap Year" << endl;
    }
}

// -------- Program 40 --------
// Celsius to Fahrenheit
void program40() {
    float celsius = 25;

    float fahrenheit = (celsius * 9/5) + 32;

    cout << "Fahrenheit = " << fahrenheit << endl;
}

// -------- Program 41 --------
// Check even numbers in array
void program41() {
    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

// -------- Program 42 --------
// Sum of two arrays
void program42() {
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};

    for(int i = 0; i < 3; i++) {
        cout << a[i] + b[i] << " ";
    }

    cout << endl;
}

// -------- Program 43 --------
// Count even and odd
void program43() {
    int arr[5] = {1,2,3,4,5};
    int even = 0, odd = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even=" << even << " Odd=" << odd << endl;
}

// -------- Program 44 --------
// Find second largest
void program44() {
    int arr[5] = {10,20,30,40,50};
    int max = 0, second = 0;

    for(int i = 0; i < 5; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    cout << "Second largest = " << second << endl;
}

// -------- Program 45 --------
// Check number is divisible by 5
void program45() {
    int num = 25;

    if(num % 5 == 0) {
        cout << "Divisible by 5" << endl;
    } else {
        cout << "Not divisible by 5" << endl;
    }
}

// -------- Program 46 --------
// Print pattern
void program46() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// -------- Program 47 --------
// Sum of natural numbers
void program47() {
    int n = 5;
    int sum = (n * (n + 1)) / 2;

    cout << "Sum = " << sum << endl;
}

// -------- Program 48 --------
// Check uppercase or lowercase
void program48() {
    char ch = 'A';

    if(ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase" << endl;
    } else {
        cout << "Lowercase" << endl;
    }
}

// -------- Program 49 --------
// Print reverse numbers
void program49() {
    for(int i = 10; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}
// -------- Program 51 --------
// Find square root (approx)
void program51() {
    int n = 16;
    cout << "Square root = " << sqrt(n) << endl;
}

// -------- Program 52 --------
// Check perfect number
void program52() {
    int n = 6, sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0) sum += i;
    }
    if(sum==n) cout<<"Perfect Number"<<endl;
    else cout<<"Not Perfect"<<endl;
}

// -------- Program 53 --------
// Sum of elements in 2D array
void program53() {
    int arr[2][2] = {{1,2},{3,4}};
    int sum = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum += arr[i][j];
        }
    }
    cout<<"Sum="<<sum<<endl;
}

// -------- Program 54 --------
// Transpose matrix
void program54() {
    int arr[2][2] = {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

// -------- Program 55 --------
// Sum of diagonal
void program55() {
    int arr[2][2]={{1,2},{3,4}};
    int sum=0;
    for(int i=0;i<2;i++){
        sum+=arr[i][i];
    }
    cout<<"Diagonal Sum="<<sum<<endl;
}

// -------- Program 56 --------
// Print lower triangle
void program56() {
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// -------- Program 57 --------
// Print upper triangle
void program57() {
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// -------- Program 58 --------
// Count words in string
void program58() {
    char str[]="hello world";
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ') count++;
    }
    cout<<"Words="<<count<<endl;
}

// -------- Program 59 --------
// Concatenate two strings
void program59() {
    string a="Hello ";
    string b="World";
    cout<<a+b<<endl;
}

// -------- Program 60 --------
// Compare two strings
void program60() {
    string a="abc", b="abc";
    if(a==b) cout<<"Equal"<<endl;
    else cout<<"Not Equal"<<endl;
}

// -------- Program 61 --------
// Convert lowercase to uppercase
void program61() {
    char ch='a';
    cout<<(char)(ch-32)<<endl;
}

// -------- Program 62 --------
// Count digits, letters
void program62() {
    char str[]="abc123";
    int d=0,l=0;
    for(int i=0;str[i];i++){
        if(isdigit(str[i])) d++;
        else if(isalpha(str[i])) l++;
    }
    cout<<"Digits="<<d<<" Letters="<<l<<endl;
}

// -------- Program 63 --------
// Bubble sort
void program63() {
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// -------- Program 64 --------
// Selection sort
void program64() {
    int arr[5]={64,25,12,22,11};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]) min=j;
        }
        int t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// -------- Program 65 --------
// Binary search
void program65() {
    int arr[5]={1,2,3,4,5}, key=3, l=0,h=4;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==key){ cout<<"Found"<<endl; break;}
        else if(arr[mid]<key) l=mid+1;
        else h=mid-1;
    }
}

// -------- Program 66 --------
// Sum of matrix rows
void program66() {
    int a[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<2;j++) sum+=a[i][j];
        cout<<"Row sum="<<sum<<endl;
    }
}

// -------- Program 67 --------
// Sum of matrix columns
void program67() {
    int a[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<2;j++) sum+=a[j][i];
        cout<<"Col sum="<<sum<<endl;
    }
}

// -------- Program 68 --------
// Check identity matrix
void program68() {
    int a[2][2]={{1,0},{0,1}};
    bool flag=true;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if((i==j && a[i][j]!=1)||(i!=j && a[i][j]!=0))
                flag=false;
        }
    }
    cout<<(flag?"Identity":"Not")<<endl;
}

// -------- Program 69 --------
// Find GCD
void program69() {
    int a=12,b=18;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    cout<<"GCD="<<a<<endl;
}

// -------- Program 70 --------
// Find LCM
void program70() {
    int a=12,b=18;
    int max=(a>b)?a:b;
    while(true){
        if(max%a==0 && max%b==0){
            cout<<"LCM="<<max<<endl;
            break;
        }
        max++;
    }
}

// -------- Program 71 --------
// Check strong number
void program71() {
    int n=145,temp=n,sum=0;
    while(n){
        int d=n%10,f=1;
        for(int i=1;i<=d;i++) f*=i;
        sum+=f;
        n/=10;
    }
    cout<<(sum==temp?"Strong":"Not")<<endl;
}

// -------- Program 72 --------
// Sum of series
void program72() {
    int sum=0;
    for(int i=1;i<=5;i++) sum+=i*i;
    cout<<"Sum="<<sum<<endl;
}

// -------- Program 73 --------
// Print alphabet A-Z
void program73() {
    for(char c='A';c<='Z';c++) cout<<c<<" ";
    cout<<endl;
}

// -------- Program 74 --------
// Print numbers divisible by 3
void program74() {
    for(int i=1;i<=30;i++){
        if(i%3==0) cout<<i<<" ";
    }
    cout<<endl;
}

// -------- Program 75 --------
// Sum of prime numbers
void program75() {
    int sum=0;
    for(int n=2;n<=10;n++){
        bool prime=true;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) prime=false;
        }
        if(prime) sum+=n;
    }
    cout<<"Sum of primes="<<sum<<endl;
}

// -------- Program 76 --------
// Check anagram
void program76() {
    string a="listen", b="silent";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    cout<<(a==b?"Anagram":"Not")<<endl;
}

// -------- Program 77 --------
// Copy array
void program77() {
    int a[3]={1,2,3}, b[3];
    for(int i=0;i<3;i++) b[i]=a[i];
    for(int i=0;i<3;i++) cout<<b[i]<<" ";
    cout<<endl;
}

// -------- Program 78 --------
// Count frequency
void program78() {
    int arr[5]={1,2,2,3,2}, count=0;
    for(int i=0;i<5;i++){
        if(arr[i]==2) count++;
    }
    cout<<"Frequency="<<count<<endl;
}

// -------- Program 79 --------
// Merge arrays
void program79() {
    int a[3]={1,2,3}, b[3]={4,5,6};
    for(int i=0;i<3;i++) cout<<a[i]<<" ";
    for(int i=0;i<3;i++) cout<<b[i]<<" ";
    cout<<endl;
}

// -------- Program 80 --------
// Check sorted array
void program80() {
    int arr[5]={1,2,3,4,5};
    bool sorted=true;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]) sorted=false;
    }
    cout<<(sorted?"Sorted":"Not Sorted")<<endl;
}

// -------- Program 81 --------
// Find missing number
void program81() {
    int arr[4]={1,2,4,5}, sum=0;
    for(int i=0;i<4;i++) sum+=arr[i];
    cout<<"Missing="<<15-sum<<endl;
}

// -------- Program 82 --------
// Average of array
void program82() {
    int arr[5]={1,2,3,4,5}, sum=0;
    for(int i=0;i<5;i++) sum+=arr[i];
    cout<<"Avg="<<sum/5.0<<endl;
}

// -------- Program 83 --------
// Check palindrome string
void program83() {
    string s="madam";
    string rev=s;
    reverse(rev.begin(),rev.end());
    cout<<(s==rev?"Palindrome":"Not")<<endl;
}

// -------- Program 84 --------
// Toggle case
void program84() {
    char ch='a';
    if(ch>='a'&&ch<='z') cout<<(char)(ch-32);
    else cout<<(char)(ch+32);
    cout<<endl;
}

// -------- Program 85 --------
// Print star square
void program85() {
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// -------- Program 86 --------
// Sum of digits using recursion
int sumDigits(int n){
    if(n==0) return 0;
    return n%10 + sumDigits(n/10);
}
void program86() {
    cout<<"Sum="<<sumDigits(123)<<endl;
}

// -------- Program 87 --------
// Factorial using recursion
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
void program87() {
    cout<<"Factorial="<<fact(5)<<endl;
}

// -------- Program 88 --------
// Power using recursion
int power(int b,int e){
    if(e==0) return 1;
    return b*power(b,e-1);
}
void program88() {
    cout<<"Power="<<power(2,3)<<endl;
}

// -------- Program 89 --------
// Sum of array using recursion
int sumArr(int a[],int n){
    if(n==0) return 0;
    return a[n-1]+sumArr(a,n-1);
}
void program89() {
    int a[3]={1,2,3};
    cout<<"Sum="<<sumArr(a,3)<<endl;
}

// -------- Program 90 --------
// Print numbers recursively
void printNum(int n){
    if(n==0) return;
    printNum(n-1);
    cout<<n<<" ";
}
void program90() {
    printNum(5);
    cout<<endl;
}

// -------- Program 91 --------
// Check even using function
bool isEven(int n){ return n%2==0; }
void program91() {
    cout<<(isEven(4)?"Even":"Odd")<<endl;
}

// -------- Program 92 --------
// Max using function
int maxNum(int a,int b){ return (a>b)?a:b; }
void program92() {
    cout<<"Max="<<maxNum(5,10)<<endl;
}

// -------- Program 93 --------
// Sum using function
int sumNum(int a,int b){ return a+b; }
void program93() {
    cout<<"Sum="<<sumNum(5,10)<<endl;
}

// -------- Program 94 --------
// Swap using function
void swapNum(int &a,int &b){
    int t=a; a=b; b=t;
}
void program94() {
    int a=5,b=10;
    swapNum(a,b);
    cout<<a<<" "<<b<<endl;
}

// -------- Program 95 --------
// Area using function
float areaCircle(float r){
    return 3.14*r*r;
}
void program95() {
    cout<<"Area="<<areaCircle(5)<<endl;
}

// -------- Program 96 --------
// Check vowel function
bool isVowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
void program96() {
    cout<<(isVowel('a')?"Vowel":"Consonant")<<endl;
}

// -------- Program 97 --------
// Print table using function
void table(int n){
    for(int i=1;i<=10;i++)
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
}
void program97() {
    table(5);
}

// -------- Program 98 --------
// Count digits using function
int countDigits(int n){
    int c=0;
    while(n){c++; n/=10;}
    return c;
}
void program98() {
    cout<<"Digits="<<countDigits(12345)<<endl;
}

// -------- Program 99 --------
// Reverse using function
int reverseNum(int n){
    int r=0;
    while(n){r=r*10+n%10;n/=10;}
    return r;
}
void program99() {
    cout<<"Reverse="<<reverseNum(123)<<endl;
}

// -------- Program 100 --------
// Check palindrome using function
bool isPalindrome(int n){
    return n==reverseNum(n);
}
void program100() {
    cout<<(isPalindrome(121)?"Palindrome":"Not")<<endl;
}

// -------- Program 50 --------
// Check vowel or consonant
void program50() {
    char ch = 'a';

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }
}
// -------- Program 101 --------
// Array using pointers (access elements using pointer)
void program101() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// -------- Program 102 --------
// Reverse array using pointers
void program102() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr;
    int *end = arr + 4;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 103 --------
// Pattern - Star Triangle
void program103() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// -------- Program 104 --------
// Pointer using variable
void program104() {
    int num = 10;
    int *ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << ptr << endl;
    cout << "Value using pointer = " << *ptr << endl;
}

// -------- Program 105 --------
// Average of array
void program105() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    float avg = sum / 5.0;

    cout << "Average = " << avg << endl;
}

// -------- Program 106 --------
// Count even numbers in array
void program106() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int count = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Even numbers count = " << count << endl;
}
// -------- Program 107 --------
// Check array is sorted or not
void program107() {
    int arr[5] = {1, 2, 3, 4, 5};
    bool isSorted = true;

    for(int i = 0; i < 4; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
}

// -------- Program 108 --------
// Replace negative numbers with zero
void program108() {
    int arr[5] = {2, -3, 4, -1, 5};

    for(int i = 0; i < 5; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Updated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 109 --------
// Find index of an element (linear search)
void program109() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int index = -1;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        cout << "Element found at index = " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

// -------- Program 110 --------
// Add two arrays
void program110() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int result[3];

    for(int i = 0; i < 3; i++) {
        result[i] = a[i] + b[i];
    }

    cout << "Result array: ";
    for(int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

// -------- Program 111 --------
// Count zero elements in array
void program111() {
    int arr[6] = {0, 1, 0, 2, 3, 0};
    int count = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] == 0) {
            count++;
        }
    }

    cout << "Zero count = " << count << endl;
}

// -------- Program 112 --------
// Right rotate array by 1 position
void program112() {
    int arr[5] = {1, 2, 3, 4, 5};
    int last = arr[4];

    for(int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    cout << "Rotated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 113 --------
// Display only first node (linked list)
struct Node {
    int data;
    Node* next;
};

void program113() {
    Node* head = new Node{10, NULL};

    cout << "First node data = " << head->data << endl;
}

// -------- Program 114 --------
// Create two nodes (linked list)
void program114() {
    Node* first = new Node{10, NULL};
    Node* second = new Node{20, NULL};

    first->next = second;

    cout << "First node = " << first->data << endl;
    cout << "Second node = " << second->data << endl;
}
// -------- Program 115 --------
// Traverse linked list manually
void program115() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 116 --------
// Insert after a node
void program116() {
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    head->next = second;

    Node* newNode = new Node{15, NULL};
    newNode->next = head->next;
    head->next = newNode;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 117 --------
// Count nodes
void program117() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};

    int count = 0;
    Node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Total nodes = " << count << endl;
}

// -------- Program 118 --------
// Print last node
void program118() {
    Node* head = new Node{5, NULL};
    head->next = new Node{10, NULL};

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    cout << "Last node = " << temp->data << endl;
}

// -------- Program 119 --------
// Delete single node (first node)
void program119() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};

    head = head->next;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 120 --------
// Update node value
void program120() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};

    head->data = 50;

    cout << "Updated first node = " << head->data << endl;
}

// -------- Program 121 --------
// Check empty linked list
void program121() {
    Node* head = NULL;

    if(head == NULL) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
}

// -------- Program 122 --------
// Create circular linked list
void program122() {
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};

    head->next = second;
    second->next = head; // circular link

    cout << "Circular list created" << endl;
}

// -------- Program 123 --------
// Bank Account System (simple)
class Bank {
    int balance;
public:
    Bank() {
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void display() {
        cout << "Balance = " << balance << endl;
    }
};

void program123() {
    Bank b;
    b.deposit(1000);
    b.display();
}

// -------- Program 124 --------
// Default constructor with value
class Demo {
public:
    int x;

    Demo() {
        x = 10;
    }
};

void program124() {
    Demo d;
    cout << "Value = " << d.x << endl;
}

// -------- Program 125 --------
// Simple inheritance
class A {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class B : public A {};

void program125() {
    B obj;
    obj.show();
}

// -------- Program 126 --------
// Function overloading
class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

void program126() {
    Sum s;
    cout << s.add(2, 3) << endl;
    cout << s.add(2.5f, 3.5f) << endl;
}

// -------- Program 127 --------
// Encapsulation using private
class Encap {
private:
    int data;

public:
    void setData(int d) {
        data = d;
    }

    void getData() {
        cout << "Data = " << data << endl;
    }
};

void program127() {
    Encap e;
    e.setData(100);
    e.getData();
}

// -------- Program 128 --------
// Single inheritance with data
class Base {
public:
    int x = 10;
};

class Derived : public Base {
public:
    void show() {
        cout << "Value = " << x << endl;
    }
};

void program128() {
    Derived d;
    d.show();
}

// -------- Program 129 --------
// Multilevel inheritance
class X {
public:
    void msg() {
        cout << "Class X" << endl;
    }
};

class Y : public X {};
class Z : public Y {};

void program129() {
    Z obj;
    obj.msg();
}

// -------- Program 130 --------
// Inline function
inline int square(int x) {
    return x * x;
}

void program130() {
    cout << "Square = " << square(5) << endl;
}
// -------- Program 131 --------
// Encapsulation using data member
class EncapsulationDemo {
private:
    int data;

public:
    void setData(int d) {
        data = d;
    }

    void showData() {
        cout << "Data = " << data << endl;
    }
};

void program131() {
    EncapsulationDemo obj;
    obj.setData(50);
    obj.showData();
}

// -------- Program 132 --------
// Data hiding demonstration
class DataHiding {
private:
    int secret;

public:
    void setSecret(int s) {
        secret = s;
    }

    void displaySecret() {
        cout << "Secret = " << secret << endl;
    }
};

void program132() {
    DataHiding obj;
    obj.setSecret(100);
    obj.displaySecret();
}

// -------- Program 133 --------
// Abstraction using class
class AbstractDemo {
public:
    void show() {
        cout << "This is abstraction example" << endl;
    }
};

void program133() {
    AbstractDemo obj;
    obj.show();
}

// -------- Program 134 --------
// Abstraction (hiding implementation)
class AbstractionHide {
public:
    void display() {
        calculate();
    }

private:
    void calculate() {
        cout << "Hidden logic executed" << endl;
    }
};

void program134() {
    AbstractionHide obj;
    obj.display();
}

// -------- Program 135 --------
// Single inheritance
class Parent {
public:
    void showParent() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class" << endl;
    }
};

void program135() {
    Child obj;
    obj.showParent();
    obj.showChild();
}

// -------- Program 136 --------
// Multiple inheritance
class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B {
public:
    void showB() { cout << "Class B" << endl; }
};

class C : public A, public B {};

void program136() {
    C obj;
    obj.showA();
    obj.showB();
}

// -------- Program 137 --------
// Hierarchical inheritance
class BaseClass {
public:
    void show() { cout << "Base Class" << endl; }
};

class Derived1 : public BaseClass {};
class Derived2 : public BaseClass {};

void program137() {
    Derived1 d1;
    Derived2 d2;

    d1.show();
    d2.show();
}

// -------- Program 138 --------
// Function overloading
class Overload {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

void program138() {
    Overload obj;
    cout << obj.add(2, 3) << endl;
    cout << obj.add(2, 3, 4) << endl;
}

// -------- Program 139 --------
// Operator overloading (+)
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

void program139() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1 + c2;
    c3.display();
}

// -------- Program 140 --------
// Function overloading (again variation)
void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(float b) {
    cout << "Float: " << b << endl;
}

void program140() {
    display(10);
    display(5.5f);
}

// -------- Program 141 --------
// Virtual function
class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

void program141() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
}

// -------- Program 142 --------
// Student Management System (basic)
class Student {
public:
    int id;
    string name;

    void input() {
        id = 1;
        name = "Ali";
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

void program142() {
    Student s;
    s.input();
    s.display();
}

// -------- Program 143 --------
// Employee Management System (basic)
class Employee {
public:
    int id;
    string name;

    void input() {
        id = 101;
        name = "John";
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

void program143() {
    Employee e;
    e.input();
    e.display();
}

// -------- Program 144 --------
// Write to file
void program144() {
    ofstream file("test.txt");
    file << "Hello File";
    file.close();

    cout << "Data written to file" << endl;
}

// -------- Program 145 --------
// Read from file
void program145() {
    ifstream file("test.txt");
    string data;

    while(getline(file, data)) {
        cout << data << endl;
    }

    file.close();
}
// -------- MAIN FUNCTION --------
int main() {
    program1();
    program2();
    program3();
    program4();
    program5();
    program6();
    program7();
    program8();
    program9();
    program10();
    program11();
    program12();
    program13();
    program14();
    program15();
    program16();
    program17();
    program18();
    program19();
    program20();
program21(); program22(); program23(); program24(); program25();
program26(); program27(); program28(); program29(); program30();
program31(); program32(); program33(); program34(); program35();
program36(); program37(); program38(); program39(); program40();
program41(); program42(); program43(); program44(); program45();
program46(); program47(); program48(); program49(); program50();
program51(); program52(); program53(); program54(); program55();
program56(); program57(); program58(); program59(); program60();
program61(); program62(); program63(); program64(); program65();
program66(); program67(); program68(); program69(); program70();
program71(); program72(); program73(); program74(); program75();
program76(); program77(); program78(); program79(); program80();
program81(); program82(); program83(); program84(); program85();
program86(); program87(); program88(); program89(); program90();
program91(); program92(); program93(); program94(); program95();
program96(); program97(); program98(); program99(); program100();
// -------- Program 101 --------
// Array using pointers (access elements using pointer)
void program101() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements using pointer: ";
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// -------- Program 102 --------
// Reverse array using pointers
void program102() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *start = arr;
    int *end = arr + 4;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 103 --------
// Pattern - Star Triangle
void program103() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// -------- Program 104 --------
// Pointer using variable
void program104() {
    int num = 10;
    int *ptr = &num;

    cout << "Value of num = " << num << endl;
    cout << "Address of num = " << ptr << endl;
    cout << "Value using pointer = " << *ptr << endl;
}

// -------- Program 105 --------
// Average of array
void program105() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    float avg = sum / 5.0;

    cout << "Average = " << avg << endl;
}

// -------- Program 106 --------
// Count even numbers in array
void program106() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int count = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Even numbers count = " << count << endl;
}
// -------- Program 107 --------
// Check array is sorted or not
void program107() {
    int arr[5] = {1, 2, 3, 4, 5};
    bool isSorted = true;

    for(int i = 0; i < 4; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
}

// -------- Program 108 --------
// Replace negative numbers with zero
void program108() {
    int arr[5] = {2, -3, 4, -1, 5};

    for(int i = 0; i < 5; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Updated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 109 --------
// Find index of an element (linear search)
void program109() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int index = -1;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        cout << "Element found at index = " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

// -------- Program 110 --------
// Add two arrays
void program110() {
    int a[3] = {1, 2, 3};
    int b[3] = {4, 5, 6};
    int result[3];

    for(int i = 0; i < 3; i++) {
        result[i] = a[i] + b[i];
    }

    cout << "Result array: ";
    for(int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

// -------- Program 111 --------
// Count zero elements in array
void program111() {
    int arr[6] = {0, 1, 0, 2, 3, 0};
    int count = 0;

    for(int i = 0; i < 6; i++) {
        if(arr[i] == 0) {
            count++;
        }
    }

    cout << "Zero count = " << count << endl;
}

// -------- Program 112 --------
// Right rotate array by 1 position
void program112() {
    int arr[5] = {1, 2, 3, 4, 5};
    int last = arr[4];

    for(int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    cout << "Rotated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// -------- Program 113 --------
// Display only first node (linked list)
struct Node {
    int data;
    Node* next;
};

void program113() {
    Node* head = new Node{10, NULL};

    cout << "First node data = " << head->data << endl;
}

// -------- Program 114 --------
// Create two nodes (linked list)
void program114() {
    Node* first = new Node{10, NULL};
    Node* second = new Node{20, NULL};

    first->next = second;

    cout << "First node = " << first->data << endl;
    cout << "Second node = " << second->data << endl;
}
// -------- Program 115 --------
// Traverse linked list manually
void program115() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 116 --------
// Insert after a node
void program116() {
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    head->next = second;

    Node* newNode = new Node{15, NULL};
    newNode->next = head->next;
    head->next = newNode;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 117 --------
// Count nodes
void program117() {
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};

    int count = 0;
    Node* temp = head;

    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Total nodes = " << count << endl;
}

// -------- Program 118 --------
// Print last node
void program118() {
    Node* head = new Node{5, NULL};
    head->next = new Node{10, NULL};

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    cout << "Last node = " << temp->data << endl;
}

// -------- Program 119 --------
// Delete single node (first node)
void program119() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};

    head = head->next;

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------- Program 120 --------
// Update node value
void program120() {
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};

    head->data = 50;

    cout << "Updated first node = " << head->data << endl;
}

// -------- Program 121 --------
// Check empty linked list
void program121() {
    Node* head = NULL;

    if(head == NULL) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
}

// -------- Program 122 --------
// Create circular linked list
void program122() {
    Node* head = new Node{10, NULL};
    Node* second = new Node{20, NULL};

    head->next = second;
    second->next = head; // circular link

    cout << "Circular list created" << endl;
}

// -------- Program 123 --------
// Bank Account System (simple)
class Bank {
    int balance;
public:
    Bank() {
        balance = 0;
    }

    void deposit(int amount) {
        balance += amount;
    }

    void display() {
        cout << "Balance = " << balance << endl;
    }
};

void program123() {
    Bank b;
    b.deposit(1000);
    b.display();
}

// -------- Program 124 --------
// Default constructor with value
class Demo {
public:
    int x;

    Demo() {
        x = 10;
    }
};

void program124() {
    Demo d;
    cout << "Value = " << d.x << endl;
}

// -------- Program 125 --------
// Simple inheritance
class A {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class B : public A {};

void program125() {
    B obj;
    obj.show();
}

// -------- Program 126 --------
// Function overloading
class Sum {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

void program126() {
    Sum s;
    cout << s.add(2, 3) << endl;
    cout << s.add(2.5f, 3.5f) << endl;
}

// -------- Program 127 --------
// Encapsulation using private
class Encap {
private:
    int data;

public:
    void setData(int d) {
        data = d;
    }

    void getData() {
        cout << "Data = " << data << endl;
    }
};

void program127() {
    Encap e;
    e.setData(100);
    e.getData();
}

// -------- Program 128 --------
// Single inheritance with data
class Base {
public:
    int x = 10;
};

class Derived : public Base {
public:
    void show() {
        cout << "Value = " << x << endl;
    }
};

void program128() {
    Derived d;
    d.show();
}

// -------- Program 129 --------
// Multilevel inheritance
class X {
public:
    void msg() {
        cout << "Class X" << endl;
    }
};

class Y : public X {};
class Z : public Y {};

void program129() {
    Z obj;
    obj.msg();
}

// -------- Program 130 --------
// Inline function
inline int square(int x) {
    return x * x;
}

void program130() {
    cout << "Square = " << square(5) << endl;
// -------- Program 131 --------
// Encapsulation using data member
class EncapsulationDemo {
private:
    int data;

public:
    void setData(int d) {
        data = d;
    }

    void showData() {
        cout << "Data = " << data << endl;
    }
};

void program131() {
    EncapsulationDemo obj;
    obj.setData(50);
    obj.showData();
}

// -------- Program 132 --------
// Data hiding demonstration
class DataHiding {
private:
    int secret;

public:
    void setSecret(int s) {
        secret = s;
    }

    void displaySecret() {
        cout << "Secret = " << secret << endl;
    }
};

void program132() {
    DataHiding obj;
    obj.setSecret(100);
    obj.displaySecret();
}

// -------- Program 133 --------
// Abstraction using class
class AbstractDemo {
public:
    void show() {
        cout << "This is abstraction example" << endl;
    }
};

void program133() {
    AbstractDemo obj;
    obj.show();
}

// -------- Program 134 --------
// Abstraction (hiding implementation)
class AbstractionHide {
public:
    void display() {
        calculate();
    }

private:
    void calculate() {
        cout << "Hidden logic executed" << endl;
    }
};

void program134() {
    AbstractionHide obj;
    obj.display();
}

// -------- Program 135 --------
// Single inheritance
class Parent {
public:
    void showParent() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class" << endl;
    }
};

void program135() {
    Child obj;
    obj.showParent();
    obj.showChild();
}

// -------- Program 136 --------
// Multiple inheritance
class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B {
public:
    void showB() { cout << "Class B" << endl; }
};

class C : public A, public B {};

void program136() {
    C obj;
    obj.showA();
    obj.showB();
}

// -------- Program 137 --------
// Hierarchical inheritance
class BaseClass {
public:
    void show() { cout << "Base Class" << endl; }
};

class Derived1 : public BaseClass {};
class Derived2 : public BaseClass {};

void program137() {
    Derived1 d1;
    Derived2 d2;

    d1.show();
    d2.show();
}

// -------- Program 138 --------
// Function overloading
class Overload {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

void program138() {
    Overload obj;
    cout << obj.add(2, 3) << endl;
    cout << obj.add(2, 3, 4) << endl;
}

// -------- Program 139 --------
// Operator overloading (+)
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

void program139() {
    Complex c1(2,3), c2(4,5);
    Complex c3 = c1 + c2;
    c3.display();
}

// -------- Program 140 --------
// Function overloading (again variation)
void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(float b) {
    cout << "Float: " << b << endl;
}

void program140() {
    display(10);
    display(5.5f);
}

// -------- Program 141 --------
// Virtual function
class Base {
public:
    virtual void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

void program141() {
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->show();
}

// -------- Program 142 --------
// Student Management System (basic)
class Student {
public:
    int id;
    string name;

    void input() {
        id = 1;
        name = "Ali";
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

void program142() {
    Student s;
    s.input();
    s.display();
}

// -------- Program 143 --------
// Employee Management System (basic)
class Employee {
public:
    int id;
    string name;

    void input() {
        id = 101;
        name = "John";
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

void program143() {
    Employee e;
    e.input();
    e.display();
}

// -------- Program 144 --------
// Write to file
void program144() {
    ofstream file("test.txt");
    file << "Hello File";
    file.close();

    cout << "Data written to file" << endl;
}

// -------- Program 145 --------
// Read from file
void program145() {
    ifstream file("test.txt");
    string data;

    while(getline(file, data)) {
        cout << data << endl;
    }

    file.close();
}

// -------- MAIN FUNCTION --------
int main() {
    program1();
    program2();
    program3();
    program4();
    program5();
    program6();
    program7();
    program8();
    program9();
    program10();
    program11();
    program12();
    program13();
    program14();
    program15();
    program16();
    program17();
    program18();
    program19();
    program20();
program21(); program22(); program23(); program24(); program25();
program26(); program27(); program28(); program29(); program30();
program31(); program32(); program33(); program34(); program35();
program36(); program37(); program38(); program39(); program40();
program41(); program42(); program43(); program44(); program45();
program46(); program47(); program48(); program49(); program50();
program51(); program52(); program53(); program54(); program55();
program56(); program57(); program58(); program59(); program60();
program61(); program62(); program63(); program64(); program65();
program66(); program67(); program68(); program69(); program70();
program71(); program72(); program73(); program74(); program75();
program76(); program77(); program78(); program79(); program80();
program81(); program82(); program83(); program84(); program85();
program86(); program87(); program88(); program89(); program90();
program91(); program92(); program93(); program94(); program95();
program96(); program97(); program98(); program99(); program100();
program107();
program108();
program109();
program110();
program111();
program112();
program113();
program114();program115(); program116(); program117(); program118(); program119();
program120(); program121(); program122(); program123(); program124();
program125(); program126(); program127(); program128(); program129();
program130();
program131(); program132(); program133(); program134(); program135();
program136(); program137(); program138(); program139(); program140();
program141(); program142(); program143(); program144(); program145();

   return 0;
}



