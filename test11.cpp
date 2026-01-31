#include<iostream>
using namespace std;
 char running,cycling,weightlifting,swimming;
    char userChoice;
    char userDouble;
    int calorie;
    int weight;
    int duration;
    // int heart;//60-200
    int age;
    int currentHeartRate;

  
    
void input(){
   
    if(userChoice=='R'){
        if(userDouble=='L'){
            calorie= (8 *weight * duration) / 60;

            cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;
        }
        else if(userDouble=='M'){
            calorie= (11 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='H'){
            calorie= (14 *weight * duration) / 60;
            cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
    }
    else if(userChoice=='C'){
        if(userDouble=='L'){
            calorie= (6 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='M'){
            calorie= (9 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='H'){
            calorie= (12 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }

    }
    else if(userChoice=='W'){
        if(userDouble=='L'){
            calorie= (3 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='M'){
            calorie= (6 *weight * duration) / 60;
            cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='H'){
            calorie= (9 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }

    }
    else if(userChoice=='S'){
        if(userDouble=='L'){
            calorie= (7 *weight * duration) / 60;
            cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='M'){
            calorie= (10 *weight * duration) / 60;
            cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
        else if(userDouble=='H'){
            calorie= (13 *weight * duration) / 60;
             cout<<"Exercise:"<<"Running"<<endl;
            cout<<"Duration:"<<duration<<endl;
            cout<<"Body Weight:"<<weight<<endl;
            cout<<"Heart Rate:"<<currentHeartRate<<endl;
            cout<<"Intensity:"<<userDouble<<endl;
            cout<<endl;
            cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
            cout<<"Calories Burned:"<<calorie<<"kcal"<<endl;
            cout<<"Calories/Minute:"<<(calorie/duration)<<endl;

        }
    }
    cout<<endl;
}

int calories=calorie;
void food(){
    cout<<"--- CALORIE BURN ANALYSIS ---"<<endl;
if(calories>=500){
cout<<"Food Equivalent: You burned approximately 1 Burger!"<<endl;
}
else if(calories>=300 && calories<500){
cout<<"Food Equivalent: You burned approximately 1 Pizza Slice!"<<endl;
}
else if(calories<300){
cout<<"Food Equivalent: You burned approximately 1 Samso!"<<endl;
}
cout<<endl;
}

void heartRate(){
    cout<<"--- HEART RATE ANALYSIS ---"<<endl;
int maxHeartRate=220-age;
int HRPercentage=(currentHeartRate/maxHeartRate)*100;
if(HRPercentage>=50 && HRPercentage<=70 ){
    cout<<"Maximum HR (Age "<<age<<"):"<<currentHeartRate<<"bpm"<<endl;
    cout<<"Fat burn zone"<<endl;
}
else if(HRPercentage>70 && HRPercentage<=85){
    cout<<"Maximum HR (Age "<<age<<"):"<<currentHeartRate<<"bpm"<<endl;
    cout<<"Cardio zone"<<endl;
}
else if(HRPercentage>85 && HRPercentage<=100){
    cout<<"Maximum HR (Age "<<age<<"):"<<currentHeartRate<<"bpm"<<endl;
    cout<<"Peak zone"<<endl;
}
else if(HRPercentage<50 ){
    cout<<"Maximum HR (Age "<<age<<"):"<<currentHeartRate<<"bpm"<<endl;
    cout<<"Trainning zone"<<endl;
}
cout<<endl;
}
void intensityScore(){
    cout<<"--- WORKOUT INTENSITY ---"<<endl;
    int formula;
    if(userDouble='L'){
        formula= (duration/10) + (currentHeartRate/10)+1* 5;
        cout<<"Intensity Score:"<<formula;
    }
    else if(userDouble='M'){
        formula= (duration/10) + (currentHeartRate/10)+2* 5;
        cout<<"Intensity Score:"<<formula;
    }
    else if(userDouble='H'){
        formula= (duration/10) + (currentHeartRate/10)+3* 5;
        cout<<"Intensity Score:"<<formula;
    }

    if(formula>30){
        cout<<"workout type:"<<"intense workout"<<endl;
    }
    else if(formula>=20 && formula<=30){
        cout<<"workout type:"<<"Good workout"<<endl;
    }
    else if(formula>=10 && formula<20){
        cout<<"workout type:"<<"Moderate workout"<<endl;
    }
    else if(formula<10){
        cout<<"workout type:"<<"light workout"<<endl;
    }
    cout<<endl;
}

void Assessment(){
    cout<<"--- FITNESS ASSESSMENT ---"<<endl;
    if(currentHeartRate<120 && duration>30){
        cout<<"Good endurance"<<endl;
    }
    else if(currentHeartRate>160 && duration>20){
        cout<<"High intensity training"<<endl;
    }
    else if((currentHeartRate>=120 &&currentHeartRate<=160) && duration>40){
        cout<<"Steady state cardio"<<endl;
    }
    else {
        cout<<"General fitness"<<endl;
    }
}

  int main(){
    cout<<"Enter choice:";
    cin>>userChoice;
    cout<<"Enter doubleChoice:";
    cin>>userDouble;
    cout<<"Enter weight:";
    cin>>weight;
    cout<<"Enter time duration:";
    cin>>duration;  
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter heart rate:";
    cin>>currentHeartRate;  

    input();
    food();
    heartRate();
    intensityScore();
    Assessment();
}