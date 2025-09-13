#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
#include <conio.h>


using namespace std;

void SetColor(int color);
void a_name(string &player_name);
void change_b1(string player_name);
string difficulty_return();
void change_b1(string player_name);
void set_difficulty();
void output_graph(int id);
void start_output();
void died_output();
void you_win_output();
void thank_you_output();
void level_output(int id);
void ofstream_run(int id);
void suggest();
void again();
void finish(int id);
void get_money(int pos, int id);
void get_scores(int pos, int id);
void player_died(int pos, int id);
int dir_retrun(char d);
int player_check_pos(int pos, int id);
void player_change_pos(int from, int to, int id);
int dir_input(int id);
int player_run(int player_now, int id);
int monster_check_pos(int pos, int id);
void monster_change_pos(int which, int from, int to, int id);
int monster_run(int which, int player_now, int id);
void init_set(int id);
void start_the_game(int id);
void end_the_game(int id);
void init_scores_set(int id);
void set_scores_and_money(int id);
int str_to_int(string str);
void NewFunction();



string text[4] = {
"\n\n\n\
            ____ _____  _    ____ _____             \n\
           / ___|_   _|/ \\  |  _ \\_   _|            \n\
           \\___ \\ | | / _ \\ | |_) || |              \n\
            ___) || |/ ___ \\|  _ < | |              \n\
           |____/ |_/_/   \\_\\_| \\_\\|_|              \n\
\n\n\n\
",
"\n\n\n\
        __   _____  _   _    ____ ___ _____ ____          \n\
        \\ \\ / / _ \\| | | |  |  _ \\_ _| ____|  _ \\         \n\
         \\ V / | | | | | |  | | | | ||  _| | | | |        \n\
          | || |_| | |_| |  | |_| | || |___| |_| |        \n\
          |_| \\___/ \\___/   |____/___|_____|____/         \n\
\n\n\n\
",
"\n\n\n\
         _____ _   _    _    _   _ _  __    __   _____  _   _   _         \n\
        |_   _| | | |  / \\  | \\ | | |/ /    \\ \\ / / _ \\| | | | | |        \n\
          | | | |_| | / _ \\ |  \\| | ' /      \\ V / | | | | | | | |        \n\
          | | |  _  |/ ___ \\| |\\  | . \\       | || |_| | |_| | |_|        \n\
          |_| |_| |_/_/   \\_\\_| \\_|_|\\_\\      |_| \\___/ \\___/  (_)        \n\
\n\n\n\
",
"\n\n\n\
        __   _____  _   _     __        _____ _   _         \n\
        \\ \\ / / _ \\| | | |    \\ \\      / /_ _| \\ | |        \n\
         \\ V / | | | | | |     \\ \\ /\\ / / | ||  \\| |        \n\
          | || |_| | |_| |      \\ V  V /  | || |\\  |        \n\
          |_| \\___/ \\___/        \\_/\\_/  |___|_| \\_|        \n\
\n\n\n\
"
};

string level_text[4] = {
"",
"\n\n\n\
         _     _______     _______ _          _         \n\
        | |   | ____\\ \\   / / ____| |        / |        \n\
        | |   |  _|  \\ \\ / /|  _| | |        | |        \n\
        | |___| |___  \\ V / | |___| |___     | |        \n\
        |_____|_____|  \\_/  |_____|_____|    |_|        \n\
\n\n\n\
",
"\n\n\n\
         _     _______     _______ _          ____          \n\
        | |   | ____\\ \\   / / ____| |        |___ \\         \n\
        | |   |  _|  \\ \\ / /|  _| | |          __) |        \n\
        | |___| |___  \\ V / | |___| |___      / __/         \n\
        |_____|_____|  \\_/  |_____|_____|    |_____|        \n\
\n\n\n\
",
"\n\n\n\
         _     _______     _______ _          _____         \n\
        | |   | ____\\ \\   / / ____| |        |___ /         \n\
        | |   |  _|  \\ \\ / /|  _| | |          |_ \\         \n\
        | |___| |___  \\ V / | |___| |___      ___) |        \n\
        |_____|_____|  \\_/  |_____|_____|    |____/         \n\
\n\n\n\
"
};

string border[2] = {
"\n\n\n\n\
   ______________________________  \n\
 / \\                             \\. \n\
|   |    ._.-=-._.-=-._.-=-._.   |. \n\
 \\__|                            |. \n\
    |                            |. \n\
    |    Welcome to this game.   |. \n\
    |                            |. \n\
    |                            |. \n\
    |   Name :                   |. \n\
    |                            |. \n\
    |                            |. \n\
    |    Mode :                  |. \n\
    |                            |. \n\
    |                            |. \n\
    |    ._.-=-._.-=-._.-=-._.   |. \n\
    |   _________________________|___ \n\
    |  /                            /. \n\
    \\_/____________________________/. \n\
    \n\n\n\n\
",
"\n\n\n\n\
   ______________________________  \n\
 / \\                             \\. \n\
|   |    ._.-=-._.-=-._.-=-._.   |. \n\
 \\__|                            |. \n\
    |                            |. \n\
    |    Welcome to this game.   |. \n\
    |                            |. \n\
    |                            |. \n\
    |   Name :                   |. \n\
    |                            |. \n\
    |                            |. \n\
    |    Mode :                  |. \n\
    |                            |. \n\
    |                            |. \n\
    |    ._.-=-._.-=-._.-=-._.   |. \n\
    |   _________________________|___ \n\
    |  /                            /. \n\
    \\_/____________________________/. \n\
    \n\n\n\n\
"
};

string graph[4] = {
//0
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |                                                   |||      | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//1
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||      |      |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |     |                                             |||  +   | \n\
|                            |                           |                      +   | \n\
|-=-=-=-=--=-=               |       --------------      |                      +   | \n\
|                    |       |       |                   |------------------    +   | \n\
|        |===========|               |                   |                          | \n\
|        |           |  |================|               |       |---------     +   | \n\
|        | |-----|                                               |              +   | \n\
|        | |     | ==-=-=-=-=-=-=-=-=-=-=-=-=  =-=-=-=-=-=-=-==  |                  | \n\
|        |         |                        |  |                 |---------         | \n\
|          ------- |      ============                                              | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//2
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |               --=-=--=-=-=----=-=--=-=-=--        |||      | \n\
|                  _ _____ _           ____                                         | \n\
|             | | | | ____  |   | |   / _ \\                                         | \n\
|             | |_| |  _| | |   | |  | | | |                                        | \n\
|             |  _  | |___| |___| |__| |_| |              _====_      _==_          | \n\
|             |_| | |__ __| ____ __ __  __/__ _  __      ==    ==   _==   =_    __  | \n\
|               \\ \\          _ \\|  _ \\| |   |  _ \\   -__==       ====       ===-    | \n\
|                \\ \\ /\\ / / | | | |_) | |   | | | |                                 | \n\
| --=-=--=-=-=--  \\ V  V /| |_| |  _ <| |___| |_|                                   | \n\
|                  \\_/\\_/  \\_ _/| | \\ \\_____ ____/          --=-=--=-=-=--          | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//3
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |                                                   |||      | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
"
};

string graph_copy[4] = {
//0
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |                                                   |||      | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//1
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||      |      |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |     |                                             |||  +   | \n\
|                            |                           |                      +   | \n\
|-=-=-=-=--=-=               |       --------------      |                      +   | \n\
|                    |       |       |                   |------------------    +   | \n\
|        |===========|               |                   |                          | \n\
|        |           |  |================|               |       |---------     +   | \n\
|        | |-----|                                               |              +   | \n\
|        | |     | ==-=-=-=-=-=-=-=-=-=-=-=-=  =-=-=-=-=-=-=-==  |                  | \n\
|        |         |                        |  |                 |---------         | \n\
|          ------- |      ============                                              | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//2
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |               --=-=--=-=-=----=-=--=-=-=--        |||      | \n\
|                  _ _____ _           ___                                          | \n\
|             | | | | ____  |   | |   / _ \\                                         | \n\
|             | |_| |  _| | |   | |  | | | |                                        | \n\
|             |  _  | |___| |___| |__| |_| |              _====_      _==_          | \n\
|             |_| | |__ __| ____ __ __  __/__ __         ==    ==   _==   =_    __  | \n\
|               \\ \\          _ \\|  _ \\| |   |  _ \\   -__==       ====       ===-    | \n\
|                \\ \\ /\\ / / | | | |_) | |   | | | |                                 | \n\
| --=-=--=-=-=--  \\ V  V /| |_| |  _ <| |___| |_|                                   | \n\
|                  \\_/\\_/  \\_ _/| | \\ \\_____ ____/          --=-=--=-=-=--          | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
",
//3
"\
\n\
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| \n\
|||||             |||||||||    ||||||||     ||      | ||||||||||||     ||||||||  | || \n\
|                     |||           ||                        |||          ||||     | \n\
|                      |                                                   |||      | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|                                                                                   | \n\
|___________________________________________________________________________________| \n\
|===================================================================================| \n\
\n\n\n\
"
};


int player_now_list[4] = { 0, 1133, 804, 804 };  //玩家的起始座標
int monster_now_list[20][4] = {  //怪獸的起始座標
    {},
    {0, 852, 553, 291},
    {0, 267, 483, 966},
    {0, 562, 664, 624},
    {0, 990,1012, 990},
    {0, 885, 269, 402},
    {0, 612, 118,1114},
    {0,1010, 944, 511},
    {0, 836, 736,1068},
    {0, 314, 701, 973},
    {0, 548,1051,1002},
    {0, 382,1158 , 360},
    {0,1126, 602 , 724},
    {0,1091, 736, 749},
    {0, 498, 544, 561},
    {0, 878, 278,1078},
    {0, 879, 811, 543},
    {0, 711, 534, 788},
    {0,1147, 884, 547},
    {0,   0, 281, 881}
};
int monster_char[20];

int difficulty;
int original_difficulty;
int money = 5;
int scores = 0;
int sum_scores = 0;
int died_times = 0;

//            u/w  d/s r/d  l/a
int dir_xy[4] = {-87, 87,  1,  -1};
int level_up[4]={0, 8, 10, 6}; //升級的分數標準
//int level_up[4]={0, 2, 3, 2};

string player_name;
char player_char;
string npc = "npc";

signed main(){
    srand( time(NULL) );

    start_output();
    a_name(player_name);
    set_difficulty();
    change_b1(player_name);

    start_the_game(1);
    return 0;
}

// 初始設定

void SetColor(int color = 7) {
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, color);
}

void a_name(string &player_name) {  //取名

    SetColor(240);
    system("clear");

    SetColor(251);
    cout << "\n\n";
    cout << npc << " : " << "Welcome to this game!" << "\n";
    Sleep(1000);
    cout << npc << " : " << "What should I call you?" << "\n";
    Sleep(1000);

    SetColor(240);
    cout << "\n\nPlease input your name ( less than 15 letters and without spaces ) : ";
    cin >> player_name;
    Sleep(100);
    system("clear");
    while(player_name.size() > 15){
        SetColor(252);
        cout << "Please make a name with less than 15 letters! \n\n";
        Sleep(200);
        SetColor(240);
        cout << "your name ( less than 15 letters ) : ";
        cin >> player_name;
        Sleep(100);
        system("clear");
    }

    SetColor(251);
    cout << "\n\n";
    cout << npc << " : " << "Wow!" <<"\n";
    Sleep(1000);
    cout << npc << " : " << "Nice to meet you, " << player_name <<". \n";
    Sleep(3000);
    system("clear");
}

void change_b1(string player_name) {    //輸出遊戲前基本資訊
    SetColor(240);
    system("clear");
    border[0] = border[1];

    int a = 0, b = 314;   // a 名字的第幾位  b 顯示框的第幾位
    for( ; a < player_name.size() ; a++, b++)  border[0][b] = player_name[a];

    a = 0, b = 426;
    string s = difficulty_return() + " " + to_string(difficulty);
    for( ; a < s.size() ; a++, b++)  border[0][b] = s[a];

    cout << border[0];
    Sleep(1300);


    char c;
    while(c=getchar()!='\n');
    SetColor(240);
    cout << "Do you want to skip the instructions? (Input 'Y'/ 'N') : ";
    string aa;
    cin >> aa;
    cout << "\n";
    while( !(aa == "Y" or aa == "y" or aa == "N" or aa == "n") ) {
        SetColor(252);
        cout << "\n\nPlease input 'Y' or 'N'! \n\n";
        SetColor(240);
        cout << "Do you want to skip the instructions? (Input 'Y'/ 'N') : ";
        cin >> aa;
        cout << "\n";
        Sleep(200);
    }
    if(aa == "N" or aa == "n") {

        SetColor(251);
        cout << "\n\n";
        cout << npc << " : " << "Let me show you the game rules~" << "\n\n";
        Sleep(1700);
        cout << npc << " : " << "'P' means the player's position." << "\n";
        Sleep(800);
        cout << npc << " : " << "You can press 'W/w' to move up, 'S/s' to move down, 'D/d' to move right, and 'A/a' to move left." << "\n\n";
        Sleep(3000);
        cout << npc << " : " << "'M' means the monster's position." << "\n";
        Sleep(1200);
        cout << npc << " : " << "The monster randomly MOVES 1 TO 5 SPACES in any of the four directions." << "\n\n";
        Sleep(1100);
        cout << npc << " : " << "Players must AVOID the monsters (there could be more than one)." << "\n";
        Sleep(1800);
        cout << npc << " : " << "If players encounters a monster, they will die." << "\n";
        Sleep(3100);
        cout << npc << " : " << "'$' is money." << "\n";
        Sleep(1000);
        cout << npc << " : " << "You can use money to resurrect upon death, and it costs 5 coins for each resurrection." << "\n\n";
        Sleep(3500);
        cout << npc << " : " << "'.' is the point you need to collect. " << "\n";
        Sleep(1200);
        cout << npc << " : " << "Once you reach a certain number of points, you advance to the next level." << "\n\n";
        Sleep(3000);
        cout << npc << " : " << "'=', '-', '+', etc., are obstacles." << "\n";
        Sleep(1200);
        cout << npc << " : " << "But note that '_' can be passed through!" << "\n\n";
        Sleep(2500);
        cout << npc << " : " << "There are a total of THREE levels, and as you progress to the next level, the difficulty INCREASE." << "\n\n";
        Sleep(4000);
    }
    while(c=getchar()!='\n');
    SetColor(251);
    cout << npc << " : " << "Ready? Press ENTER to continue! ";
    string ready;
    getline(cin, ready);
    cout << "\n";
    cout << npc << " : " << "Good luck!" << "\n";
    Sleep(3000);
    system("clear");
}

string difficulty_return() {     //遊戲難度數字對照英文轉換
    
    if( 1 <= difficulty and difficulty <= 4 )   return "Easy";
    if( 5 <= difficulty and difficulty <= 10 )   return "Medium";
    if( 11 <= difficulty and difficulty <= 15 )   return "Hard";
    else return "";

}

void set_difficulty() { //設定遊戲難度
    SetColor(240);
    system("clear");
    char c;
    while(c=getchar()!='\n');

    SetColor(251);
    cout << "\n\n";
    cout << npc << " : " << "We have roughly three levels of difficulty. " << "\n";
    Sleep(1000);
    cout << npc << " : " << "Select the mode you would like to challenge!" << "\n";
    Sleep(1000);

    SetColor(240);
    cout << "\n\n Mode:\n";
    cout << "   Easy  1 ~ 4\n";
    cout << "   Medium  5 ~ 10\n";
    cout << "   Hard  11 ~ 15\n\n";
    cout << "Set the level of difficulty you want -- the higher the number, the harder the challenge. \n";
    cout << "difficulty (Please input a number between 1 to 15) : ";

    string diff;
    cin >> diff;
    difficulty = str_to_int(diff);
    Sleep(100);
    system("clear");
    while(  !(0 < difficulty and difficulty <= 15) ){
        SetColor(252);

        cout << "\n\nPlease input a number between 1 to 13 ! \n\n";
        Sleep(200);

        SetColor(240);
        cout << "\n\n Mode:\n";
        cout << "   Easy  1 ~ 4\n";
        cout << "   Medium  5 ~ 10\n";
        cout << "   Hard  11 ~ 15\n\n";
        cout << "Set the level of difficulty you want—the higher the number, the harder the challenge. : \n";
        cout << "difficulty (Please input a number between 1 to 15) : ";
        cin >> diff;
        difficulty = str_to_int(diff);
        Sleep(100);
        system("clear");
    }

    SetColor(251);
    cout << "\n\n";
    cout << npc << " : " << "Hmm.... You choose " << difficulty_return() << " " << difficulty << ".\n";
    original_difficulty = difficulty;
    Sleep(3000);
    system("clear");

}

//---------------------------------------------
//場景/狀態 設定

void output_graph(int id) {
    system("clear");
    cout << "\n   * level : " << id << "\n   * difficulty : " << difficulty << "\n\n   * money $ : " << money << "\n";
    cout << "   * scores . : " << scores << "         * passing standards : " << level_up[id] << "\n\n";
    cout << graph[id];

}

void start_output() {
    SetColor(85);
    system("cls");
    SetColor(95);
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    SetColor(91);
    cout << text[0] ;
    SetColor(95);
    cout << "\n - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    Sleep(3000);
}

void died_output() {
    SetColor(51);
    system("cls");
    SetColor(63);
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    SetColor(243);
    cout << text[1] ;
    SetColor(63);
    cout << "\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    Sleep(1500);
}

void you_win_output() {
    SetColor(177);
    system("cls");
    SetColor(191);
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    SetColor(177);
    cout << text[3] ;
    SetColor(191);
    cout << "\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    Sleep(3000);
}

void thank_you_output() {
    SetColor(102);
    system("cls");
    SetColor(111);
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    SetColor(110);
    cout << text[2] ;
    SetColor(111);
    cout << "\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    Sleep(3000);
}

void level_output(int id) {
    SetColor(119);
    system("cls");
    SetColor(127);
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    SetColor(112);
    cout << level_text[id] ;
    SetColor(127);
    cout << "\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
    Sleep(1000);
}

void ofstream_run(int id) {     //將資訊寫入檔案
    ofstream ofs;
    ofs.open("output.txt", ios::app);
    ofs << setw(15) << player_name << "    " << setw(2) << original_difficulty << "    " << setw(2) << id << "    " << setw(3) << died_times << "    " << setw(3) << money << "    " << setw(3) << scores << "\n\n";
    ofs.close();
}

void suggest() {    //建議 滿意度 回饋
    SetColor(107);
    system("cls");
    cout << npc << " : " << "I wonder if you found it fun?" << "\n\n";
    Sleep(1000);

    SetColor(100);
    cout << "Please enter your satisfaction level (Input a number from 1 to 10) : ";
    int a;
    string stra;
    cin >> stra;
    a = str_to_int(stra);
    cout << "\n";

    while( !(1 <= a and a <= 10) ) {
        SetColor(108);
        cout << "\n\nPlease input a number from 1 to 10! \n\n";
        SetColor(100);
        cout << "Please enter your satisfaction level (Input a number from 1 to 10, 10 is the most satisfactory) : ";
        cin >> stra;
        a = str_to_int(stra);
        cout << "\n";
        Sleep(200);
    }
    Sleep(500);

    SetColor(107);
    cout << npc << " : " << "Could you give some suggestions?" << "\n\n";
    Sleep(1000);

    SetColor(100);
    char c;
    while(c=getchar()!='\n');
    cout << "Please give some suggestions about this game (write it all in one line) \n";
    cout << "Your suggestions : ";
    string ss;
    getline(cin, ss);
    cout << "\n\n";
    Sleep(200);

    SetColor(107);
    cout << npc << " : " << "Thank you so much!" << "\n";
    Sleep(3000);

    ofstream ofs;
    ofs.open("suggest.txt", ios::app);
    if ( ofs.is_open() )    ofs << setw(15) << player_name << "    " << setw(2) << a << "     " << ss << "\n\n";
    ofs.close();
}
void again() {  //確認玩家使否要再玩一次
    SetColor(102);
    system("cls");

    SetColor(107);
    cout << "\n\n";
    cout << npc << " : " << "Wow! You finish the game!" << "\n\n";
    cout << npc << " : " << "You can choose to select a different difficulty level and play again, or end this game." << "\n\n";
    Sleep(800);

    SetColor(100);
    cout << "Do you want to play again? (Input 'Y'/ 'N'): ";
    string a;
    cin >> a;
    Sleep(200);
    SetColor(102);

    while( !(a == "Y" or a == "y" or a == "N" or a == "n") ) {
        SetColor(52);
        cout << "\n\nPlease input 'Y' or 'N'! \n\n";
        SetColor(48);
        cout << "Do you want to play again? (Input 'Y'/ 'N'): ";
        cin >> a;
        cout << "\n";
        Sleep(200);
        SetColor(102);
    }

    if(a == "Y" or a == "y"){
        set_difficulty();
        change_b1(player_name);

        start_the_game(1);
    }
}
void finish(int id) {   // 完成遊戲 (完全結束)
    SetColor(102);
    system("cls");
    system("stty icanon");

    again();

    SetColor(107);
    cout << "\n\n";
    cout << npc << " : " << "I'm happy you played this game!" << "\n\n";
    Sleep(2000);

    suggest();

    cout << npc << " : " << "This is the end of the game." << "\n";
    Sleep(1000);
    cout << npc << " : " << "Thank you for playing." << "\n";
    Sleep(1000);
    cout << npc << " : " << "Looking forward to our next encounter!" << "\n";
    Sleep(1000);
    cout << npc << " : " << "Bye - bye ~" << "\n";
    Sleep(3000);

    ofstream_run(id);
    thank_you_output();
    exit(0);
}

void get_money(int pos, int id) {   //得$的操作
    graph[id][pos] = ' ';
    money++;
}

void get_scores(int pos, int id) { //得分的操作
    graph[id][pos] = ' ';
    scores++;
}

void player_died(int pos, int id) { //玩家死亡的操作
    died_output();
    died_times++;
    SetColor(15);
    system("cls");
    cout << "\n\n\n";
    cout << graph[id];
    SetColor(11);
    cout << npc << " : " << "Note that the monster moves randomly between 1 to 5 spaces in any of the four directions." << "\n\n";
    Sleep(1100);
    cout << npc << " : " << "You died! Press ENTER to continue! ";
    string key;
    getline(cin, key);
    Sleep(500);
    system("cls");
}

// $$$ / ...

void init_scores_set(int id){    //在最開始設定 $ .
    int cnt = 0;
    while(cnt <= 10){
        int r = rand() % 1216;
        if((int)graph[id][r] == 32){
            graph[id][r] = '.';
            cnt++;
        }
    }
}

void set_scores_and_money(int id) { //設定 $ .  每次移動就隨機增加
    for(int i = 1 ; i <= 3; i++) {
        int r = rand() % 1216;
        if((int)graph[id][r] == 32)    graph[id][r] = '.';
    }
    int r = rand() % 1216;
    if(r % 2 and ( (int)graph[id][r] == 32 or graph[id][r] == '.' ) ) graph[id][r] = '$';
}

//---------------------------------------------
//玩家的移動操作

int dir_retrun(char d) {    //將字母(方向)轉換成更容易判讀的數字
    if(d == 'W' or d == 'w')    return 0;
    if(d == 'S' or d == 's')    return 1;
    if(d == 'D' or d == 'd')    return 2;
    if(d == 'A' or d == 'a')    return 3;
    return 4;
}

int player_check_pos(int pos, int id) {   // 確認欲前往的位置是否合法
    if(graph[id][pos] == 'M')   return 4;
    if(graph[id][pos] == '$')   get_money(pos, id);
    if(graph[id][pos] == '.')   get_scores(pos, id);
    if( (int)graph[id][pos] == 32 or graph[id][pos] == '_' )  return 1;
    return 0;
}

void player_change_pos(int from, int to, int id) { // 顯示位置的移動
    graph[id][from] = player_char;
    player_char = graph[id][to];
    graph[id][to] = 'P';
}
int nowwww;
int dir_input(int id) { //讓玩家輸入欲移動的方向
    SetColor(240);
    output_graph(id);

    cout << nowwww <<"\n";
    cout << "Press 'W/w' to move up, 'S/s' to move down, 'D/d' to move right, and 'A/a' to move left. (One letter at a time.)\n";
    SetColor(249);
    cout << "Your operation: ";

    char a ;//= getch() ;
    a= getch();
    int aa = dir_retrun(a);
    if(aa == 4) {
        aa = dir_input(id);
    }
    SetColor(240);
    return aa;
}

int player_run(int player_now, int id) { // 進行移動的操作

    nowwww=player_now;
    int aa = dir_input(id);
    int player_new_pos = player_now + dir_xy[aa];

    if( player_check_pos(player_new_pos, id) == 4 ){
        player_died(player_now, id);
        return -1;
    }else if( player_check_pos(player_new_pos, id) == 1 ){
        player_change_pos(player_now, player_new_pos, id);
        player_now = player_new_pos;
        return player_now;
    }
    else{
        return player_run(player_now, id);
    }
}

//-----------------------------------------------
// 怪獸運作


int monster_check_pos(int pos, int id) {   // 確認欲前往的位置是否合法
    if(graph[id][pos] == 'P')   return 4;
    if(graph[id][pos] == '$')   graph[id][pos] = ' ';
    if(graph[id][pos] == '.')   graph[id][pos] = ' ';
    if( (int)graph[id][pos] == 32 or graph[id][pos] == '_' )  return 1;
    return 0;
}

void monster_change_pos(int which, int from, int to, int id) { // 圖上的移動
    graph[id][from] = monster_char[which];
    monster_char[which] = graph[id][to];
    graph[id][to] = 'M';
}

int monster_run(int which, int monster_now, int id) { // 進行移動的操作

    int aa = rand() % 4;
    bool b = 0;
    for(int i=1; i<=rand() % 5 + 1; i++) {
        int monster_new_pos = monster_now + dir_xy[aa];
        if( monster_check_pos(monster_new_pos, id) == 4 ) {
            player_died(monster_new_pos, id);
            return -1;
        }else if( monster_check_pos(monster_new_pos, id) ) {
            monster_change_pos(which, monster_now, monster_new_pos, id);
            monster_now = monster_new_pos;
            b = 1;
        }else   break;
    }

    if(b)   return monster_now;
    else    return monster_run(which, monster_now, id);
}

//------------------------------------------------------
// game start

void init_set(int id){  //遊戲開始前場景等基本設置
    fflush(stdin);
    sum_scores += scores;
    scores = 0;
    graph[id] = graph_copy[id];
}

void start_the_game(int id) {   //遊戲運作
    if(id == 4)  finish(id);

    init_set(id);
    int player_now = player_now_list[id];
    player_char = graph[id][player_now];
    graph[id][player_now] = 'P';
    int monster_now[20];
    for(int i = 1 ; i <= difficulty ; i++) {
        monster_now[i] = monster_now_list[i][id];
        monster_char[i] = graph[id][ monster_now[i] ];
        graph[id][ monster_now[i] ] = 'M';
    }
    level_output(id);
    init_scores_set(id);


    SetColor(240);
    NewFunction();

    while(player_now != -1){

        for(int i = 1 ; i <= difficulty ; i++){
            monster_now[i] = monster_run(i, monster_now[i], id);
            if(monster_now[i] == -1)   end_the_game(id);;
        }
        player_now = player_run(player_now, id);

        if( scores >= level_up[id] ){

            you_win_output();
            SetColor(251);
            cout << "\n\n";
            cout << npc << " : " << "You finish this level!!! Press ENTER to continue! ";
            char c;
            while(c=getchar()!='\n');

            difficulty = min(19 , difficulty + rand() % 4);

            start_the_game(id+1);
        }
        if(player_now % 2)    set_scores_and_money(id);
    }
    end_the_game(id);
}

void NewFunction()
{
    system("cls");
}

void end_the_game(int id) { //遊戲結束的運作
    SetColor(51);
    system("cls");
    SetColor(59);
    cout << "\n\n";
    cout << npc << " : " << "Oh no. You are dead." << "\n\n";
    Sleep(1000);

    if(money >= 5){
        SetColor(59);
        cout << npc << " : " << "Luckily, you can revive for $5 and restart this level." << "\n\n";
        Sleep(2000);

        SetColor(48);
        cout << "Would you like to resurrect? It costs 5 dollars. (Input 'Y'/ 'N') : ";
        string a;
        cin >> a;
        while( !(a == "Y" or a == "y" or a == "N" or a == "n") ) {
            SetColor(52);
            cout << "\n\nPlease input 'Y' or 'N'! \n\n";
            SetColor(48);
            cout << "Would you like to resurrect? It costs 5 dollars. (Input 'Y'/ 'N') : ";
            cin >> a;
            cout << "\n";
            Sleep(200);
        }
        if(a == "Y" or a == "y") {
            money-=5;
            start_the_game(id);
        }
        Sleep(300);
    }

    SetColor(59);
    cout << "\n\n";
    cout << npc << " : " << "You have a chance to start over, and you will return to level one." << "\n\n";
    Sleep(2000);

    SetColor(48);
    cout << "Do you want to play again? (Input 'Y'/ 'N'): ";
    string a;
    cin >> a;
    Sleep(200);

    while( !(a == "Y" or a == "y" or a == "N" or a == "n") ) {
        SetColor(52);
        cout << "\n\nPlease input 'Y' or 'N'! \n\n";
        SetColor(48);
        cout << "Do you want to play again? (Input 'Y'/ 'N'): ";
        cin >> a;
        cout << "\n";
        Sleep(200);

    }

    if(a == "Y" or a == "y"){
        money = 5;
        difficulty = original_difficulty;
        sum_scores = 0;
        start_the_game(1);
    }else if(a == "N" or a == "n")   finish(id);
}


int str_to_int(string str) { //防呆機制

    for(int i = 0 ; i < str.size() ; i++) {
        if( !('0' <= str[i] and str[i] <= '9') )    return -1;
    }
    return stoi(str);
    //----
    if(str == "1")  return 1;
    if(str == "2")  return 2;
    if(str == "3")  return 3;
    if(str == "4")  return 4;
    if(str == "5")  return 5;
    if(str == "6")  return 6;
    if(str == "7")  return 7;
    if(str == "8")  return 8;
    if(str == "9")  return 9;
    if(str == "10")  return 10;
    if(str == "11")  return 11;
    if(str == "12")  return 12;
    if(str == "13")  return 13;
    if(str == "14")  return 14;
    if(str == "15")  return 15;
    if(str == "16")  return 16;
    if(str == "17")  return 17;
    if(str == "18")  return 18;
    if(str == "19")  return 19;
    if(str == "20")  return 20;
    return -1;
}

/*

   ____       ____
  /    )     (    \
 /    (  ^_^  )    \
|  {   \('v')/   }  |
|   {   /   \   }   |
|_)(   /\   /\   )(_|
|)  (_ | \|/  |_)  (|
'     "--^^^^--"    '

*/



