#include <stdio.h>
#include <math.h>
#include <string.h>
#include "ElectronicHelper.h"

/*all functions for calculating voltage, power, current, resistance with the other two values and also to find resistance with color*/

float vol_ir(float i, float r)
{
    return i*r;
}
float vol_pi(float p, float i)
{
    return p/i;
}
float vol_pr(float p, float r)
{
    double vpr;
    vpr = sqrt(p*r);
    return vpr;
}
float cur_vr(float v, float r)
{
    return v/r;
}
float cur_pv(float v, float p)
{
    return p/v;
}
float cur_pr(float p, float r)
{
    double cpr;
    cpr = sqrt(p/r);
    return cpr;
}
float res_vi(float i, float v)
{
    return v/i;
}
float res_pv(float p, float v)
{
    return (v*v)/p;
}
float res_pi(float i, float p)
{
    return p/(i*i);
}
float pow_vi(float v, float i)
{
    return v*i;
}
float pow_vr(float v, float r)
{
    return (v*v)/r;
}
float pow_ir(float i, float r)
{
    return (i*i)*r;
}

void resistor_color(char *res_clr,char *clr_val,int iter,int numclr)
{
    if (iter == (numclr-1))
    {
        if(!strcmp(res_clr,"black") || !strcmp(res_clr,"Black") || !strcmp(res_clr,"BLACK"))
            {
                
                strcpy(clr_val,"+-20%");
            }
     if(!strcmp(res_clr,"brown") || !strcmp(res_clr,"Brown") || !strcmp(res_clr,"BROWN"))
            {
                
                strcpy(clr_val,"+-1%");
            }       
     if(!strcmp(res_clr,"red") || !strcmp(res_clr,"Red") || !strcmp(res_clr,"RED"))
            {
                
                strcpy(clr_val,"+-2%");
            }
     if(!strcmp(res_clr,"orange") || !strcmp(res_clr,"Orange") || !strcmp(res_clr,"ORANGE"))
            {
                
                strcpy(clr_val,"+-3%");
            }
     if(!strcmp(res_clr,"yellow") || !strcmp(res_clr,"Yellow") || !strcmp(res_clr,"YELLOW"))
            {
                
                strcpy(clr_val,"+-100%");
            }
     if(!strcmp(res_clr,"green") || !strcmp(res_clr,"Green") || !strcmp(res_clr,"GREEN"))
            {
                
                strcpy(clr_val,"+-0.5%");
            }       
     if(!strcmp(res_clr,"blue") || !strcmp(res_clr,"Blue") || !strcmp(res_clr,"BLUE"))
            {
                
                strcpy(clr_val,"+-0.25%");
            }
     if(!strcmp(res_clr,"violet") || !strcmp(res_clr,"Violet") || !strcmp(res_clr,"VIOLET"))
            {
                
                strcpy(clr_val,"+-0.10%");
            }                   
     if(!strcmp(res_clr,"grey") || !strcmp(res_clr,"Grey") || !strcmp(res_clr,"GREY") || !strcmp(res_clr,"gray") || !strcmp(res_clr,"Gray") || !strcmp(res_clr,"GRAY"))
            {
                
                strcpy(clr_val,"+-0.05%");
            }
          
     if(!strcmp(res_clr,"gold") || !strcmp(res_clr,"Gold") || !strcmp(res_clr,"GOLD"))
            {
                
                strcpy(clr_val,"+-5%");
            }
     if(!strcmp(res_clr,"silver") || !strcmp(res_clr,"Silver") || !strcmp(res_clr,"SILVER"))
            {
                
                strcpy(clr_val,"+-10%");
            }              
    }

    else if (iter == (numclr-2))
    {
        if(!strcmp(res_clr,"black") || !strcmp(res_clr,"Black") || !strcmp(res_clr,"BLACK"))
            {
                
                strcpy(clr_val,"*(10^0) ohms ");
            }
     if(!strcmp(res_clr,"brown") || !strcmp(res_clr,"Brown") || !strcmp(res_clr,"BROWN"))
            {
                
                strcpy(clr_val,"*(10^1) ohms ");
            }       
     if(!strcmp(res_clr,"red") || !strcmp(res_clr,"Red") || !strcmp(res_clr,"RED"))
            {
                
                strcpy(clr_val,"*(10^2) ohms ");
            }
     if(!strcmp(res_clr,"orange") || !strcmp(res_clr,"Orange") || !strcmp(res_clr,"ORANGE"))
            {
                
                strcpy(clr_val,"*(10^3) ohms ");
            }
     if(!strcmp(res_clr,"yellow") || !strcmp(res_clr,"Yellow") || !strcmp(res_clr,"YELLOW"))
            {
                
                strcpy(clr_val,"*(10^4) ohms ");
            }
     if(!strcmp(res_clr,"green") || !strcmp(res_clr,"Green") || !strcmp(res_clr,"GREEN"))
            {
                
                strcpy(clr_val,"*(10^5) ohms ");
            }       
     if(!strcmp(res_clr,"blue") || !strcmp(res_clr,"Blue") || !strcmp(res_clr,"BLUE"))
            {
                
                strcpy(clr_val,"*(10^6) ohms ");
            }
     if(!strcmp(res_clr,"violet") || !strcmp(res_clr,"Violet") || !strcmp(res_clr,"VIOLET"))
            {
                
                strcpy(clr_val,"*(10^7) ohms ");
            }                   
     if(!strcmp(res_clr,"grey") || !strcmp(res_clr,"Grey") || !strcmp(res_clr,"GREY") || !strcmp(res_clr,"gray") || !strcmp(res_clr,"Gray") || !strcmp(res_clr,"GRAY"))
            {
                
                strcpy(clr_val,"*(10^8) ohms ");
            }
     if(!strcmp(res_clr,"white") || !strcmp(res_clr,"White") || !strcmp(res_clr,"WHITE"))
            {
                
                strcpy(clr_val,"*(10^9) ohms ");
            }       
     if(!strcmp(res_clr,"gold") || !strcmp(res_clr,"Gold") || !strcmp(res_clr,"GOLD"))
            {
                
                strcpy(clr_val,"*(10^-1) ohms ");
            }
     if(!strcmp(res_clr,"silver") || !strcmp(res_clr,"Silver") || !strcmp(res_clr,"SILVER"))
            {
                
                strcpy(clr_val,"*(10^-2) ohms ");
            }              
    }
    else
    {
    
     if(!strcmp(res_clr,"black") || !strcmp(res_clr,"Black") || !strcmp(res_clr,"BLACK"))
            {
                
                strcpy(clr_val,"0");
            }
     if(!strcmp(res_clr,"brown") || !strcmp(res_clr,"Brown") || !strcmp(res_clr,"BROWN"))
            {
                
                strcpy(clr_val,"1");
            }       
     if(!strcmp(res_clr,"red") || !strcmp(res_clr,"Red") || !strcmp(res_clr,"RED"))
            {
                
                strcpy(clr_val,"2");
            }
     if(!strcmp(res_clr,"orange") || !strcmp(res_clr,"Orange") || !strcmp(res_clr,"ORANGE"))
            {
                
                strcpy(clr_val,"3");
            }
     if(!strcmp(res_clr,"yellow") || !strcmp(res_clr,"Yellow") || !strcmp(res_clr,"YELLOW"))
            {
                
                strcpy(clr_val,"4");
            }
     if(!strcmp(res_clr,"green") || !strcmp(res_clr,"Green") || !strcmp(res_clr,"GREEN"))
            {
                
                strcpy(clr_val,"5");
            }       
     if(!strcmp(res_clr,"blue") || !strcmp(res_clr,"Blue") || !strcmp(res_clr,"BLUE"))
            {
                
                strcpy(clr_val,"6");
            }
     if(!strcmp(res_clr,"violet") || !strcmp(res_clr,"Violet") || !strcmp(res_clr,"VIOLET"))
            {
                
                strcpy(clr_val,"7");
            }                   
     if(!strcmp(res_clr,"grey") || !strcmp(res_clr,"Grey") || !strcmp(res_clr,"GREY") || !strcmp(res_clr,"gray") || !strcmp(res_clr,"Gray") || !strcmp(res_clr,"GRAY"))
            {
                
                strcpy(clr_val,"8");
            }
     if(!strcmp(res_clr,"white") || !strcmp(res_clr,"White") || !strcmp(res_clr,"WHITE"))
            {
                
                strcpy(clr_val,"9");
            }
    }               
          
}


void main()
{
    printf("..........................................................................\n");
    printf("                         Electronic Helper                            \n");
    printf("1.press 1 to find resistance of a resistor by naming the colors on them\n");
    printf("2.press 2 for calculating voltage using any two of current, resistance, power values\n");
    printf("3.press 3 for calculating current using any two of voltage, resistance, power values\n");
    printf("4.press 4 for calculating resistance using any two of current, voltage, power values\n");
    printf("5.press 5 for calculating power using any two of current, resistance, voltage values\n");
    printf("6.press 6 to exit\n");
   
    scanf("%d",&B.initial_option);
    if(B.initial_option == 2)
    {
        
        printf("press 1 to find voltage using current and resistance \npress 2 to find voltage using current and power\npress 3 to find voltage using resistance and power\n ");
        scanf("%d",&B.vol_option);
        if(B.vol_option == 1)
        {
            float current_value, resistance_value, result_voltage;
            printf("value of current:");
            scanf("%f",&current_value);
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            result_voltage = vol_ir(current_value,resistance_value);
            printf("voltage = %.3fVolts\n",result_voltage);
        }
        if(B.vol_option == 2)
        {
            float current_value, power_value, result_voltage;
            printf("value of current:");
            scanf("%f",&current_value);
            printf("value of power:");
            scanf("%f",&power_value);
            result_voltage = vol_pi(power_value,current_value);
            printf("voltage = %.3fvolts\n",result_voltage);
        }
        if(B.vol_option == 3)
        {
            float power_value, resistance_value, result_voltage;
            printf("value of power:");
            scanf("%f",&power_value);
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            result_voltage = vol_pr(power_value,resistance_value);
            printf("voltage = %.3fvolts\n",result_voltage);
        }
    }
    if(B.initial_option == 3)
    {
       
        printf("press 1 to find current using voltage and resistance \npress 2 to find current using voltage and power\npress 3 to find current using resistance and power\n ");
        scanf("%d",&B.cur_option);
        if(B.cur_option == 1)
        {
            float voltage_value, resistance_value, result_current;
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            result_current = cur_vr(voltage_value,resistance_value);
            printf("current = %.3fAmperes\n",result_current);
        }
        if(B.cur_option == 2)
        {
            float voltage_value, power_value, result_current;
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            printf("value of power:");
            scanf("%f",&power_value);
            result_current = cur_pv(voltage_value,power_value);
            printf("current = %.3fAmperes\n",result_current);
        }
        if(B.cur_option == 3)
        {
            float power_value, resistance_value, result_current;
            printf("value of power:");
            scanf("%f",&power_value);
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            result_current = cur_pr(power_value,resistance_value);
            printf("current = %.3fAmperes\n",result_current);
        }
    }
    if(B.initial_option == 4)
    {
        
        printf("press 1 to find resistance using current and voltage \npress 2 to find resistance using current and power\npress 3 to find resistance using voltage and power\n ");
        scanf("%d",&B.res_option);
        if(B.res_option == 1)
        {
            float current_value, voltage_value, result_resistance;
            printf("value of current:");
            scanf("%f",&current_value);
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            result_resistance = res_vi(current_value,voltage_value);
            printf("resistance = %.3fOhms\n",result_resistance);
        }
        if(B.res_option == 2)
        {
            float current_value, power_value, result_resistance;
            printf("value of current:");
            scanf("%f",&current_value);
            printf("value of power:");
            scanf("%f",&power_value);
            result_resistance = res_pi(current_value,power_value);
            printf("resistance = %.3fOhms\n",result_resistance);
        }
        if(B.res_option == 3)
        {
            float power_value, voltage_value, result_resistance;
            printf("value of power:");
            scanf("%f",&power_value);
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            result_resistance = res_pv(power_value,voltage_value);
            printf("resistance = %.3fOhms\n",result_resistance);
        }
    }
if(B.initial_option == 5)
    {
        
        printf("press 1 to find power using voltage and current \npress 2 to find power using voltage and resistance \nPress 3 to find power using current and resistance\n ");
        scanf("%d",&B.pow_option);
        if(B.pow_option == 1)
        {
            float result_power, current_value, voltage_value;
            printf("value of current:");
            scanf("%f",&current_value);
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            result_power = pow_vi(voltage_value,current_value);
            printf("power = %.3fWatts\n",result_power);
        }
        if(B.pow_option == 2)
        {
            float voltage_value, resistance_value, result_power;
            printf("value of voltage:");
            scanf("%f",&voltage_value);
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            result_power = pow_vr(voltage_value,resistance_value);
            printf("power = %.3fWatts\n",result_power);
        }
        if(B.pow_option == 3)
        {
            float current_value, resistance_value, result_power;
            printf("value of resistance:");
            scanf("%f",&resistance_value);
            printf("value of voltage:");
            scanf("%f",&current_value);
            result_power = pow_ir(current_value,resistance_value);
            printf("power = %.3fWatts\n",result_power);
        }
    }
    if(B.initial_option == 1)
    {
        
        printf("Enter the number of colors on resistor:");
        scanf("%d",&B.num_colors);
        char value[100];
        char appendval[100];
        for(int i=0; i<B.num_colors ;i++)
        {
            char color[200];
            printf("Enter the %d colour:",i+1);
            scanf("%s",color);

            resistor_color(color,value,i,B.num_colors);
            strcat(appendval,value);
            
        }
        printf("Resistor value = %s\n",appendval);

    }

}

