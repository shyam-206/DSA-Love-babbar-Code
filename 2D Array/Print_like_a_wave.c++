vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    //index == odd then print bottom to top
    //index == even then print top to bottom
    
    vector<int> v;
    for(int col=0;col<=mCols;col++){
       
        if( col % 2 == 1){
            //odd Index -> bottom to top
            
            for(int row = mRows-1;row>=0;row--){
                v.push_back(arr[row][col]);
            }
        }
        else{
            //even Index -> top to bottom
            
            for(int row = 0;row<=mRows-1;row++){
                v.push_back(arr[row][col]);
            }
        }
    }
    
  return v;
}