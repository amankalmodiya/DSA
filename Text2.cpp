#include<iostream>
using namespace std;

void calorieCalclationExercise(char running,char cycling,char weightlifting,char swimming,int durationMinutes,int weight){
    //running
        if(running='L'){
            cout<< (8 *weight *durationMinutes) / 60<<endl;
        }
        else if(running='M'){
            cout<<(11 *weight *durationMinutes) / 60<<endl;
        }
        else{
            cout<<(16 *weight *durationMinutes) / 60<<endl;
        }
    //cycling
    if(cycling='L'){
            cout<< (6 *weight *durationMinutes) / 60<<endl;
        }
        else if(cycling='M'){
            cout<<(19 *weight *durationMinutes) / 60<<endl;
        }
        else{
            cout<<(12 *weight *durationMinutes) / 60<<endl;
        }

        //weightlifting
        if(weightlifting='L'){
            cout<< (8 *weight *durationMinutes) / 60<<endl;
        }
        else if(weightlifting='M'){
            cout<<(11 *weight *durationMinutes) / 60<<endl;
        }
        else{
            cout<<(16 *weight *durationMinutes) / 60<<endl;
        }

        //swimming
         if(swimming='L'){
            cout<< (8 *weight *durationMinutes) / 60<<endl;
        }
        else if(swimming='M'){
            cout<<(11 *weight *durationMinutes) / 60<<endl;
        }
        else{
            cout<<(16 *weight *durationMinutes) / 60<<endl;
        }

        
}
        void calorieCalclationFood(int calories){
        if(calories>=500){
            cout<<"Show 'Burger' (500 cal)";
        }
        else if(calories>=300){
            cout<<"500: Show 'Pizza Slice' (300 cal)"<<endl;
        }
        else if(calories<300){
            cout<<"Show 'Samosa' (250 cal)"<<endl;
        }
        else{
            cout<<"invalid calroies enter"<<endl;
        }
    }

    
    void heart(int heartRate){
        int age=25;
        int MXHR;
        heartRate =220-age;
        int HRP= (heartRate / MXHR) *100;

        if(HRP>=50 && HRP<=80){
            cout<<"fat burn zone";
        
        }
        else if(HRP>80 && HRP<=90){
            cout<<"cardio zone";
        }
        else if(HRP>90 && HRP<=100){
            cout<<"peak zone";
        }
        else{
            cout<<"trainning zone";
        }
    }

int main(){
    char running;
    char cycling;
    char weightlifting;
    char swimming;
    int durationMinutes;
    int weight;
    int heartRate;
    char intensityLevel;

calorieCalclationExercise('L','M','H','M',50,180);
 heart(heartRate);
        calorieCalclationFood(400);

}