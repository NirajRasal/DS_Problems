/* Following program is a C++ implementation of Rabin Karp
Algorithm given in the CLRS book */
#include <bits/stdc++.h>
using namespace std;

// d is the number of characters in the input alphabet
#define d 256

void search(char pat[], char txt[], int prime_no)
{
	int pat_len = strlen(pat);
	int text_len = strlen(txt);
	int i, j;
	int p = 0; // hash value for pattern
	int t = 0; // hash value for txt
	int h = 1;

	// The value of h would be "pow(d, pat_len-1)%prime_no"
	for (i = 0; i < pat_len - 1; i++)
		h = (h * d) % prime_no;

	// Calculate the hash value of pattern and first
	// window of text
	for (i = 0; i < pat_len; i++)
	{
		p = (d * p + pat[i]) % prime_no;
		t = (d * t + txt[i]) % prime_no;
	}

	// Slide the pattern over text one by one
	for (i = 0; i <= text_len - pat_len; i++)
	{

		// Check the hash values of current window of text
		// and pattern. If the hash values match then only
		// check for characters on by one
		if ( p == t )
		{
			/* Check for characters one by one */
			for (j = 0; j < pat_len; j++)
			{
				if (txt[i+j] != pat[j])
					break;
			}

			// if p == t and pat[0...pat_len-1] = txt[i, i+1, ...i+pat_len-1]
			if (j == pat_len)
				cout<<"Pattern found at index "<< i<<endl;
		}

		// Calculate hash value for next window of text: Remove
		// leading digit, add trailing digit
		if ( i < text_len-pat_len )
		{
			t = (d*(t - txt[i]*h) + txt[i+pat_len])%prime_no;

			// We might get negative value of t, converting it
			// to positive
			if (t < 0)
			t = (t + prime_no);
		}
	}
}

/* Driver code */
int main()
{
	char txt[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	
	// A prime number
	int prime_no = 101;
	
	// Function Call
	search(pat, txt, prime_no);
	return 0;
}

// This is code is contributed by rathbhupendra
