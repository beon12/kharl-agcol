#include <stdio.h>

float calculate_bmi(float weight_kg, float height_m);
void display_category(float bmi);
/*diri nato gidefine ang atoang function which is ang calculate_bmi 
ug and display_category, ato silang ginganlan aron dili ta masaag
and magka bali2 atong calculation*/

float calculate_bmi(float weight_kg, float height_m) {
    return weight_kg / (height_m * height_m);
    /*float atoang gamit kay mag gamit man tag integers
    nga naay decimal point*/
}

void display_category(float bmi) {
    if (bmi < 18.5f) {
        printf("Underweight\n");
    } else if (bmi < 25.0f) {
        printf("Normal\n");
    } else if (bmi < 30.0f) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    /*diria gi gamitan nato ug if else para sa display for each
    result na ma calculate nato, if 18.5 below and atoang result
    ang mo print ra sab ana is underweight, same as the others.*/
}

int main(void) {
    float weight, height;

    printf("Enter your weight in kilograms: ");
    if (scanf("%f", &weight) != 1 || weight <= 0) {
        printf("Invalid weight.\n");
        return 1;
    }
    /*diri na part kay para sa input, diri nato giallow ang
    user na mabutang ilang weight and height, of mali gane iyang
    input, matik invalid weight gyud na ang mo gawas*/

    printf("Enter your height in meters: ");
    if (scanf("%f", &height) != 1 || height <= 0) {
        printf("Invalid height.\n");
        return 1;
    }
    /*input diri ang height sa user in meters, if dili meters
    iyang ibutang, dili mag error ang code pero 0.0 na ang mo gawas */
    
    float bmi = calculate_bmi(weight, height);
    printf("Your BMI is: %.1f\n", bmi);
    printf("Category: ");
    display_category(bmi);

    /*here is ang result of calculation and it identifies dayon
    ug asa nabelong na category ang result sa atoang calculation*/

    return 0;
}

    

