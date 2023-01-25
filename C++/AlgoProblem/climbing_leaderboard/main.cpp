#include<iostream>
#include<cassert>
#include<vector>

using namespace std;

int search_index(vector<vector<int>> &list, int first, int segundo, int value )
{
    while (first <= segundo ) {
        int mid = (first + segundo ) / 2;
        if (list[mid][1] == value ) {
            return list[mid][0];
        }
        if (list[mid][1] > value ) first = mid + 1;
        if (list[mid][1] < value ) segundo = mid - 1;
    }
    if ((size_t)first == list.size( ) ) return list[segundo][0] + 1;
    if ( segundo < 0 ) return list[first][0];
    return list[first][0];
}

vector<int> climbingLeaderboard( vector<int> ranked, vector<int> player ) {
    int rank{ 1 };
    vector<vector<int>> indexes;
    vector<int>results;
    indexes.push_back( { rank,ranked[0] } );
    for ( int i = 1; i < ( int ) ranked.size( ); ++i ) {
        if ( ranked[i] != ranked[i - 1] ) {
            rank++;
            indexes.push_back( { rank,ranked[i] } );
        }
    }

    //MAPPING LIST DE LAS POSSESSION
    cout << "SIZE: " << indexes.size( ) << endl;
    int pivot{ ( int ) indexes.size( ) };
    for ( auto i : player ) {
        results.push_back( search_index( indexes, 0, pivot - 1, i ) );
        cout << search_index( indexes, 0, pivot - 1, i ) << endl;
        pivot = search_index( indexes, 0, pivot - 1, i );
    }
    return results;
}

int main( ) {

    vector<int> ranked{ 100, 100, 50, 40, 40, 20, 10 };
    vector<int> player{ 5, 25, 50, 120 };
    vector<int> results{ 6,4,2,1 };
    vector<int> first = climbingLeaderboard( ranked, player );

    ranked.clear( );
    player.clear( );
    results.clear( );
    first.clear( );

    ranked = { 100,90,90,80,75,60 };
    player = { 50,65,77,90,102 };
    results = { 6,5,4,2,1 };
    first = climbingLeaderboard( ranked, player );

    return 0;
}