#include <iostream>
using namespace std;




void findLargest(int **input, int nRows, int mCols)
{
    int row_max = -2147483647;
    int col_max = -2147483647;
    int sum =0; 
    int index; 

    for (int i =0; i<nRows; i++){
        for(int j=0; j<mCols; j++){
            sum = sum+ input[i][j]; 
        }
        if (sum>row_max){
            row_max =sum; 
            index =i; 
        }
    }

    for(int i=0; i<nRows; i++ ){
        for(int j=0; j<mCols; j++){
            sum = sum+ input[j][i];
           
        }
        if(col_max<sum){
            col_max =sum; 
            index =i;
        }
    }

    if(row_max>col_max){
        cout<< "row"<< index << " "<< row_max; 
    }
    else{
        cout<< "coloum"<< index<< " "<< col_max; 
    }

}

















int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cout<<"Enter rows and column"<< endl; 
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}
