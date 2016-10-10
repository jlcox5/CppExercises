/* The infamous bubble sort algorithm */

#include <vector>

bool IterateThroughArray( std::vector<int>& srtArray )
{
    bool swapped = false;
    std::vector<int>::iterator secItr = srtArray.begin() + 1;
    for( std::vector<int>::iterator firstItr = srtArray.begin(); secItr != srtArray.end(); firstItr++, secItr++ )
    {
        if( *secItr < *firstItr )
        {
            int temp = *secItr;
            *secItr = *firstItr;
            *firstItr = temp;
            swapped = true;
        }
    }
    
    return swapped;
}

bool BubbleSort( std::vector<int>& srtArray )
{
    bool foundSwap = IterateThroughArray( srtArray );
    while( foundSwap == true )
    {
        IterateThroughArray( srtArray );
    }

    return true;
}