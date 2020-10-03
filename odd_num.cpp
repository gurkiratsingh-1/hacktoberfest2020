using namespace std;

int main() {

    int i, n;

    // Take input from user.
    cout << "Print all odd numbers till : ";
    cin >> n;

    cout << endl << "Odd numbers from 1 to " << n << " are : " << endl;

    for(i = 1; i <= n; i++) {

        // Check for odd or not.
        if((i % 2) != 0) {

            cout << i << " ";

        }
    }

    return 0;
}
