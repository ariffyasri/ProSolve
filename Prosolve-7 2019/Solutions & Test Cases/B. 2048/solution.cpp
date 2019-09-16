#include <iostream>

using namespace std;

enum {
    LEFT, UP, RIGHT, DOWN
};

void print(int table[][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int z = 0; z < 4; z++)
            cout << table[i][z] << ' ';
            
        cout << endl;
    }   
}

int main()
{
    int table[4][4];
    
    for(int i = 0; i < 4; i++)
        for(int z = 0; z < 4; z++)
            cin >> table[i][z];
            
    int pos;
    cin >> pos;
    
    switch(pos)
    {
        case LEFT:
            
            for(int i = 0; i < 4; i++)
            {
                int ii = -1, zz = -1; // keep record current non-zero
                
                for(int z = 0; z < 4; z++)
                {
                    if(table[i][z] > 0)
                    {
                        if(table[i][z] == table[ii][zz] && ii > -1 && z > -1)
                        {
                            table[ii][zz] += table[i][z];
                            table[i][z] = 0;
                            ii = i+1, zz = z+1;
                        }
                        
                        ii = i, zz = z;
                    }
                }
                
                // move
                int count = 0;
                
                for(int z = 0; z < 4; z++)
                {
                    if(table[i][z] > 0)
                    {
                        if(count > 0)
                        {
                            table[i][z-count] = table[i][z];
                            table[i][z] = 0;
                        }
                            
                        
                        //table[i][z] = count = 0;
                    }
                    else
                        count++;
                }
            }
            
            
            print(table);
            
            break;
            
        case UP:
            
            for(int i = 0; i < 4; i++)
            {
                int ii = -1, zz = -1; // keep record current non-zero
                
                for(int z = 0; z < 4; z++)
                {
                    if(table[z][i] > 0)
                    {
                        if(table[z][i] == table[zz][ii] && ii > -1 && z > -1)
                        {
                            table[zz][ii] += table[z][i];
                            table[z][i] = 0;
                            ii = i+1, zz = z+1;
                        }
                        
                        ii = i, zz = z;
                    }
                }
                
                // move
                int count = 0;
                
                for(int z = 0; z < 4; z++)
                {
                    if(table[z][i] > 0)
                    {
                        if(count > 0)
                        {
                            table[z-count][i] = table[z][i];
                            table[z][i] = 0;
                        }
                            
                        
                        //table[i][z] = count = 0;
                    }
                    else
                        count++;
                }
            }
            
            
            print(table);
            
            break;
            
        case RIGHT:
            
            for(int i = 4-1; i >= 0; i--)
            {
                int ii = 4, zz = 4; // keep record current non-zero
                
                for(int z = 4-1; z >= 0; z--)
                {
                    if(table[i][z] > 0)
                    {
                        if(table[i][z] == table[ii][zz] && ii < 4 && z < 4)
                        {
                            table[ii][zz] += table[i][z];
                            table[i][z] = 0;
                            ii = i-1, zz = z-1;
                        }
                        
                        ii = i, zz = z;
                    }
                }
                
                // move
                int count = 0;
                
                for(int z = 4-1; z >= 0; z--)
                {
                    if(table[i][z] > 0)
                    {
                        if(count > 0)
                        {
                            table[i][z+count] = table[i][z];
                            table[i][z] = 0;
                        }
                            
                        
                        //table[i][z] = count = 0;
                    }
                    else
                        count++;
                }
            }
            
            
            print(table);
            
            break;
            
        case DOWN:
            
            for(int i = 4-1; i >= 0; i--)
            {
                int ii = 4, zz = 4; // keep record current non-zero
                
                for(int z = 4-1; z >= 0; z--)
                {
                    if(table[z][i] > 0)
                    {
                        if(table[z][i] == table[zz][ii] && ii < 4 && z < 4)
                        {
                            table[zz][ii] += table[z][i];
                            table[z][i] = 0;
                            ii = i-1, zz = z-1;
                        }
                        
                        ii = i, zz = z;
                    }
                }
                
                // move
                int count = 0;
                
                for(int z = 4-1; z >= 0; z--)
                {
                    if(table[z][i] > 0)
                    {
                        if(count > 0)
                        {
                            table[z+count][i] = table[z][i];
                            table[z][i] = 0;
                        }
                            
                        
                        //table[i][z] = count = 0;
                    }
                    else
                        count++;
                }
            }
            
            
            print(table);

            break;
    }
    
    
}