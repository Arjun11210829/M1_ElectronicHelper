#include <stdio.h>
#include <math.h>
#include <string.h>

/*all functions for calculating voltage, power, current, resistance with the other two values and also to find resistance with color*/

float vol_irt(float i, float r)
{
    return i*r;
}
float vol_pit(float p, float i)
{
    return p/i;
}
float vol_prt(float p, float r)
{
    double vpr;
    vpr = sqrt(p*r);
    return vpr;
}
float cur_vrt(float v, float r)
{
    return v/r;
}
float cur_pvt(float v, float p)
{
    return p/v;
}
float cur_prt(float p, float r)
{
    double cpr;
    cpr = sqrt(p/r);
    return cpr;
}
float res_vit(float i, float v)
{
    return v/i;
}
float res_pvt(float p, float v)
{
    return (v*v)/p;
}
float res_pit(float i, float p)
{
    return p/(i*i);
}
float pow_vit(float v, float i)
{
    return v*i;
}
float pow_vrt(float v, float r)
{
    return (v*v)/r;
}
float pow_irt(float i, float r)
{
    return (i*i)*r;
}

void resistor_colort(char *res_clr,char *clr_val,int iter,int numclr)
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


