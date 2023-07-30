// Function to search x in arr
// arr: input array
// X: element to be searched for
int search(int arr[], int N, int X)
{
    int y = -1;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            y = i;
            break;
        }
    }
    return y;
}