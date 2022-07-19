
#include <iostream>
#include <cmath>
using namespace std;
class matrix
{
    private :
    int line ,row;
    int *pm;
    
    public :
    
    matrix()
    {
        pm = new int[line*row];
    }
    matrix(int l, int r)
    {
        line = l;
        row = r;
        pm = new int[line*row];
    }
    void matrixinit()
    {

        cout << "输入行、列数"<<endl;
        cin >> line >>row;
    }
    void input()
    {
        int k=0;
        for(int i=0;i<line;i++)
        {
            for(int j=0;j<row;j++)
            {
                cin >> pm[k] ;
                k++;
            }
            cout <<endl;
        }
    }
    void output()
    {
        int k=0;
        for(int i=0;i<line;i++)
        {
            for(int j=0;j<row;j++)
            {
                cout << pm[k] <<" ";
                k++;
            }
            cout <<endl;
        }
    }
    ~ matrix()
    {
        delete pm;
    }
    matrix(const matrix& f)
    {
        line = f.line;
        row = f.row;
        pm = new int[line*row];
    }
    matrix add(matrix& f)
    {
        matrix n(f.line,f.row);
        for(int i=0;i<n.line*n.row;i++)
        {
            n.pm[i]=pm[i]+f.pm[i];
        }   
        return n;
    }
    matrix minus(matrix& f)
    {
        matrix n(f.line,f.row);
        for(int i=0;i<n.line*n.row;i++)
        {
            n.pm[i]=pm[i]-f.pm[i];
        }   
        return n;
    }
    matrix multiply(matrix& f)
    {
        matrix n(line,f.row);
        if(line!=f.row) cout<<"error"<<endl;
        else
        {
          for(int i=0;i<n.line*n.row;i++)
          {
              for(int k=0;k<row;k++)
              {
                  n.pm[i]+=pm[(i/row)*row + k] * f.pm[(i/ f.row)*f.row+k];
              }
          }   
        }
        return n;
    }
};

int get()
{
    cout  << "please input"<<endl;
    int i;
    cin >> i;
    return i;
}
