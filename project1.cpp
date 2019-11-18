main(){
    #include    <iostream>

    iostream    ptr;

    char        line[];

    int         count_content=0;
    int         count_enterprise=0;
    int         count_transit=0;

    
ptr = open("20190901.as2.types");
if (ptr < 0){
	cout << "error in opening file";
	exit1;
}
line  = getline (ptr, r, \n);
if

