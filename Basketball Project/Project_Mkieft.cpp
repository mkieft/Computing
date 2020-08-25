// File: Project_cswanson/read&cleanFile.cpp
// SportVUGameMoment_GUID	BasketballXPos	BasketballYPos
//HomePlayer1ID	FirstName	LastName	HomePlayer1XPos	HomePlayer1YPos
//HomePlayer2ID	FirstName	LastName	HomePlayer2XPos	HomePlayer2YPos
//HomePlayer3ID	FirstName	LastName	HomePlayer3XPos	HomePlayer3YPos
//HomePlayer4ID	FirstName	LastName	HomePlayer4XPos	HomePlayer4YPos
//HomePlayer5ID	FirstName	LastName	HomePlayer5XPos	HomePlayer5YPos
//VisitorPlayer1ID	FirstName	LastName	VisitorPlayer1XPos	VisitorPlayer1YPos
//VisitorPlayer2ID	FirstName	LastName	VisitorPlayer2XPos	VisitorPlayer2YPos
//VisitorPlayer3ID	FirstName	LastName	VisitorPlayer3XPos	VisitorPlayer3YPos
//VisitorPlayer4ID	FirstName	LastName	VisitorPlayer4XPos	VisitorPlayer4YPos
//VisitorPlayer5ID	FirstName	LastName	VisitorPlayer5XPos	VisitorPlayer5YPos
//DE511CDC-0DB3-4565-8ED7-4E88D7EEDAFD	15.31509	17.7379
//764	Eric	Gordon	34.37247	34.96771
//849	Jrue	Holiday	17.58302	41.74807	....
#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include <cmath>

class pvector{
public:
    int PlayerID1[10];
    float ballx ; float bally ; float pointx[10] ; float pointy[10] ;
    float vector0[10] ; float vector1 ;
    void printvector() {
        for (int i=0; i<10; i++){
            cout << PlayerID1[i] << " : [" << pointx[i] << "," << pointy[i] << "]" << '\t';
        }
        cout << "\nBall : " << "[" << ballx << "," << bally << "]" << endl ;
    }

};
class Row{
public:
    string Moment ;
    float ballx ; float bally ;
    //float ballx ; float bally ;
    int PlayerID[10]; string First[10]; string Last[10];
    float pointx[10]; float pointy[10];

    Row(string Moment="", float ballx=0, float bally=0){
                 this -> Moment = Moment ;
                 this -> ballx = ballx ; this -> bally = bally ;
    }
    void printvector() { cout << Moment << endl << ballx << '\t' << bally << endl;
   for (int i=0; i<10; i++){
        cout << PlayerID[i] << '\t' << First[i] << '\t' << Last[i] << '\t' << pointx[i] << '\t' << pointy[i] << endl;
        }
    }
};

void checkLines(vector <Row> V, float thresh);
bool dist(Row R1, Row R2, float thresh );
template <typename T>
void printV(vector <T> PointV);
void Vdistance (vector <pvector> PointVector);
void VballDistance (vector <pvector> PointVector);
void MomentFinderOff(vector <pvector> PointVector,int mom);
void MomentFinderDef(vector <pvector> PointVector, int mom);
void playerList(Row r );
int main () {
    Row r ;
    pvector P; vector <pvector> PointVector ;
    int x = 0;  ///test size counter
    string z; //to skip unneeded data in read
    vector <Row> V ;
    ifstream fin ("Data_One_Game.txt");//ask for file
    if(! fin) {cout << "File not found." ;
        return -1 ;// return -1 signals error.
    }
    getline(fin,z); /// get rid of first line
    bool first = true ;
    ofstream fout ("PlayerList.txt");
    while (! fin.eof() ) {
        for (int i = 0; i < 6; i++){ //skips gameID Date HomeID HomeTeam VisitorID VisitorTeam
            fin >> z;
        }
        fin >> r.Moment ;
        for (int i = 0; i < 3; i++){ //skips quarter gameClock shotClock
            fin >> z;
        }
        fin >> r.ballx ;
        P.ballx=r.ballx;
        fin >> r.bally ;
        P.bally=r.bally;
        fin >> z; // skips ballZ
        //P.vector1 = ;
        for(int i = 0 ; i < 10 ; i++){
            fin >> r.PlayerID[i] ; fin >> r.First[i] ; fin >> r.Last[i] ; fin >> r.pointx[i] ; fin >> r.pointy[i] ;
            P.PlayerID1[i] = r.PlayerID[i] ;
            P.pointx[i]=r.pointx[i] ; P.pointy[i]=r.pointy[i] ;
            //P.vector0[i] = sqrt(pow(P.pointx[i],2)+pow(P.pointy[i],2));
            if(first==true) {
                fout << r.PlayerID[i] << '\t' << r.First[i] << "\t" << r.Last[i] << endl ;
            }
        //cout << x.PlayerID[i] << '\t' << x.First[i] << x.Last[i] << x.pointx[i] << x.pointy[i] ;
        }
        PointVector.push_back(P);
        first = false ; //done writing first row into new file
        //r.printrow();
        V.push_back(r);
        x++;
    }
    int ans = 1 ; int mom = -1 ; float thresh = 0.0;
    while (ans != 0) {
        cout << "Enter threshold (0.0 - 3.0) : " ; cin >> thresh ; cout << "\n1. Show Moment Data"
            << "\n2. Show Player Directory"
            << "\n3. Show vectors"
            << "\n4. Show Distance (Player to Player)"
            << "\n5. Show Distance (Player to Ball)"
            << "\n6. Enter Moment to Find Ball Carrier"
            << "\n7. Enter Moment to Find Ball Defender"
            << "\n0. Exit\n" ;
        cout << "Enter option :  " ; cin >> ans ;
        cout << endl << endl ;
        switch(ans) {
        case 1: printV(V) ;checkLines(V, thresh) ; break ;  //cleans up file
        case 2: playerList(r) ; break ; //prints list of players
        case 3: printV(PointVector) ; break ;   //prints vector
        case 4: Vdistance(PointVector) ; break ;    //prints distance from players
        case 5: VballDistance(PointVector) ; break ; //prints player distance from ball
        case 6: cout << "Enter moment : " ; cin >> mom ; MomentFinderOff(PointVector,mom) ; break ;
        case 7: cout <<"Enter moment : " ; cin >> mom ; MomentFinderDef(PointVector,mom) ; break ;
        case 0: cout << "Good-bye." ; break ;
        default: cout << "Bad input." ;
        }
    }
    fout.close() ;
    //cout << x;

    /**for (int i = 0 ; i < V.size(); i++) {
        V[i].printrow() ;
    }**/
    fin.close();
   // for(int i = 0; i<V.si)


    return 0 ;
}
void checkLines(vector <Row> V, float thresh) {
    vector <Row> VV;
    VV.push_back(V[0]);
    int y = 0;
    for(int i = 1 ; i < V.size() ; i++) {
        if(dist(VV[VV.size()-1],V[i],thresh)){
            VV.push_back(V[i]);
            y++;
        }
    }
    cout << "\n\n\nThreshold : " << thresh << "    " ;
    cout <<" COUNTER : " <<  y << "/1001\ntemplate <typename T>\n\n";
    //cout << '\n' << y;
}//checklines
template <typename T>
void printV(vector <T> PointV) {
    for(int i = 0 ; i<1 ; i++) {PointV[i].printvector() ;
        cout << endl ;}
}//printV
bool dist(Row R1, Row R2, float thresh ) {
      float d = 0 ;
      d=d+pow(R1.ballx - R2.ballx, 2);
      d=d+pow(R1.bally - R2.bally, 2);
      for(int i=0; i<10; i++) {
        d=d+pow(R1.pointx[i] - R2.pointx[i], 2);
        d=d+pow(R1.pointy[i] - R2.pointy[i], 2);
      }
    cout << "\ndistance = " << d ;
    if(d > thresh){cout << '\t' << "selected d "<< d << '\n'; return true ;}
    else return false ;
}//dist
void Vdistance (vector <pvector> PointVector) {
    float Subtraction = 0.0;
    float SubtractionX = 0.0;
    float SubtractionY = 0.0;
    float minn = 10000.0 ; //distance between player vectors
    int locO = -1 ; int locD = -2 ;
    for(int ii=0; ii<PointVector.size(); ii++){
        cout << "\n\nMoment(" << ii << ") " << endl ;
        for (int i = 0 ; i < 5 ; i++) {
            for (int j = 5 ; j < 10 ; j++) {
                SubtractionX = abs(PointVector[ii].pointx[i] - PointVector[ii].pointx[j]) ; //distance for x component
                SubtractionY = abs(PointVector[ii].pointy[i] - PointVector[ii].pointy[j]) ; //distance for y component
                Subtraction = sqrt(pow(SubtractionX,2)+pow(SubtractionY,2)) ;
                if(minn > Subtraction) {minn = Subtraction ;
                locO = i ; locD = j;
                //cout << PointVector[ii].vector0[i]<< " " << PointVector[ii].vector0[j] << "Sub : " << Subtraction << endl;
                }

            }
            minn = 10000.0 ; // reset minn for next offense player
            cout << PointVector[ii].PlayerID1[locO] << " : " << PointVector[ii].PlayerID1[locD] << endl ;
        }
    }
}//vdistance
void VballDistance (vector <pvector> PointVector) {
    float bSubtractionHx = 0.0 ; float bSubtractionHy = 0.0;
    float bSubtractionAy = 0.0 ; float bSubtractionAx = 0.0;
    float bSubtractionH = 0.0 ; float bSubtractionA = 0.0 ; float minnb1 = 1000000.0 ; float minnb2 = 100000000.0 ;
    int locbA = -1 ; int locbH = -1 ; int locbO = -1 ; int locbD = -1 ;
    for (int ii=0 ; ii<PointVector.size(); ii++) {
        for(int i = 0 ; i < 5 ; i++) {
            bSubtractionHx = abs(PointVector[ii].ballx - PointVector[ii].pointx[i]);
            bSubtractionHy = abs(PointVector[ii].bally - PointVector[ii].pointy[i]);
            bSubtractionH = sqrt(pow(bSubtractionHx,2)+ pow(bSubtractionHy,2)) ;
            if(minnb1 > bSubtractionH) {
                minnb1 = bSubtractionH ;
                locbH= i ;
            }//if
        }//for

        for(int j = 5 ; j < 10 ; j++) {
            bSubtractionAx = abs(PointVector[ii].ballx - PointVector[ii].pointx[j]);
            bSubtractionAy = abs(PointVector[ii].bally - PointVector[ii].pointy[j]);
            bSubtractionA = sqrt(pow(bSubtractionAx,2)+ pow(bSubtractionAy,2)) ;
            if(minnb2 > bSubtractionA) {minnb2 = bSubtractionA ; locbA = j ;}
        }//for
        if(bSubtractionH < bSubtractionA) {locbO = locbH ; locbD = locbA;}
        if(bSubtractionH > bSubtractionA) {locbO = locbA; locbD = locbH;}

        cout << "\nMoment(" << ii << ")" << "\nOffense w/ ball: " << PointVector[ii].PlayerID1[locbO] << '\t' ;
        cout << "Defense closest ball: " << PointVector[ii].PlayerID1[locbD] << endl;
    }//for
}

void playerList(Row r) {
   for (int i = 0; i < 10; i++){
    cout << r.PlayerID[i] << '\t' << r.First[i] << '\t' << r.Last[i] << endl;

   }//for

}//playerlist
void MomentFinderOff(vector <pvector> PointVector,int mom) {
    float bSubtractionHx = 0.0 ; float bSubtractionHy = 0.0;
    float bSubtractionAy = 0.0 ; float bSubtractionAx = 0.0;
    float bSubtractionH = 0.0 ; float bSubtractionA = 0.0 ; float minnb1 = 1000000.0 ; float minnb2 = 100000000.0 ;
    int locbA = -1 ; int locbH = -1 ; int locbO = -1 ; int locbD = -1 ;
    for(int i = 0 ; i < 5 ; i++) {
        bSubtractionHx = abs(PointVector[mom].ballx - PointVector[mom].pointx[i]);
        bSubtractionHy = abs(PointVector[mom].bally - PointVector[mom].pointy[i]);
        bSubtractionH = sqrt(pow(bSubtractionHx,2)+ pow(bSubtractionHy,2)) ;
        if(minnb1 > bSubtractionH) {
            minnb1 = bSubtractionH ;
            locbH= i ;
        }//if
    }//for

    for(int j = 5 ; j < 10 ; j++) {
        bSubtractionAx = abs(PointVector[mom].ballx - PointVector[mom].pointx[j]);
        bSubtractionAy = abs(PointVector[mom].bally - PointVector[mom].pointy[j]);
        bSubtractionA = sqrt(pow(bSubtractionAx,2)+ pow(bSubtractionAy,2)) ;
        if(minnb2 > bSubtractionA) {minnb2 = bSubtractionA ; locbA = j ;}
    }//for
    if(bSubtractionH < bSubtractionA) {locbO = locbH ; locbD = locbA;}
    if(bSubtractionH > bSubtractionA) {locbO = locbA; locbD = locbH;}

    cout << "\nMoment(" << mom << ")" << "\nOffense w/ ball : " << PointVector[mom].PlayerID1[locbO] << endl ;


}

void MomentFinderDef(vector <pvector> PointVector,int mom) {
    float bSubtractionHx = 0.0 ; float bSubtractionHy = 0.0;
    float bSubtractionAy = 0.0 ; float bSubtractionAx = 0.0;
    float bSubtractionH = 0.0 ; float bSubtractionA = 0.0 ; float minnb1 = 1000000.0 ; float minnb2 = 100000000.0 ;
    int locbA = -1 ; int locbH = -1 ; int locbO = -1 ; int locbD = -1 ;
    for(int i = 0 ; i < 5 ; i++) {
        bSubtractionHx = abs(PointVector[mom].ballx - PointVector[mom].pointx[i]);
        bSubtractionHy = abs(PointVector[mom].bally - PointVector[mom].pointy[i]);
        bSubtractionH = sqrt(pow(bSubtractionHx,2)+ pow(bSubtractionHy,2)) ;
        if(minnb1 > bSubtractionH) {
            minnb1 = bSubtractionH ;
            locbH= i ;
        }//if
    }//for

    for(int j = 5 ; j < 10 ; j++) {
        bSubtractionAx = abs(PointVector[mom].ballx - PointVector[mom].pointx[j]);
        bSubtractionAy = abs(PointVector[mom].bally - PointVector[mom].pointy[j]);
        bSubtractionA = sqrt(pow(bSubtractionAx,2)+ pow(bSubtractionAy,2)) ;
        if(minnb2 > bSubtractionA) {minnb2 = bSubtractionA ; locbA = j ;}
    }//for
    if(bSubtractionH < bSubtractionA) {locbO = locbH ; locbD = locbA;}
    if(bSubtractionH > bSubtractionA) {locbO = locbA; locbD = locbH;}


    cout << "Defense closest ball : " << PointVector[mom].PlayerID1[locbD] << endl; //prints defense closest to ball

}//momentfinder

