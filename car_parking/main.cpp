#include "park.h"
int limit[36];
int main()
{
    int sum=0;
        int status;
    string option;
    printf("Do you want to remove previous save data");
cin>>option;
for(int i=0;i<36;i++)
limit[i]=1;
if(option=="yes")
{
    status=remove("parking.txt");
    if(status==0)
    cout<<"successfully deleted, move on ";
    else
    cout<<"file delete error , start appending if file exist";
}
else
{
    cout<<"No Problem, Sir";
}
    design_box box;
    while(true)
    {
        ofstream f;
        f.open("parking.txt",ios::out|ios::app);
    if(limit[0]<=454){
        box.box_maker(limit[0]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 1 entry"<<+limit[0]<<endl;
        ++limit[0];
        cout<<"\a\a\a\a\a";
    }
    else{
        box.box_maker(limit[0]);
            sleep(2.3);
                cout<<"\a\a\a\a\a";
        f<<"booth 1 entry"<<limit[0]<<endl;

    }
    if(limit[1]<=451){
        box.box_maker(limit[1]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 2 entry"<<limit[1]<<endl;

        ++limit[1];
    }
    else{
        box.box_maker(limit[1]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
            cout<<"\a\a\a\a\a";
        f<<"booth 2 entry"<<limit[1]<<endl;

    }if(limit[2]<=443){
        box.box_maker(limit[2]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 3 entry"<<limit[2]<<endl;

        ++limit[2];
    }
    else{
        box.box_maker(limit[2]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 3 entry"<<limit[2]<<endl;

    }if(limit[3]<=455){
        box.box_maker(limit[3]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 4 entry"<<limit[3]<<endl;

        ++limit[3];
    }
    else{
        box.box_maker(limit[3]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 4 entry"<<limit[3]<<endl;

    }if(limit[4]<=448){
        box.box_maker(limit[4]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 5 entry"<<limit[4]<<endl;

        ++limit[4];
    }
    else{
        box.box_maker(limit[4]);
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 5 entry"<<limit[4]<<endl;

    }if(limit[5]<=467){
        box.box_maker(limit[5]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 6 entry"<<limit[5]<<endl;
        ++limit[5];
    }
    else{
        box.box_maker(limit[5]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 6 entry"<<limit[5]<<endl;

    }if(limit[6]<=477){
        box.box_maker(limit[6]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 7 entry"<<limit[6]<<endl;

        ++limit[6];
    }
    else{
        box.box_maker(limit[6]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 7 entry"<<limit[6]<<endl;

    }if(limit[7]<=448){
        box.box_maker(limit[7]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 8 entry"<<limit[7]<<endl;

        ++limit[7];
    }
    else{
        box.box_maker(limit[7]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 8 entry"<<limit[7]<<endl;

    }if(limit[8]<=450){
        box.box_maker(limit[8]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 9 entry"<<limit[8]<<endl;

        ++limit[8];
    }
    else{
        box.box_maker(limit[8]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 9 entry"<<limit[8]<<endl;

    }if(limit[9]<=502){
        box.box_maker(limit[9]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 10 entry"<<limit[9]<<endl;

        ++limit[9];
    }
    else{
        box.box_maker(limit[9]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 10entry"<<limit[9]<<endl;

    }if(limit[10]<=448){
        box.box_maker(limit[10]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 11entry"<<limit[10]<<endl;

        ++limit[10];
    }
    else{
        box.box_maker(limit[10]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 11entry"<<limit[10]<<endl;

    }if(limit[11]<=503){
        box.box_maker(limit[11]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 12entry"<<limit[11]<<endl;

        ++limit[11];
    }
    else{
        box.box_maker(limit[11]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 12entry"<<limit[11]<<endl;

    }if(limit[12]<=476){
        box.box_maker(limit[12]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 13entry"<<limit[12]<<endl;

        ++limit[12];
    }
    else{
        box.box_maker(limit[12]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 14entry"<<limit[12]<<endl;

    }if(limit[13]<=408){
        box.box_maker(limit[13]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 14entry"<<limit[13]<<endl;

        ++limit[13];
    }
    else{
        box.box_maker(limit[13]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 15entry"<<limit[13]<<endl;

    }if(limit[14]<=438){
        box.box_maker(limit[14]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 15entry"<<limit[14]<<endl;

        ++limit[14];
    }
    else{
        box.box_maker(limit[14]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 16entry"<<limit[14]<<endl;

    }if(limit[15]<=458){
        box.box_maker(limit[15]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 16entry"<<limit[15]<<endl;

        ++limit[15];
    }
    else{
        box.box_maker(limit[15]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 17entry"<<limit[15]<<endl;

    }if(limit[16]<=474){
        box.box_maker(limit[16]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 17entry"<<limit[16]<<endl;

        ++limit[16];
    }
    else{
        box.box_maker(limit[16]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 18entry"<<limit[16]<<endl;

    }if(limit[17]<=484){
        box.box_maker(limit[17]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 18entry"<<limit[17]<<endl;

        ++limit[17];
    }
    else{
        box.box_maker(limit[17]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 19entry"<<limit[17]<<endl;

    }if(limit[18]<=402){
        box.box_maker(limit[18]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 19entry"<<limit[18]<<endl;

        ++limit[18];
    }
    else{
        box.box_maker(limit[18]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 19 entry"<<limit[18]<<endl;

    }if(limit[19]<=473){
        box.box_maker(limit[19]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 20 entry"<<limit[19]<<endl;

        ++limit[19];
    }
    else{
        box.box_maker(limit[19]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 20 entry"<<limit[19]<<endl;

    }if(limit[20]<=489){
        box.box_maker(limit[20]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 21 entry"<<limit[20]<<endl;

        ++limit[20];
    }
    else{
        box.box_maker(limit[20]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 21 entry"<<limit[20]<<endl;

    }if(limit[21]<=441){
        box.box_maker(limit[21]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 22 entry"<<limit[21]<<endl;

        ++limit[21];
    }
    else{
        box.box_maker(limit[21]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 22 entry"<<limit[21]<<endl;

    }if(limit[22]<=486){
        box.box_maker(limit[22]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 23 entry"<<limit[22]<<endl;

        ++limit[22];
    }
    else{
        box.box_maker(limit[22]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 23 entry"<<limit[22]<<endl;

    }if(limit[23]<=437){
        box.box_maker(limit[23]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 24 entry"<<limit[23]<<endl;

        ++limit[23];
    }
    else{
        box.box_maker(limit[23]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 24 entry"<<limit[23]<<endl;

    }if(limit[24]<=438){
        box.box_maker(limit[24]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 25 entry"<<limit[24]<<endl;

        ++limit[24];
    }
    else{
        box.box_maker(limit[24]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 25  entry"<<limit[24]<<endl;

    }if(limit[25]<=492){
        box.box_maker(limit[25]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 26  entry"<<limit[25]<<endl;

        ++limit[25];
    }
    else{
        box.box_maker(limit[25]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 26  entry"<<limit[25]<<endl;

    }if(limit[26]<=505){
        box.box_maker(limit[26]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 27 entry"<<limit[26]<<endl;

        ++limit[26];
    }
    else{
        box.box_maker(limit[26]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 27 entry"<<limit[26]<<endl;

    }if(limit[27]<=472){
        box.box_maker(limit[27]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 28 entry"<<limit[27]<<endl;

        ++limit[27];
    }
    else{
        box.box_maker(limit[27]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 29 entry"<<limit[27]<<endl;

    }if(limit[28]<=461){
        box.box_maker(limit[28]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 29 entry"<<limit[28]<<endl;

        ++limit[28];
    }
    else{
        box.box_maker(limit[28]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 29 entry"<<limit[28]<<endl;

    }if(limit[29]<=465){
        box.box_maker(limit[29]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 30 entry"<<limit[29]<<endl;

        ++limit[29];
    }
    else{
        box.box_maker(limit[29]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 30 entry"<<limit[29]<<endl;

    }if(limit[30]<=498){
        box.box_maker(limit[30]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 31 entry"<<limit[30]<<endl;

        ++limit[30];
    }
    else{
        box.box_maker(limit[30]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 31 entry"<<limit[30]<<endl;

    }if(limit[31]<=450){
        box.box_maker(limit[31]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 32 entry"<<limit[31]<<endl;

        ++limit[31];
    }
    else{
        box.box_maker(limit[31]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 32 entry"<<limit[31]<<endl;

    }if(limit[32]<=478){
        box.box_maker(limit[32]);
        sleep(2.3);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 33 entry"<<limit[32]<<endl;
cout<<limit[32];
        ++limit[32];
    }
    else{
        box.box_maker(limit[32]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 33 entry"<<limit[32]<<endl;

    }if(limit[33]<=477){
        box.box_maker(limit[33]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 34 entry"<<limit[33]<<endl;

        ++limit[33];
    }
    else{
        box.box_maker(limit[33]);
        cout<<"\a\a\a\a\a";
            cout<<"\a\a\a\a\a";
        f<<"booth 34  entry"<<limit[33]<<endl;

    }if(limit[34]<=489){
        box.box_maker(limit[34]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 35 entry"<<limit[34]<<endl;

        ++limit[34];
    }
    else{
        box.box_maker(limit[34]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 35 entry"<<limit[34]<<endl;

    }if(limit[35]<=499){
        box.box_maker(limit[35]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 36 entry"<<limit[35]<<endl;

        ++limit[35];
    }
    else{
        box.box_maker(limit[35]);
        cout<<"\a\a\a\a\a";
        sleep(2.3);
            cout<<"\a\a\a\a\a";
        f<<"booth 36 entry"<<limit[35]<<endl;

    }
++gate[0];
    }
}
