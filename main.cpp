
#include <iostream>
#include "Matrix.h"
using namespace std;

ostream& operator<<(ostream& out, const Matrix& mat);
istream& operator>>(istream& in,  Matrix& mat);

int main()
{
    int data1 [] = {1,2,3,4,5,6,7,8};
        int data2 [] = {13,233,3,4,5,6};
        int data3 [] = {10,100,10,100,10,100,10,100};
        int data4 [] = {1,2,3,4};


        Matrix mat1(4,2, data1);
        Matrix mat2(2,3, data2);
        Matrix mat3(4,2, data3);
        Matrix mat4(2, 2, data4);

        cout<<mat1;
        cout <<"mat1 + mat2 = "  << (mat1 + mat3) << endl << endl;
        cout << "mat3 - mat1 = "<< (mat3 - mat1) << endl << endl;
        cout << "mat4 * mat4 = "<< mat4 * mat4 << endl << endl;
        cout << "mat1 * mat2 = "<< mat1 * mat2 << endl << endl;
        cout << "mat1 + 1 = "<< (mat1 + 1) << endl << endl;
        cout << "mat1 - 1 = "<< (mat1 - 1) << endl << endl;
        cout << "mat1 * 2 = "<< (mat1 * 2) << endl << endl;


    return 0;
}


ostream& operator<<(ostream& out, const Matrix& mat)
{
    for (int i = 0 ; i < mat.row* mat.col; i++)
    {
            out << mat.data[i]<<" ";
            out << " ";
    }

    out << endl;


    return out ;
}

/*
istream& operator>>(istream& in,  Matrix& mat)
{
    for (int i = 0 ; i < mat.row* mat.col; i++)
    {
            in >> mat.data[i];
    }

    return in ;
}

   /* int row1, row2, col1, col2 ;
    cout <<"Enter number of row one :";
    cin >> row1;
    cout <<"Enter number of col one :";
    cin >> col1;
    int data1[row1*col1];
    Matrix mat1(row1,col1, data1);
    cin >> mat1;

    cout <<"Enter number of row two :";
    cin >> row2;
    cout <<"Enter number of col two :";
    cin >> col2;
    int data2[row2*col2];
    Matrix mat2(row2, col2, data2);
    cin >> mat2;

        string x;
        cout << "1- Mat1 + Mat2 . \n2- Mat1 - Mat2 . \n\n Enter your choose please : ";
        cin >> x ;
        if (  x ==  "1" )
        {
            while ( (row1 != row2 && col1 != col2) || (row1 == row2 && col1 != col2) || (row1 != row2 && col1 == col2) )
            {

                cout<<"they haven't same dimensions ." << endl << endl;
                break;
            }
            while ( row1 == row2 && col1 == col2)
            {

                Matrix mat3 = mat1 + mat2;
                cout <<"mat1 + mat2 : "  << endl << endl << mat3;
                break;
            }

        }
        else if ( x == "2")
        {
            while ( (row1 != row2 && col1 != col2) || (row1 == row2 && col1 != col2) || (row1 != row2 && col1 == col2) )
            {

                cout<<"they haven't same dimensions ." << endl << endl;
                break;
            }
            while ( row1 == row2 && col1 == col2)
            {

                Matrix mat3 =mat1 - mat2;
                cout <<"mat1 - mat2 : "  << endl << mat3 ;
                break;
            }
        }

/*
else if ( x == "3")
        {
            while ( (row1 != row2 && col1 != col2) || (row1 == row2 && col1 != col2) || (row1 != row2 && col1 == col2) )
            {

                cout<<"they haven't same dimensions ." << endl << endl;
                break;
            }
            while ( col1 == row2)
            {

                Matrix mat3 =mat1 * mat2;
                cout <<"mat1 * mat2 : "  << endl << mat3 ;
                break;
            }
        }


        */
