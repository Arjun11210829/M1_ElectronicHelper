#include "unity.h"
#include <stdio.h>
#include <string.h>

extern float vol_ir(float i, float r);
extern float vol_pi(float p, float i);
extern float vol_pr(float p, float r);
extern float cur_vr(float v, float r);
extern float cur_pv(float v, float p);
extern float cur_pr(float p, float r);
extern float res_vi(float i, float v);
extern float res_pv(float p, float v);
extern float res_pi(float i, float p);
extern float pow_vi(float v, float i);
extern float pow_vr(float v, float r);
extern float pow_ir(float i, float r);
void resistor_color1t();
/* Prototypes for all the test functions */
void test_vol_ir();
void test_vol_pi();
void test_vol_pr();
void test_cur_vr();
void test_cur_pv();
void test_cur_pr();
void test_res_vi();
void test_res_pv();
void test_res_pi();
void test_pow_vi();
void test_pow_vr();
void test_pow_ir();
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

/* Start of the application test */

int unity_test(void)
{
    UnityBegin(NULL);/* Initiate the Unity Test Framework */

/* Run Test functions */
    RUN_TEST(test_vol_ir);
    RUN_TEST(test_vol_pi);
    RUN_TEST(test_vol_pr);
    RUN_TEST(test_cur_vr);
    RUN_TEST(test_cur_pv);
    RUN_TEST(test_cur_pr);
    RUN_TEST(test_res_vi);
    RUN_TEST(test_res_pv);
    RUN_TEST(test_res_pi);
    RUN_TEST(test_pow_vi);
    RUN_TEST(test_pow_vr);
    RUN_TEST(test_pow_ir);
    RUN_TEST(resistor_color1t);

   
   

    return(UnityEnd()); /* Close the Unity Test Framework */
}

/* Write all the test functions */ 
void test_vol_ir() 
{
  TEST_ASSERT_EQUAL_FLOAT(72,vol_ir(3.6,20));
}

void test_vol_pi()
{
  TEST_ASSERT_EQUAL(47.61,vol_pi(200,4.2));
}

void test_vol_pr()
{
TEST_ASSERT_EQUAL_FLOAT(63.24555,vol_pr(200,20));
}
void test_cur_vr(){
TEST_ASSERT_EQUAL_FLOAT(0.48,cur_vr(12,25));
}
void test_cur_pv(){
TEST_ASSERT_EQUAL_FLOAT(12.5,cur_pv(24,300));
}
void test_cur_pr(){
TEST_ASSERT_EQUAL_FLOAT(0.5,cur_pr(500,2000));
}
void test_res_vi(){
TEST_ASSERT_EQUAL_FLOAT(3.157895,res_vi(3.8, 12));
}
void test_res_pv(){
TEST_ASSERT_EQUAL_FLOAT(0.48,res_pv(1200, 24));
}
void test_res_pi(){
TEST_ASSERT_EQUAL_FLOAT(7.324218,res_pi(12.8, 1200));
}
void test_pow_vi(){
TEST_ASSERT_EQUAL_FLOAT(1392, pow_vi(240, 5.8));
}
void test_pow_vr(){
TEST_ASSERT_EQUAL_FLOAT(115.2,pow_vr(240, 500));
}
void test_pow_ir(){
TEST_ASSERT_EQUAL_FLOAT(89780, pow_ir(6.7, 2000));
}

void resistor_color1t()
{
  char res_clr[20] = "white";
  char clr_val[20];
  int iter = 2;
  int numclr = 5;
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
  TEST_ASSERT_EQUAL_STRING("9",clr_val);       
}